#ifndef _DECL_MultistepOrbLB_H_
#define _DECL_MultistepOrbLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "OrbLB.decl.h"


/* DECLS: group MultistepOrbLB: OrbLB{
void MultistepOrbLB(const CkLBOptions &impl_noname_0);
MultistepOrbLB(CkMigrateMessage* impl_msg);
};
 */
 class MultistepOrbLB;
 class CkIndex_MultistepOrbLB;
 class CProxy_MultistepOrbLB;
 class CProxyElement_MultistepOrbLB;
 class CProxySection_MultistepOrbLB;
/* --------------- index object ------------------ */
class CkIndex_MultistepOrbLB:public CkIndex_OrbLB{
  public:
    typedef MultistepOrbLB local_t;
    typedef CkIndex_MultistepOrbLB index_t;
    typedef CProxy_MultistepOrbLB proxy_t;
    typedef CProxyElement_MultistepOrbLB element_t;
    typedef CProxySection_MultistepOrbLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void MultistepOrbLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_MultistepOrbLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_MultistepOrbLB_marshall1() {
      static int epidx = reg_MultistepOrbLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_MultistepOrbLB_marshall1(); }
    
    static void _call_MultistepOrbLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MultistepOrbLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MultistepOrbLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MultistepOrbLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: MultistepOrbLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MultistepOrbLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MultistepOrbLB_CkMigrateMessage() {
      static int epidx = reg_MultistepOrbLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MultistepOrbLB_CkMigrateMessage(); }
    
    static void _call_MultistepOrbLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MultistepOrbLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MultistepOrbLB: public CProxyElement_OrbLB{
  public:
    typedef MultistepOrbLB local_t;
    typedef CkIndex_MultistepOrbLB index_t;
    typedef CProxy_MultistepOrbLB proxy_t;
    typedef CProxyElement_MultistepOrbLB element_t;
    typedef CProxySection_MultistepOrbLB section_t;

    CProxyElement_MultistepOrbLB(void) {}
    CProxyElement_MultistepOrbLB(const IrrGroup *g) : CProxyElement_OrbLB(g){  }
    CProxyElement_MultistepOrbLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_OrbLB(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_MultistepOrbLB(CkGroupID _gid,int _onPE) : CProxyElement_OrbLB(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_OrbLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_OrbLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_OrbLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_OrbLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_OrbLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_OrbLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_OrbLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_OrbLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_OrbLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_OrbLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_OrbLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_OrbLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_OrbLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_OrbLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_OrbLB::ckSetGroupID(g);
    }
    MultistepOrbLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MultistepOrbLB* ckLocalBranch(CkGroupID gID) {
      return (MultistepOrbLB*)CkLocalBranch(gID);
    }
/* DECLS: void MultistepOrbLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: MultistepOrbLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_MultistepOrbLB)
/* ---------------- collective proxy -------------- */
class CProxy_MultistepOrbLB: public CProxy_OrbLB{
  public:
    typedef MultistepOrbLB local_t;
    typedef CkIndex_MultistepOrbLB index_t;
    typedef CProxy_MultistepOrbLB proxy_t;
    typedef CProxyElement_MultistepOrbLB element_t;
    typedef CProxySection_MultistepOrbLB section_t;

    CProxy_MultistepOrbLB(void) {}
    CProxy_MultistepOrbLB(const IrrGroup *g) : CProxy_OrbLB(g){  }
    CProxy_MultistepOrbLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_OrbLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MultistepOrbLB(CkGroupID _gid) : CProxy_OrbLB(_gid){  }
    CProxyElement_MultistepOrbLB operator[](int onPE) const
      {return CProxyElement_MultistepOrbLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_OrbLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_OrbLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_OrbLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_OrbLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_OrbLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_OrbLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_OrbLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_OrbLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_OrbLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_OrbLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_OrbLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_OrbLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_OrbLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_OrbLB::ckSetGroupID(g);
    }
    MultistepOrbLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MultistepOrbLB* ckLocalBranch(CkGroupID gID) {
      return (MultistepOrbLB*)CkLocalBranch(gID);
    }
/* DECLS: void MultistepOrbLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_MultistepOrbLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: MultistepOrbLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_MultistepOrbLB)
/* ---------------- section proxy -------------- */
class CProxySection_MultistepOrbLB: public CProxySection_OrbLB{
  public:
    typedef MultistepOrbLB local_t;
    typedef CkIndex_MultistepOrbLB index_t;
    typedef CProxy_MultistepOrbLB proxy_t;
    typedef CProxyElement_MultistepOrbLB element_t;
    typedef CProxySection_MultistepOrbLB section_t;

    CProxySection_MultistepOrbLB(void) {}
    CProxySection_MultistepOrbLB(const IrrGroup *g) : CProxySection_OrbLB(g){  }
    CProxySection_MultistepOrbLB(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_OrbLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MultistepOrbLB(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_OrbLB(_gid,_pelist,_npes){  }
    CProxySection_MultistepOrbLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_OrbLB(n,_gid,_pelist,_npes){  }
    CProxySection_MultistepOrbLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_OrbLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_OrbLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_OrbLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_OrbLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_OrbLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_OrbLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_OrbLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_OrbLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_OrbLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_OrbLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_OrbLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_OrbLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_OrbLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_OrbLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_OrbLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_OrbLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_OrbLB::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_OrbLB::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_OrbLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_OrbLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_OrbLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_OrbLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_OrbLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_OrbLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_OrbLB::ckSetGroupID(g);
    }
    MultistepOrbLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MultistepOrbLB* ckLocalBranch(CkGroupID gID) {
      return (MultistepOrbLB*)CkLocalBranch(gID);
    }
/* DECLS: void MultistepOrbLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: MultistepOrbLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_MultistepOrbLB)
#define MultistepOrbLB_SDAG_CODE 
typedef CBaseT1<OrbLB, CProxy_MultistepOrbLB>CBase_MultistepOrbLB;



/* ---------------- method closures -------------- */
class Closure_MultistepOrbLB {
  public:


};

extern void _registerMultistepOrbLB(void);
#endif
