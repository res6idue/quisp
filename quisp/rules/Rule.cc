#include "Rule.h"
#include <omnetpp.h>
#include "Action.h"
#include "Condition.h"

namespace quisp::rules {

Rule::Rule(int partner_address, QNIC_type qnic_type, int qnic_id, bool finalize): finalize(finalize) {
  partners.push_back(partner_address);
  qnic_types.push_back(qnic_type);
  qnic_ids.push_back(qnic_id);
};

void Rule::setCondition(std::unique_ptr<Condition> cond) { condition = std::move(cond); }

void Rule::setAction(std::unique_ptr<Action> act) { action = std::move(act); }

void Rule::setNextRule(int next_rule_id) {
  if (to != -1) {
    throw omnetpp::cRuntimeError("next_rule_id has already been set");
  } else {
    to = next_rule_id;
  }
}

json Rule::serialize_json() {
  json rule_json;
  rule_json["rule_id"] = rule_id;
  rule_json["next_rule_id"] = to;
  rule_json["name"] = name;
  rule_json["partners"] = partners;
  rule_json["qnic_type"] = qnic_types;
  rule_json["qnic_id"] = qnic_ids;
  if (condition != nullptr) {
    rule_json["condition"] = condition->serialize_json();
  }
  if (action != nullptr) {
    rule_json["action"] = action->serialize_json();
  }
  return rule_json;
}

void Rule::deserialize_json(json serialized) {
  // deserialize rule meta data
  serialized["rule_id"].get_to(rule_id);
  serialized["next_rule_id"].get_to(to);
  serialized["name"].get_to(name);
  serialized.at("partners").get_to(partners);
  serialized["qnic_type"].get_to(qnic_types);
  serialized["qnic_id"].get_to(qnic_ids);

  // deserialize actions
  if (serialized["action"] != nullptr) {  // action found
    auto serialized_action = serialized.at("action");
    auto action_name = serialized_action.at("type").get<std::string>();
    // check which action to be initialized
    if (action_name == "purification") {
      auto purification_action = std::make_unique<Purification>(serialized_action);
    } else if (action_name == "swapping") {
      auto swapping_action = std::make_unique<EntanglementSwapping>(serialized_action);
    } else if (action_name == "wait") {
      auto wait_action = std::make_unique<Wait>(serialized_action);
    } else if (action_name == "tomography") {
      auto tomography_action = std::make_unique<Tomography>(serialized_action);
    } else {
      throw omnetpp::cRuntimeError("No action type found");
    }
  }

  // deserialize conditions
  if (serialized["condition"] != nullptr) {  // condition found
    // empty condition
    auto empty_condition = std::make_unique<Condition>(serialized.at("condition"));
  }
}

}  // namespace quisp::rules
