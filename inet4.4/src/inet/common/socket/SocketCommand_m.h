//
// Generated file, do not edit! Created by opp_msgtool 6.0 from inet/common/socket/SocketCommand.msg.
//

#ifndef __INET_SOCKETCOMMAND_M_H
#define __INET_SOCKETCOMMAND_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class SocketCommandBase;
class SocketBindCommand;
class SocketCloseCommand;
class SocketDestroyCommand;
class SocketClosedIndication;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/Protocol_m.h" // import inet.common.Protocol

#include "inet/linklayer/common/MacAddress_m.h" // import inet.linklayer.common.MacAddress


namespace inet {

/**
 * Enum generated from <tt>inet/common/socket/SocketCommand.msg:15</tt> by opp_msgtool.
 * <pre>
 * enum SocketCommandCode
 * {
 *     SOCKET_C_DATA = 0;
 *     SOCKET_C_BIND = 1;
 *     SOCKET_C_OPEN = 2;
 *     SOCKET_C_CLOSE = 3;
 *     SOCKET_C_DESTROY = 4;
 * }
 * </pre>
 */
enum SocketCommandCode {
    SOCKET_C_DATA = 0,
    SOCKET_C_BIND = 1,
    SOCKET_C_OPEN = 2,
    SOCKET_C_CLOSE = 3,
    SOCKET_C_DESTROY = 4
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketCommandCode& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketCommandCode& e) { int n; b->unpack(n); e = static_cast<SocketCommandCode>(n); }

/**
 * Enum generated from <tt>inet/common/socket/SocketCommand.msg:24</tt> by opp_msgtool.
 * <pre>
 * enum SocketStatusInd
 * {
 *     SOCKET_I_DATA = 0;
 *     SOCKET_I_CLOSED = 1;
 * }
 * </pre>
 */
enum SocketStatusInd {
    SOCKET_I_DATA = 0,
    SOCKET_I_CLOSED = 1
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketStatusInd& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketStatusInd& e) { int n; b->unpack(n); e = static_cast<SocketStatusInd>(n); }

/**
 * Class generated from <tt>inet/common/socket/SocketCommand.msg:30</tt> by opp_msgtool.
 * <pre>
 * class SocketCommandBase extends cObject
 * {
 * }
 * </pre>
 */
class INET_API SocketCommandBase : public ::omnetpp::cObject
{
  protected:

  private:
    void copy(const SocketCommandBase& other);

  protected:
    bool operator==(const SocketCommandBase&) = delete;

  public:
    SocketCommandBase();
    SocketCommandBase(const SocketCommandBase& other);
    virtual ~SocketCommandBase();
    SocketCommandBase& operator=(const SocketCommandBase& other);
    virtual SocketCommandBase *dup() const override {return new SocketCommandBase(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketCommandBase& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketCommandBase& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/socket/SocketCommand.msg:34</tt> by opp_msgtool.
 * <pre>
 * class SocketBindCommand extends SocketCommandBase
 * {
 *     bool steal;
 * }
 * </pre>
 */
class INET_API SocketBindCommand : public ::inet::SocketCommandBase
{
  protected:
    bool steal = false;

  private:
    void copy(const SocketBindCommand& other);

  protected:
    bool operator==(const SocketBindCommand&) = delete;

  public:
    SocketBindCommand();
    SocketBindCommand(const SocketBindCommand& other);
    virtual ~SocketBindCommand();
    SocketBindCommand& operator=(const SocketBindCommand& other);
    virtual SocketBindCommand *dup() const override {return new SocketBindCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual bool getSteal() const;
    virtual void setSteal(bool steal);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketBindCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketBindCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/socket/SocketCommand.msg:39</tt> by opp_msgtool.
 * <pre>
 * class SocketCloseCommand extends SocketCommandBase
 * {
 * }
 * </pre>
 */
class INET_API SocketCloseCommand : public ::inet::SocketCommandBase
{
  protected:

  private:
    void copy(const SocketCloseCommand& other);

  protected:
    bool operator==(const SocketCloseCommand&) = delete;

  public:
    SocketCloseCommand();
    SocketCloseCommand(const SocketCloseCommand& other);
    virtual ~SocketCloseCommand();
    SocketCloseCommand& operator=(const SocketCloseCommand& other);
    virtual SocketCloseCommand *dup() const override {return new SocketCloseCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketCloseCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketCloseCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/socket/SocketCommand.msg:43</tt> by opp_msgtool.
 * <pre>
 * class SocketDestroyCommand extends SocketCommandBase
 * {
 * }
 * </pre>
 */
class INET_API SocketDestroyCommand : public ::inet::SocketCommandBase
{
  protected:

  private:
    void copy(const SocketDestroyCommand& other);

  protected:
    bool operator==(const SocketDestroyCommand&) = delete;

  public:
    SocketDestroyCommand();
    SocketDestroyCommand(const SocketDestroyCommand& other);
    virtual ~SocketDestroyCommand();
    SocketDestroyCommand& operator=(const SocketDestroyCommand& other);
    virtual SocketDestroyCommand *dup() const override {return new SocketDestroyCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketDestroyCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketDestroyCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/socket/SocketCommand.msg:47</tt> by opp_msgtool.
 * <pre>
 * class SocketClosedIndication extends SocketCommandBase
 * {
 * }
 * </pre>
 */
class INET_API SocketClosedIndication : public ::inet::SocketCommandBase
{
  protected:

  private:
    void copy(const SocketClosedIndication& other);

  protected:
    bool operator==(const SocketClosedIndication&) = delete;

  public:
    SocketClosedIndication();
    SocketClosedIndication(const SocketClosedIndication& other);
    virtual ~SocketClosedIndication();
    SocketClosedIndication& operator=(const SocketClosedIndication& other);
    virtual SocketClosedIndication *dup() const override {return new SocketClosedIndication(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SocketClosedIndication& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SocketClosedIndication& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::SocketCommandBase *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::SocketCommandBase*>(ptr.get<cObject>()); }
template<> inline inet::SocketBindCommand *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::SocketBindCommand*>(ptr.get<cObject>()); }
template<> inline inet::SocketCloseCommand *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::SocketCloseCommand*>(ptr.get<cObject>()); }
template<> inline inet::SocketDestroyCommand *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::SocketDestroyCommand*>(ptr.get<cObject>()); }
template<> inline inet::SocketClosedIndication *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::SocketClosedIndication*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_SOCKETCOMMAND_M_H

