//
// Generated file, do not edit! Created by nedtool 4.6 from veins/modules/messages/beaconFat.msg.
//

#ifndef _BEACONFAT_M_H_
#define _BEACONFAT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include <vector>
#include "WaveShortMessage_m.h"
typedef std::vector<int> IntVector;
// }}

/**
 * Class generated from <tt>veins/modules/messages/beaconFat.msg:26</tt> by nedtool.
 * <pre>
 * packet beaconFat extends WaveShortMessage
 * {
 *     IntVector indices;
 * 
 * 
 * }
 * </pre>
 */
class beaconFat : public ::WaveShortMessage
{
  protected:
    IntVector indices_var;

  private:
    void copy(const beaconFat& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const beaconFat&);

  public:
    beaconFat(const char *name=NULL, int kind=0);
    beaconFat(const beaconFat& other);
    virtual ~beaconFat();
    beaconFat& operator=(const beaconFat& other);
    virtual beaconFat *dup() const {return new beaconFat(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IntVector& getIndices();
    virtual const IntVector& getIndices() const {return const_cast<beaconFat*>(this)->getIndices();}
    virtual void setIndices(const IntVector& indices);
};

inline void doPacking(cCommBuffer *b, beaconFat& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, beaconFat& obj) {obj.parsimUnpack(b);}


#endif // ifndef _BEACONFAT_M_H_

