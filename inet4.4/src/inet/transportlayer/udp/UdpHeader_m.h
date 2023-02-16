//
// Generated file, do not edit! Created by opp_msgtool 6.0 from inet/transportlayer/udp/UdpHeader.msg.
//

#ifndef __INET_UDPHEADER_M_H
#define __INET_UDPHEADER_M_H

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

class UdpHeader;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/transportlayer/common/CrcMode_m.h" // import inet.transportlayer.common.CrcMode

#include "inet/transportlayer/contract/TransportHeaderBase_m.h" // import inet.transportlayer.contract.TransportHeaderBase

// cplusplus {{
#include "inet/common/INETUtils.h"
// }}


namespace inet {

// cplusplus {{
const B UDP_HEADER_LENGTH = B(8);
// }}

/**
 * Class generated from <tt>inet/transportlayer/udp/UdpHeader.msg:26</tt> by opp_msgtool.
 * <pre>
 * //
 * // Represents an Udp header, to be used with the ~Udp module.
 * //
 * class UdpHeader extends TransportHeaderBase
 * {
 *     unsigned short srcPort;
 *     unsigned short destPort;
 *     chunkLength = UDP_HEADER_LENGTH;
 *     B totalLengthField = B(-1);   // UDP header + payload in bytes
 *     uint16_t crc \@toString(utils::hex($)) \@fromString(utils::uhex($)) = 0;
 *     CrcMode crcMode = CRC_MODE_UNDEFINED;
 * }
 * </pre>
 */
class INET_API UdpHeader : public ::inet::TransportHeaderBase
{
  protected:
    unsigned short srcPort = 0;
    unsigned short destPort = 0;
    B totalLengthField = B(-1);
    uint16_t crc = 0;
    CrcMode crcMode = CRC_MODE_UNDEFINED;

  private:
    void copy(const UdpHeader& other);

  protected:
    bool operator==(const UdpHeader&) = delete;

  public:
    UdpHeader();
    UdpHeader(const UdpHeader& other);
    virtual ~UdpHeader();
    UdpHeader& operator=(const UdpHeader& other);
    virtual UdpHeader *dup() const override {return new UdpHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual unsigned short getSrcPort() const;
    virtual void setSrcPort(unsigned short srcPort);

    virtual unsigned short getDestPort() const;
    virtual void setDestPort(unsigned short destPort);

    virtual B getTotalLengthField() const;
    virtual void setTotalLengthField(B totalLengthField);

    virtual uint16_t getCrc() const;
    virtual void setCrc(uint16_t crc);

    virtual CrcMode getCrcMode() const;
    virtual void setCrcMode(CrcMode crcMode);


  public:
    virtual unsigned int getSourcePort() const override { return getSrcPort(); }
    virtual void setSourcePort(unsigned int port) override { setSrcPort(port); }
    virtual unsigned int getDestinationPort() const override { return getDestPort(); }
    virtual void setDestinationPort(unsigned int port) override { setDestPort(port); }
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const UdpHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, UdpHeader& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::UdpHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::UdpHeader*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_UDPHEADER_M_H

