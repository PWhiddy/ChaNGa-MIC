#ifndef _DECL_Orb3dLB_notopo_H_
#define _DECL_Orb3dLB_notopo_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CentralLB.decl.h"


/* DECLS: group Orb3dLB_notopo: CentralLB{
void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
Orb3dLB_notopo(CkMigrateMessage* impl_msg);
};
 */
 class Orb3dLB_notopo;
 class CkIndex_Orb3dLB_notopo;
 class CProxy_Orb3dLB_notopo;
 class CProxyElement_Orb3dLB_notopo;
 class CProxySection_Orb3dLB_notopo;
/* --------------- index object ------------------ */
class CkIndex_Orb3dLB_notopo:public CkIndex_CentralLB{
  public:
    typedef Orb3dLB_notopo local_t;
    typedef CkIndex_Orb3dLB_notopo index_t;
    typedef CProxy_Orb3dLB_notopo proxy_t;
    typedef CProxyElement_Orb3dLB_notopo element_t;
    typedef CProxySection_Orb3dLB_notopo section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_Orb3dLB_notopo_marshall1();
    // Entry point index lookup
    
    inline static int idx_Orb3dLB_notopo_marshall1() {
      static int epidx = reg_Orb3dLB_notopo_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_Orb3dLB_notopo_marshall1(); }
    
    static void _call_Orb3dLB_notopo_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Orb3dLB_notopo_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Orb3dLB_notopo_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Orb3dLB_notopo_marshall1(PUP::er &p,void *msg);
    /* DECLS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Orb3dLB_notopo_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Orb3dLB_notopo_CkMigrateMessage() {
      static int epidx = reg_Orb3dLB_notopo_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Orb3dLB_notopo_CkMigrateMessage(); }
    
    static void _call_Orb3dLB_notopo_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Orb3dLB_notopo_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Orb3dLB_notopo: public CProxyElement_CentralLB{
  public:
    typedef Orb3dLB_notopo local_t;
    typedef CkIndex_Orb3dLB_notopo index_t;
    typedef CProxy_Orb3dLB_notopo proxy_t;
    typedef CProxyElement_Orb3dLB_notopo element_t;
    typedef CProxySection_Orb3dLB_notopo section_t;

    CProxyElement_Orb3dLB_notopo(void) {}
    CProxyElement_Orb3dLB_notopo(const IrrGroup *g) : CProxyElement_CentralLB(g){  }
    CProxyElement_Orb3dLB_notopo(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CentralLB(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_Orb3dLB_notopo(CkGroupID _gid,int _onPE) : CProxyElement_CentralLB(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CentralLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CentralLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CentralLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CentralLB::ckSetGroupID(g);
    }
    Orb3dLB_notopo* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Orb3dLB_notopo* ckLocalBranch(CkGroupID gID) {
      return (Orb3dLB_notopo*)CkLocalBranch(gID);
    }
/* DECLS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Orb3dLB_notopo)
/* ---------------- collective proxy -------------- */
class CProxy_Orb3dLB_notopo: public CProxy_CentralLB{
  public:
    typedef Orb3dLB_notopo local_t;
    typedef CkIndex_Orb3dLB_notopo index_t;
    typedef CProxy_Orb3dLB_notopo proxy_t;
    typedef CProxyElement_Orb3dLB_notopo element_t;
    typedef CProxySection_Orb3dLB_notopo section_t;

    CProxy_Orb3dLB_notopo(void) {}
    CProxy_Orb3dLB_notopo(const IrrGroup *g) : CProxy_CentralLB(g){  }
    CProxy_Orb3dLB_notopo(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CentralLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Orb3dLB_notopo(CkGroupID _gid) : CProxy_CentralLB(_gid){  }
    CProxyElement_Orb3dLB_notopo operator[](int onPE) const
      {return CProxyElement_Orb3dLB_notopo(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CentralLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CentralLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CentralLB::ckSetGroupID(g);
    }
    Orb3dLB_notopo* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Orb3dLB_notopo* ckLocalBranch(CkGroupID gID) {
      return (Orb3dLB_notopo*)CkLocalBranch(gID);
    }
/* DECLS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_Orb3dLB_notopo(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Orb3dLB_notopo)
/* ---------------- section proxy -------------- */
class CProxySection_Orb3dLB_notopo: public CProxySection_CentralLB{
  public:
    typedef Orb3dLB_notopo local_t;
    typedef CkIndex_Orb3dLB_notopo index_t;
    typedef CProxy_Orb3dLB_notopo proxy_t;
    typedef CProxyElement_Orb3dLB_notopo element_t;
    typedef CProxySection_Orb3dLB_notopo section_t;

    CProxySection_Orb3dLB_notopo(void) {}
    CProxySection_Orb3dLB_notopo(const IrrGroup *g) : CProxySection_CentralLB(g){  }
    CProxySection_Orb3dLB_notopo(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CentralLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Orb3dLB_notopo(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CentralLB(_gid,_pelist,_npes){  }
    CProxySection_Orb3dLB_notopo(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CentralLB(n,_gid,_pelist,_npes){  }
    CProxySection_Orb3dLB_notopo(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CentralLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CentralLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CentralLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CentralLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CentralLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CentralLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CentralLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CentralLB::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CentralLB::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CentralLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CentralLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CentralLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CentralLB::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CentralLB::ckSetGroupID(g);
    }
    Orb3dLB_notopo* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Orb3dLB_notopo* ckLocalBranch(CkGroupID gID) {
      return (Orb3dLB_notopo*)CkLocalBranch(gID);
    }
/* DECLS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Orb3dLB_notopo)
#define Orb3dLB_notopo_SDAG_CODE 
typedef CBaseT1<CentralLB, CProxy_Orb3dLB_notopo>CBase_Orb3dLB_notopo;



/* ---------------- method closures -------------- */
class Closure_Orb3dLB_notopo {
  public:


};

extern void _registerOrb3dLB_notopo(void);
#endif
