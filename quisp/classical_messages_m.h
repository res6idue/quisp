//
// Generated file, do not edit! Created by nedtool 5.2 from classical_messages.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __CLASSICAL_MESSAGES_M_H
#define __CLASSICAL_MESSAGES_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0502
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>classical_messages.msg:2</tt> by nedtool.
 * <pre>
 * packet header
 * {
 *     int srcAddr;
 *     int destAddr;
 *     int hopCount;
 * }
 * </pre>
 */
class header : public ::omnetpp::cPacket
{
  protected:
    int srcAddr;
    int destAddr;
    int hopCount;

  private:
    void copy(const header& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const header&);

  public:
    header(const char *name=nullptr, short kind=0);
    header(const header& other);
    virtual ~header();
    header& operator=(const header& other);
    virtual header *dup() const override {return new header(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSrcAddr() const;
    virtual void setSrcAddr(int srcAddr);
    virtual int getDestAddr() const;
    virtual void setDestAddr(int destAddr);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const header& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, header& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:9</tt> by nedtool.
 * <pre>
 * packet BSMtimingNotifier extends header
 * {
 *     simtime_t timing_at;
 *     int accepted_photons_per_sec;
 *     double interval;
 *     int number_of_qubits;
 *     int internal_qnic = -1;
 * }
 * </pre>
 */
class BSMtimingNotifier : public ::header
{
  protected:
    ::omnetpp::simtime_t timing_at;
    int accepted_photons_per_sec;
    double interval;
    int number_of_qubits;
    int internal_qnic;

  private:
    void copy(const BSMtimingNotifier& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BSMtimingNotifier&);

  public:
    BSMtimingNotifier(const char *name=nullptr, short kind=0);
    BSMtimingNotifier(const BSMtimingNotifier& other);
    virtual ~BSMtimingNotifier();
    BSMtimingNotifier& operator=(const BSMtimingNotifier& other);
    virtual BSMtimingNotifier *dup() const override {return new BSMtimingNotifier(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getTiming_at() const;
    virtual void setTiming_at(::omnetpp::simtime_t timing_at);
    virtual int getAccepted_photons_per_sec() const;
    virtual void setAccepted_photons_per_sec(int accepted_photons_per_sec);
    virtual double getInterval() const;
    virtual void setInterval(double interval);
    virtual int getNumber_of_qubits() const;
    virtual void setNumber_of_qubits(int number_of_qubits);
    virtual int getInternal_qnic() const;
    virtual void setInternal_qnic(int internal_qnic);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BSMtimingNotifier& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BSMtimingNotifier& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:18</tt> by nedtool.
 * <pre>
 * packet EPPStimingNotifier extends header
 * {
 *     simtime_t timing_at;
 *     double interval;
 *     int number_of_qubits;
 *     int internal_qnic = -1;
 * }
 * </pre>
 */
class EPPStimingNotifier : public ::header
{
  protected:
    ::omnetpp::simtime_t timing_at;
    double interval;
    int number_of_qubits;
    int internal_qnic;

  private:
    void copy(const EPPStimingNotifier& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EPPStimingNotifier&);

  public:
    EPPStimingNotifier(const char *name=nullptr, short kind=0);
    EPPStimingNotifier(const EPPStimingNotifier& other);
    virtual ~EPPStimingNotifier();
    EPPStimingNotifier& operator=(const EPPStimingNotifier& other);
    virtual EPPStimingNotifier *dup() const override {return new EPPStimingNotifier(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getTiming_at() const;
    virtual void setTiming_at(::omnetpp::simtime_t timing_at);
    virtual double getInterval() const;
    virtual void setInterval(double interval);
    virtual int getNumber_of_qubits() const;
    virtual void setNumber_of_qubits(int number_of_qubits);
    virtual int getInternal_qnic() const;
    virtual void setInternal_qnic(int internal_qnic);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EPPStimingNotifier& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EPPStimingNotifier& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:26</tt> by nedtool.
 * <pre>
 * packet EmitPhotonRequest extends header
 * {
 *     int qubit_index;
 *     int qnic_index;
 *     int qnic_type;
 *     bool receiver;
 *     bool first;
 *     bool last;
 *     int trial;
 * }
 * </pre>
 */
class EmitPhotonRequest : public ::header
{
  protected:
    int qubit_index;
    int qnic_index;
    int qnic_type;
    bool receiver;
    bool first;
    bool last;
    int trial;

  private:
    void copy(const EmitPhotonRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EmitPhotonRequest&);

  public:
    EmitPhotonRequest(const char *name=nullptr, short kind=0);
    EmitPhotonRequest(const EmitPhotonRequest& other);
    virtual ~EmitPhotonRequest();
    EmitPhotonRequest& operator=(const EmitPhotonRequest& other);
    virtual EmitPhotonRequest *dup() const override {return new EmitPhotonRequest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getQubit_index() const;
    virtual void setQubit_index(int qubit_index);
    virtual int getQnic_index() const;
    virtual void setQnic_index(int qnic_index);
    virtual int getQnic_type() const;
    virtual void setQnic_type(int qnic_type);
    virtual bool getReceiver() const;
    virtual void setReceiver(bool receiver);
    virtual bool getFirst() const;
    virtual void setFirst(bool first);
    virtual bool getLast() const;
    virtual void setLast(bool last);
    virtual int getTrial() const;
    virtual void setTrial(int trial);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EmitPhotonRequest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EmitPhotonRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:37</tt> by nedtool.
 * <pre>
 * packet SchedulePhotonTransmissionsOnebyOne extends header
 * {
 *     int qnic_index;
 *     int num_sent = 0;
 *     int number_of_qubits_to_send;
 *     int trial;
 *     double interval;
 *     simtime_t timing;
 *     int internal_hom = 0;
 * }
 * </pre>
 */
class SchedulePhotonTransmissionsOnebyOne : public ::header
{
  protected:
    int qnic_index;
    int num_sent;
    int number_of_qubits_to_send;
    int trial;
    double interval;
    ::omnetpp::simtime_t timing;
    int internal_hom;

  private:
    void copy(const SchedulePhotonTransmissionsOnebyOne& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SchedulePhotonTransmissionsOnebyOne&);

  public:
    SchedulePhotonTransmissionsOnebyOne(const char *name=nullptr, short kind=0);
    SchedulePhotonTransmissionsOnebyOne(const SchedulePhotonTransmissionsOnebyOne& other);
    virtual ~SchedulePhotonTransmissionsOnebyOne();
    SchedulePhotonTransmissionsOnebyOne& operator=(const SchedulePhotonTransmissionsOnebyOne& other);
    virtual SchedulePhotonTransmissionsOnebyOne *dup() const override {return new SchedulePhotonTransmissionsOnebyOne(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getQnic_index() const;
    virtual void setQnic_index(int qnic_index);
    virtual int getNum_sent() const;
    virtual void setNum_sent(int num_sent);
    virtual int getNumber_of_qubits_to_send() const;
    virtual void setNumber_of_qubits_to_send(int number_of_qubits_to_send);
    virtual int getTrial() const;
    virtual void setTrial(int trial);
    virtual double getInterval() const;
    virtual void setInterval(double interval);
    virtual ::omnetpp::simtime_t getTiming() const;
    virtual void setTiming(::omnetpp::simtime_t timing);
    virtual int getInternal_hom() const;
    virtual void setInternal_hom(int internal_hom);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SchedulePhotonTransmissionsOnebyOne& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SchedulePhotonTransmissionsOnebyOne& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:48</tt> by nedtool.
 * <pre>
 * packet BSAresult extends header
 * {
 *     bool entangled;
 * }
 * </pre>
 */
class BSAresult : public ::header
{
  protected:
    bool entangled;

  private:
    void copy(const BSAresult& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BSAresult&);

  public:
    BSAresult(const char *name=nullptr, short kind=0);
    BSAresult(const BSAresult& other);
    virtual ~BSAresult();
    BSAresult& operator=(const BSAresult& other);
    virtual BSAresult *dup() const override {return new BSAresult(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getEntangled() const;
    virtual void setEntangled(bool entangled);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BSAresult& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BSAresult& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:52</tt> by nedtool.
 * <pre>
 * packet BSAfinish extends header
 * {
 *     bool entangled;
 * }
 * </pre>
 */
class BSAfinish : public ::header
{
  protected:
    bool entangled;

  private:
    void copy(const BSAfinish& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BSAfinish&);

  public:
    BSAfinish(const char *name=nullptr, short kind=0);
    BSAfinish(const BSAfinish& other);
    virtual ~BSAfinish();
    BSAfinish& operator=(const BSAfinish& other);
    virtual BSAfinish *dup() const override {return new BSAfinish(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getEntangled() const;
    virtual void setEntangled(bool entangled);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BSAfinish& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BSAfinish& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:58</tt> by nedtool.
 * <pre>
 * //Used for MIM and MM. BSA results are sent back to the neighboring nodes, together with the timing notifier
 * packet CombinedBSAresults extends BSMtimingNotifier
 * {
 *     bool list_of_failed[];
 * }
 * </pre>
 */
class CombinedBSAresults : public ::BSMtimingNotifier
{
  protected:
    bool *list_of_failed; // array ptr
    unsigned int list_of_failed_arraysize;

  private:
    void copy(const CombinedBSAresults& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CombinedBSAresults&);

  public:
    CombinedBSAresults(const char *name=nullptr, short kind=0);
    CombinedBSAresults(const CombinedBSAresults& other);
    virtual ~CombinedBSAresults();
    CombinedBSAresults& operator=(const CombinedBSAresults& other);
    virtual CombinedBSAresults *dup() const override {return new CombinedBSAresults(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setList_of_failedArraySize(unsigned int size);
    virtual unsigned int getList_of_failedArraySize() const;
    virtual bool getList_of_failed(unsigned int k) const;
    virtual void setList_of_failed(unsigned int k, bool list_of_failed);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CombinedBSAresults& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CombinedBSAresults& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>classical_messages.msg:64</tt> by nedtool.
 * <pre>
 * //Used for MSM. BSA results are sent back to EPPS. EPPS will generate the next order based on that.
 * packet CombinedBSAresults_epps extends header
 * {
 *     bool list_of_failed[];
 * }
 * </pre>
 */
class CombinedBSAresults_epps : public ::header
{
  protected:
    bool *list_of_failed; // array ptr
    unsigned int list_of_failed_arraysize;

  private:
    void copy(const CombinedBSAresults_epps& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CombinedBSAresults_epps&);

  public:
    CombinedBSAresults_epps(const char *name=nullptr, short kind=0);
    CombinedBSAresults_epps(const CombinedBSAresults_epps& other);
    virtual ~CombinedBSAresults_epps();
    CombinedBSAresults_epps& operator=(const CombinedBSAresults_epps& other);
    virtual CombinedBSAresults_epps *dup() const override {return new CombinedBSAresults_epps(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setList_of_failedArraySize(unsigned int size);
    virtual unsigned int getList_of_failedArraySize() const;
    virtual bool getList_of_failed(unsigned int k) const;
    virtual void setList_of_failed(unsigned int k, bool list_of_failed);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CombinedBSAresults_epps& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CombinedBSAresults_epps& obj) {obj.parsimUnpack(b);}


#endif // ifndef __CLASSICAL_MESSAGES_M_H

