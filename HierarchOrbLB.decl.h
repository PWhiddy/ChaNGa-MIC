#ifndef _DECL_HierarchOrbLB_H_
#define _DECL_HierarchOrbLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "LBDatabase.decl.h"

#include "HybridBaseLB.decl.h"


/* DECLS: group HierarchOrbLB: HybridBaseLB{
void HierarchOrbLB(const CkLBOptions &impl_noname_0);
HierarchOrbLB(CkMigrateMessage* impl_msg);
};
 */
 class HierarchOrbLB;
 class CkIndex_HierarchOrbLB;
 class CProxy_HierarchOrbLB;
 class CProxyElement_HierarchOrbLB;
 class CProxySection_HierarchOrbLB;
/* --------------- index object ------------------ */
class CkIndex_HierarchOrbLB:public CkIndex_HybridBaseLB{
  public:
    typedef HierarchOrbLB local_t;
    typedef CkIndex_HierarchOrbLB index_t;
    typedef CProxy_HierarchOrbLB proxy_t;
    typedef CProxyElement_HierarchOrbLB element_t;
    typedef CProxySection_HierarchOrbLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_HierarchOrbLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_HierarchOrbLB_marshall1() {
      static int epidx = reg_HierarchOrbLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_HierarchOrbLB_marshall1(); }
    
    static void _call_HierarchOrbLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HierarchOrbLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_HierarchOrbLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_HierarchOrbLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: HierarchOrbLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_HierarchOrbLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_HierarchOrbLB_CkMigrateMessage() {
      static int epidx = reg_HierarchOrbLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_HierarchOrbLB_CkMigrateMessage(); }
    
    static void _call_HierarchOrbLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HierarchOrbLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_HierarchOrbLB: public CProxyElement_HybridBaseLB{
  public:
    typedef HierarchOrbLB local_t;
    typedef CkIndex_HierarchOrbLB index_t;
    typedef CProxy_HierarchOrbLB proxy_t;
    typedef CProxyElement_HierarchOrbLB element_t;
    typedef CProxySection_HierarchOrbLB section_t;

    CProxyElement_HierarchOrbLB(void) {}
    CProxyElement_HierarchOrbLB(const IrrGroup *g) : CProxyElement_HybridBaseLB(g){  }
    CProxyElement_HierarchOrbLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_HybridBaseLB(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_HierarchOrbLB(CkGroupID _gid,int _onPE) : CProxyElement_HybridBaseLB(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_HybridBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_HybridBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_HybridBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_HybridBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_HybridBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_HybridBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_HybridBaseLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_HybridBaseLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_HybridBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_HybridBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_HybridBaseLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_HybridBaseLB::ckSetGroupID(g);
    }
    HierarchOrbLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HierarchOrbLB* ckLocalBranch(CkGroupID gID) {
      return (HierarchOrbLB*)CkLocalBranch(gID);
    }
/* DECLS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: HierarchOrbLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_HierarchOrbLB)
/* ---------------- collective proxy -------------- */
class CProxy_HierarchOrbLB: public CProxy_HybridBaseLB{
  public:
    typedef HierarchOrbLB local_t;
    typedef CkIndex_HierarchOrbLB index_t;
    typedef CProxy_HierarchOrbLB proxy_t;
    typedef CProxyElement_HierarchOrbLB element_t;
    typedef CProxySection_HierarchOrbLB section_t;

    CProxy_HierarchOrbLB(void) {}
    CProxy_HierarchOrbLB(const IrrGroup *g) : CProxy_HybridBaseLB(g){  }
    CProxy_HierarchOrbLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_HybridBaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_HierarchOrbLB(CkGroupID _gid) : CProxy_HybridBaseLB(_gid){  }
    CProxyElement_HierarchOrbLB operator[](int onPE) const
      {return CProxyElement_HierarchOrbLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_HybridBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_HybridBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_HybridBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_HybridBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_HybridBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_HybridBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_HybridBaseLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_HybridBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_HybridBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_HybridBaseLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_HybridBaseLB::ckSetGroupID(g);
    }
    HierarchOrbLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HierarchOrbLB* ckLocalBranch(CkGroupID gID) {
      return (HierarchOrbLB*)CkLocalBranch(gID);
    }
/* DECLS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_HierarchOrbLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: HierarchOrbLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_HierarchOrbLB)
/* ---------------- section proxy -------------- */
class CProxySection_HierarchOrbLB: public CProxySection_HybridBaseLB{
  public:
    typedef HierarchOrbLB local_t;
    typedef CkIndex_HierarchOrbLB index_t;
    typedef CProxy_HierarchOrbLB proxy_t;
    typedef CProxyElement_HierarchOrbLB element_t;
    typedef CProxySection_HierarchOrbLB section_t;

    CProxySection_HierarchOrbLB(void) {}
    CProxySection_HierarchOrbLB(const IrrGroup *g) : CProxySection_HybridBaseLB(g){  }
    CProxySection_HierarchOrbLB(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_HybridBaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_HierarchOrbLB(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_HybridBaseLB(_gid,_pelist,_npes){  }
    CProxySection_HierarchOrbLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_HybridBaseLB(n,_gid,_pelist,_npes){  }
    CProxySection_HierarchOrbLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_HybridBaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_HybridBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_HybridBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_HybridBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_HybridBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_HybridBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_HybridBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_HybridBaseLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_HybridBaseLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_HybridBaseLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_HybridBaseLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_HybridBaseLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_HybridBaseLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_HybridBaseLB::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_HybridBaseLB::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_HybridBaseLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_HybridBaseLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_HybridBaseLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_HybridBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_HybridBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_HybridBaseLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_HybridBaseLB::ckSetGroupID(g);
    }
    HierarchOrbLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HierarchOrbLB* ckLocalBranch(CkGroupID gID) {
      return (HierarchOrbLB*)CkLocalBranch(gID);
    }
/* DECLS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: HierarchOrbLB(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_HierarchOrbLB)
#define HierarchOrbLB_SDAG_CODE 
typedef CBaseT1<HybridBaseLB, CProxy_HierarchOrbLB>CBase_HierarchOrbLB;




/* ---------------- method closures -------------- */
class Closure_HierarchOrbLB {
  public:


};

extern void _registerHierarchOrbLB(void);
#endif
