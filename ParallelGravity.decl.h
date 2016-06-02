#ifndef _DECL_ParallelGravity_H_
#define _DECL_ParallelGravity_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "Reductions.decl.h"

#include "keytype.h"

/* DECLS: readonly CProxy_Main mainChare;
 */

/* DECLS: readonly int verbosity;
 */

/* DECLS: readonly CProxy_TreePiece treeProxy;
 */

/* DECLS: readonly CProxy_ReductionHelper reductionHelperProxy;
 */

/* DECLS: readonly CProxy_LvArray lvProxy;
 */

/* DECLS: readonly CProxy_LvArray smoothProxy;
 */

/* DECLS: readonly CProxy_LvArray gravityProxy;
 */

/* DECLS: readonly CProxy_TreePiece streamingProxy;
 */

/* DECLS: readonly CProxy_CkCacheManager<KeyType > cacheNode;
 */

/* DECLS: readonly CProxy_CkCacheManager<KeyType > cacheGravPart;
 */

/* DECLS: readonly CProxy_CkCacheManager<KeyType > cacheSmoothPart;
 */

/* DECLS: readonly CProxy_DataManager dMProxy;
 */

/* DECLS: readonly CProxy_PETreeMerger peTreeMergerProxy;
 */

/* DECLS: readonly CProxy_DumpFrameData dfDataProxy;
 */

/* DECLS: readonly CProxy_IntraNodeLBManager nodeLBMgrProxy;
 */

/* DECLS: readonly bool _cache;
 */

/* DECLS: readonly int _nocache;
 */

/* DECLS: readonly int _cacheLineDepth;
 */

/* DECLS: readonly unsigned int _yieldPeriod;
 */

/* DECLS: readonly DomainsDec domainDecomposition;
 */

/* DECLS: readonly double dExtraStore;
 */

/* DECLS: readonly double dMaxBalance;
 */

/* DECLS: readonly double dFracLoadBalance;
 */

/* DECLS: readonly int bUseCkLoopPar;
 */

/* DECLS: readonly int peanoKey;
 */

/* DECLS: readonly GenericTrees useTree;
 */

/* DECLS: readonly int _prefetch;
 */

/* DECLS: readonly int _randChunks;
 */

/* DECLS: readonly int _numChunks;
 */

/* DECLS: readonly CkArrayID treePieceID;
 */

/* DECLS: readonly CkGroupID dataManagerID;
 */

/* DECLS: readonly unsigned int numTreePieces;
 */

/* DECLS: readonly unsigned int particlesPerChare;
 */

/* DECLS: readonly unsigned int bucketSize;
 */

/* DECLS: readonly int nIOProcessor;
 */

/* DECLS: readonly int lbcomm_cutoff_msgs;
 */

/* DECLS: readonly int localNodesPerReq;
 */

/* DECLS: readonly int remoteNodesPerReq;
 */

/* DECLS: readonly int remoteResumeNodesPerReq;
 */

/* DECLS: readonly int localPartsPerReq;
 */

/* DECLS: readonly int remotePartsPerReq;
 */

/* DECLS: readonly int remoteResumePartsPerReq;
 */

/* DECLS: readonly double largePhaseThreshold;
 */

/* DECLS: readonly int boundaryEvaluationUE;
 */

/* DECLS: readonly int weightBalanceUE;
 */

/* DECLS: readonly int networkProgressUE;
 */

/* DECLS: readonly int nodeForceUE;
 */

/* DECLS: readonly int partForceUE;
 */

/* DECLS: readonly int tbRecursiveUE;
 */

/* DECLS: readonly int tbFlushRequestsUE;
 */

/* DECLS: readonly int prefetchDoneUE;
 */

/* DECLS: readonly CProxy_ProjectionsControl prjgrp;
 */

/* DECLS: readonly int numInitDecompBins;
 */

/* DECLS: readonly int octRefineLevel;
 */

/* DECLS: readonly bool doDumpLB;
 */

/* DECLS: readonly int lbDumpIteration;
 */

/* DECLS: readonly bool doSimulateLB;
 */

/* DECLS: message dummyMsg;
 */
class dummyMsg;
class CMessage_dummyMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_dummyMsg();
    static void *pack(dummyMsg *p);
    static dummyMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeChunkMsg;
 */
class ComputeChunkMsg;
class CMessage_ComputeChunkMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_ComputeChunkMsg();
    static void *pack(ComputeChunkMsg *p);
    static ComputeChunkMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ORBSplittersMsg{
double pos[];
char dim[];
}
;
 */
class ORBSplittersMsg;
class CMessage_ORBSplittersMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_ORBSplittersMsg();
    static void *pack(ORBSplittersMsg *p);
    static ORBSplittersMsg* unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ParticleShuffleMsg{
double loads[];
unsigned int parts_per_phase[];
GravityParticle particles[];
extraSPHData pGas[];
extraStarData pStar[];
}
;
 */
class ParticleShuffleMsg;
class CMessage_ParticleShuffleMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_ParticleShuffleMsg();
    static void *pack(ParticleShuffleMsg *p);
    static ParticleShuffleMsg* unpack(void* p);
    void *operator new(size_t, int, int, int, int, int);
    void *operator new(size_t, int, int, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

















































/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
threaded void setupICs(void);
threaded void initialForces(void);
threaded void doSimulation(void);
threaded void restart(CkCheckpointStatusMsg* impl_msg);
threaded void cbOpen(Ck::IO::FileReadyMsg* impl_msg);
void cbIOReady(Ck::IO::SessionReadyMsg* impl_msg);
void cbIOComplete(CkMessage* impl_msg);
threaded void cbIOClosed(CkMessage* impl_msg);
void niceExit(void);
void liveVizImagePrep(liveVizRequestMsg* impl_msg);
Main(CkMigrateMessage* impl_msg);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void setupICs(void);
     */
    // Entry point registration at startup
    
    static int reg_setupICs_void();
    // Entry point index lookup
    
    inline static int idx_setupICs_void() {
      static int epidx = reg_setupICs_void();
      return epidx;
    }

    
    inline static int idx_setupICs(void (Main::*)(void) ) {
      return idx_setupICs_void();
    }


    
    static int setupICs(void) { return idx_setupICs_void(); }
    
    static void _call_setupICs_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setupICs_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_setupICs_void(CkThrCallArg *);
    /* DECLS: threaded void initialForces(void);
     */
    // Entry point registration at startup
    
    static int reg_initialForces_void();
    // Entry point index lookup
    
    inline static int idx_initialForces_void() {
      static int epidx = reg_initialForces_void();
      return epidx;
    }

    
    inline static int idx_initialForces(void (Main::*)(void) ) {
      return idx_initialForces_void();
    }


    
    static int initialForces(void) { return idx_initialForces_void(); }
    
    static void _call_initialForces_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialForces_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_initialForces_void(CkThrCallArg *);
    /* DECLS: threaded void doSimulation(void);
     */
    // Entry point registration at startup
    
    static int reg_doSimulation_void();
    // Entry point index lookup
    
    inline static int idx_doSimulation_void() {
      static int epidx = reg_doSimulation_void();
      return epidx;
    }

    
    inline static int idx_doSimulation(void (Main::*)(void) ) {
      return idx_doSimulation_void();
    }


    
    static int doSimulation(void) { return idx_doSimulation_void(); }
    
    static void _call_doSimulation_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doSimulation_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_doSimulation_void(CkThrCallArg *);
    /* DECLS: threaded void restart(CkCheckpointStatusMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_restart_CkCheckpointStatusMsg();
    // Entry point index lookup
    
    inline static int idx_restart_CkCheckpointStatusMsg() {
      static int epidx = reg_restart_CkCheckpointStatusMsg();
      return epidx;
    }

    
    inline static int idx_restart(void (Main::*)(CkCheckpointStatusMsg* impl_msg) ) {
      return idx_restart_CkCheckpointStatusMsg();
    }


    
    static int restart(CkCheckpointStatusMsg* impl_msg) { return idx_restart_CkCheckpointStatusMsg(); }
    
    static void _call_restart_CkCheckpointStatusMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_restart_CkCheckpointStatusMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_restart_CkCheckpointStatusMsg(CkThrCallArg *);
    /* DECLS: threaded void cbOpen(Ck::IO::FileReadyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_cbOpen_FileReadyMsg();
    // Entry point index lookup
    
    inline static int idx_cbOpen_FileReadyMsg() {
      static int epidx = reg_cbOpen_FileReadyMsg();
      return epidx;
    }

    
    inline static int idx_cbOpen(void (Main::*)(Ck::IO::FileReadyMsg* impl_msg) ) {
      return idx_cbOpen_FileReadyMsg();
    }


    
    static int cbOpen(Ck::IO::FileReadyMsg* impl_msg) { return idx_cbOpen_FileReadyMsg(); }
    
    static void _call_cbOpen_FileReadyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cbOpen_FileReadyMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_cbOpen_FileReadyMsg(CkThrCallArg *);
    /* DECLS: void cbIOReady(Ck::IO::SessionReadyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_cbIOReady_SessionReadyMsg();
    // Entry point index lookup
    
    inline static int idx_cbIOReady_SessionReadyMsg() {
      static int epidx = reg_cbIOReady_SessionReadyMsg();
      return epidx;
    }

    
    inline static int idx_cbIOReady(void (Main::*)(Ck::IO::SessionReadyMsg* impl_msg) ) {
      return idx_cbIOReady_SessionReadyMsg();
    }


    
    static int cbIOReady(Ck::IO::SessionReadyMsg* impl_msg) { return idx_cbIOReady_SessionReadyMsg(); }
    
    static void _call_cbIOReady_SessionReadyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cbIOReady_SessionReadyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void cbIOComplete(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_cbIOComplete_CkMessage();
    // Entry point index lookup
    
    inline static int idx_cbIOComplete_CkMessage() {
      static int epidx = reg_cbIOComplete_CkMessage();
      return epidx;
    }

    
    inline static int idx_cbIOComplete(void (Main::*)(CkMessage* impl_msg) ) {
      return idx_cbIOComplete_CkMessage();
    }


    
    static int cbIOComplete(CkMessage* impl_msg) { return idx_cbIOComplete_CkMessage(); }
    
    static void _call_cbIOComplete_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cbIOComplete_CkMessage(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void cbIOClosed(CkMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_cbIOClosed_CkMessage();
    // Entry point index lookup
    
    inline static int idx_cbIOClosed_CkMessage() {
      static int epidx = reg_cbIOClosed_CkMessage();
      return epidx;
    }

    
    inline static int idx_cbIOClosed(void (Main::*)(CkMessage* impl_msg) ) {
      return idx_cbIOClosed_CkMessage();
    }


    
    static int cbIOClosed(CkMessage* impl_msg) { return idx_cbIOClosed_CkMessage(); }
    
    static void _call_cbIOClosed_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cbIOClosed_CkMessage(void* impl_msg, void* impl_obj);
    
    static void _callthr_cbIOClosed_CkMessage(CkThrCallArg *);
    /* DECLS: void niceExit(void);
     */
    // Entry point registration at startup
    
    static int reg_niceExit_void();
    // Entry point index lookup
    
    inline static int idx_niceExit_void() {
      static int epidx = reg_niceExit_void();
      return epidx;
    }

    
    inline static int idx_niceExit(void (Main::*)(void) ) {
      return idx_niceExit_void();
    }


    
    static int niceExit(void) { return idx_niceExit_void(); }
    
    static void _call_niceExit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_niceExit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void liveVizImagePrep(liveVizRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_liveVizImagePrep_liveVizRequestMsg();
    // Entry point index lookup
    
    inline static int idx_liveVizImagePrep_liveVizRequestMsg() {
      static int epidx = reg_liveVizImagePrep_liveVizRequestMsg();
      return epidx;
    }

    
    inline static int idx_liveVizImagePrep(void (Main::*)(liveVizRequestMsg* impl_msg) ) {
      return idx_liveVizImagePrep_liveVizRequestMsg();
    }


    
    static int liveVizImagePrep(liveVizRequestMsg* impl_msg) { return idx_liveVizImagePrep_liveVizRequestMsg(); }
    
    static void _call_liveVizImagePrep_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveVizImagePrep_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Main(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Main_CkMigrateMessage() {
      static int epidx = reg_Main_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Main_CkMigrateMessage(); }
    
    static void _call_Main_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_Main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: threaded void setupICs(void);
 */
    
    void setupICs(void);

/* DECLS: threaded void initialForces(void);
 */
    
    void initialForces(void);

/* DECLS: threaded void doSimulation(void);
 */
    
    void doSimulation(void);

/* DECLS: threaded void restart(CkCheckpointStatusMsg* impl_msg);
 */
    
    void restart(CkCheckpointStatusMsg* impl_msg);

/* DECLS: threaded void cbOpen(Ck::IO::FileReadyMsg* impl_msg);
 */
    
    void cbOpen(Ck::IO::FileReadyMsg* impl_msg);

/* DECLS: void cbIOReady(Ck::IO::SessionReadyMsg* impl_msg);
 */
    
    void cbIOReady(Ck::IO::SessionReadyMsg* impl_msg);

/* DECLS: void cbIOComplete(CkMessage* impl_msg);
 */
    
    void cbIOComplete(CkMessage* impl_msg);

/* DECLS: threaded void cbIOClosed(CkMessage* impl_msg);
 */
    
    void cbIOClosed(CkMessage* impl_msg);

/* DECLS: void niceExit(void);
 */
    
    void niceExit(void);

/* DECLS: void liveVizImagePrep(liveVizRequestMsg* impl_msg);
 */
    
    void liveVizImagePrep(liveVizRequestMsg* impl_msg);

/* DECLS: Main(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Main)
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: group ProjectionsControl: IrrGroup{
ProjectionsControl(void);
void on(const CkCallback &impl_noname_0);
void off(const CkCallback &impl_noname_1);
ProjectionsControl(CkMigrateMessage* impl_msg);
};
 */
 class ProjectionsControl;
 class CkIndex_ProjectionsControl;
 class CProxy_ProjectionsControl;
 class CProxyElement_ProjectionsControl;
 class CProxySection_ProjectionsControl;
/* --------------- index object ------------------ */
class CkIndex_ProjectionsControl:public CkIndex_IrrGroup{
  public:
    typedef ProjectionsControl local_t;
    typedef CkIndex_ProjectionsControl index_t;
    typedef CProxy_ProjectionsControl proxy_t;
    typedef CProxyElement_ProjectionsControl element_t;
    typedef CProxySection_ProjectionsControl section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ProjectionsControl(void);
     */
    // Entry point registration at startup
    
    static int reg_ProjectionsControl_void();
    // Entry point index lookup
    
    inline static int idx_ProjectionsControl_void() {
      static int epidx = reg_ProjectionsControl_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_ProjectionsControl_void(); }
    
    static void _call_ProjectionsControl_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProjectionsControl_void(void* impl_msg, void* impl_obj);
    /* DECLS: void on(const CkCallback &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_on_marshall2();
    // Entry point index lookup
    
    inline static int idx_on_marshall2() {
      static int epidx = reg_on_marshall2();
      return epidx;
    }

    
    inline static int idx_on(void (ProjectionsControl::*)(const CkCallback &impl_noname_0) ) {
      return idx_on_marshall2();
    }


    
    static int on(const CkCallback &impl_noname_0) { return idx_on_marshall2(); }
    
    static void _call_on_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_on_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_on_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_on_marshall2(PUP::er &p,void *msg);
    /* DECLS: void off(const CkCallback &impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_off_marshall3();
    // Entry point index lookup
    
    inline static int idx_off_marshall3() {
      static int epidx = reg_off_marshall3();
      return epidx;
    }

    
    inline static int idx_off(void (ProjectionsControl::*)(const CkCallback &impl_noname_1) ) {
      return idx_off_marshall3();
    }


    
    static int off(const CkCallback &impl_noname_1) { return idx_off_marshall3(); }
    
    static void _call_off_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_off_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_off_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_off_marshall3(PUP::er &p,void *msg);
    /* DECLS: ProjectionsControl(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ProjectionsControl_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ProjectionsControl_CkMigrateMessage() {
      static int epidx = reg_ProjectionsControl_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ProjectionsControl_CkMigrateMessage(); }
    
    static void _call_ProjectionsControl_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProjectionsControl_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ProjectionsControl: public CProxyElement_IrrGroup{
  public:
    typedef ProjectionsControl local_t;
    typedef CkIndex_ProjectionsControl index_t;
    typedef CProxy_ProjectionsControl proxy_t;
    typedef CProxyElement_ProjectionsControl element_t;
    typedef CProxySection_ProjectionsControl section_t;

    CProxyElement_ProjectionsControl(void) {}
    CProxyElement_ProjectionsControl(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ProjectionsControl(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ProjectionsControl(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    ProjectionsControl* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ProjectionsControl* ckLocalBranch(CkGroupID gID) {
      return (ProjectionsControl*)CkLocalBranch(gID);
    }
/* DECLS: ProjectionsControl(void);
 */
    

/* DECLS: void on(const CkCallback &impl_noname_0);
 */
    
    void on(const CkCallback &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void off(const CkCallback &impl_noname_1);
 */
    
    void off(const CkCallback &impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ProjectionsControl(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ProjectionsControl)
/* ---------------- collective proxy -------------- */
class CProxy_ProjectionsControl: public CProxy_IrrGroup{
  public:
    typedef ProjectionsControl local_t;
    typedef CkIndex_ProjectionsControl index_t;
    typedef CProxy_ProjectionsControl proxy_t;
    typedef CProxyElement_ProjectionsControl element_t;
    typedef CProxySection_ProjectionsControl section_t;

    CProxy_ProjectionsControl(void) {}
    CProxy_ProjectionsControl(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ProjectionsControl(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ProjectionsControl(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ProjectionsControl operator[](int onPE) const
      {return CProxyElement_ProjectionsControl(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    ProjectionsControl* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ProjectionsControl* ckLocalBranch(CkGroupID gID) {
      return (ProjectionsControl*)CkLocalBranch(gID);
    }
/* DECLS: ProjectionsControl(void);
 */
    
    static CkGroupID ckNew(void);

/* DECLS: void on(const CkCallback &impl_noname_0);
 */
    
    void on(const CkCallback &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void on(const CkCallback &impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void on(const CkCallback &impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void off(const CkCallback &impl_noname_1);
 */
    
    void off(const CkCallback &impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    
    void off(const CkCallback &impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void off(const CkCallback &impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ProjectionsControl(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ProjectionsControl)
/* ---------------- section proxy -------------- */
class CProxySection_ProjectionsControl: public CProxySection_IrrGroup{
  public:
    typedef ProjectionsControl local_t;
    typedef CkIndex_ProjectionsControl index_t;
    typedef CProxy_ProjectionsControl proxy_t;
    typedef CProxyElement_ProjectionsControl element_t;
    typedef CProxySection_ProjectionsControl section_t;

    CProxySection_ProjectionsControl(void) {}
    CProxySection_ProjectionsControl(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ProjectionsControl(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ProjectionsControl(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ProjectionsControl(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ProjectionsControl(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    ProjectionsControl* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ProjectionsControl* ckLocalBranch(CkGroupID gID) {
      return (ProjectionsControl*)CkLocalBranch(gID);
    }
/* DECLS: ProjectionsControl(void);
 */
    

/* DECLS: void on(const CkCallback &impl_noname_0);
 */
    
    void on(const CkCallback &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void off(const CkCallback &impl_noname_1);
 */
    
    void off(const CkCallback &impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ProjectionsControl(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ProjectionsControl)
#define ProjectionsControl_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ProjectionsControl>CBase_ProjectionsControl;

/* DECLS: group ReductionHelper: IrrGroup{
ReductionHelper(void);
void countTreePieces(const CkCallback &cb);
void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
ReductionHelper(CkMigrateMessage* impl_msg);
};
 */
 class ReductionHelper;
 class CkIndex_ReductionHelper;
 class CProxy_ReductionHelper;
 class CProxyElement_ReductionHelper;
 class CProxySection_ReductionHelper;
/* --------------- index object ------------------ */
class CkIndex_ReductionHelper:public CkIndex_IrrGroup{
  public:
    typedef ReductionHelper local_t;
    typedef CkIndex_ReductionHelper index_t;
    typedef CProxy_ReductionHelper proxy_t;
    typedef CProxyElement_ReductionHelper element_t;
    typedef CProxySection_ReductionHelper section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ReductionHelper(void);
     */
    // Entry point registration at startup
    
    static int reg_ReductionHelper_void();
    // Entry point index lookup
    
    inline static int idx_ReductionHelper_void() {
      static int epidx = reg_ReductionHelper_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_ReductionHelper_void(); }
    
    static void _call_ReductionHelper_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReductionHelper_void(void* impl_msg, void* impl_obj);
    /* DECLS: void countTreePieces(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_countTreePieces_marshall2();
    // Entry point index lookup
    
    inline static int idx_countTreePieces_marshall2() {
      static int epidx = reg_countTreePieces_marshall2();
      return epidx;
    }

    
    inline static int idx_countTreePieces(void (ReductionHelper::*)(const CkCallback &cb) ) {
      return idx_countTreePieces_marshall2();
    }


    
    static int countTreePieces(const CkCallback &cb) { return idx_countTreePieces_marshall2(); }
    
    static void _call_countTreePieces_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_countTreePieces_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_countTreePieces_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_countTreePieces_marshall2(PUP::er &p,void *msg);
    /* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_evaluateBoundaries_marshall3();
    // Entry point index lookup
    
    inline static int idx_evaluateBoundaries_marshall3() {
      static int epidx = reg_evaluateBoundaries_marshall3();
      return epidx;
    }

    
    inline static int idx_evaluateBoundaries(void (ReductionHelper::*)(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb) ) {
      return idx_evaluateBoundaries_marshall3();
    }


    
    static int evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb) { return idx_evaluateBoundaries_marshall3(); }
    
    static void _call_evaluateBoundaries_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_evaluateBoundaries_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_evaluateBoundaries_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_evaluateBoundaries_marshall3(PUP::er &p,void *msg);
    /* DECLS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_evaluateBoundaries_marshall4();
    // Entry point index lookup
    
    inline static int idx_evaluateBoundaries_marshall4() {
      static int epidx = reg_evaluateBoundaries_marshall4();
      return epidx;
    }

    
    inline static int idx_evaluateBoundaries(void (ReductionHelper::*)(const CkBitVector &binsToSplit, const CkCallback &cb) ) {
      return idx_evaluateBoundaries_marshall4();
    }


    
    static int evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb) { return idx_evaluateBoundaries_marshall4(); }
    
    static void _call_evaluateBoundaries_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_evaluateBoundaries_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_evaluateBoundaries_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_evaluateBoundaries_marshall4(PUP::er &p,void *msg);
    /* DECLS: ReductionHelper(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ReductionHelper_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ReductionHelper_CkMigrateMessage() {
      static int epidx = reg_ReductionHelper_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ReductionHelper_CkMigrateMessage(); }
    
    static void _call_ReductionHelper_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReductionHelper_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ReductionHelper: public CProxyElement_IrrGroup{
  public:
    typedef ReductionHelper local_t;
    typedef CkIndex_ReductionHelper index_t;
    typedef CProxy_ReductionHelper proxy_t;
    typedef CProxyElement_ReductionHelper element_t;
    typedef CProxySection_ReductionHelper section_t;

    CProxyElement_ReductionHelper(void) {}
    CProxyElement_ReductionHelper(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ReductionHelper(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ReductionHelper(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    ReductionHelper* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionHelper* ckLocalBranch(CkGroupID gID) {
      return (ReductionHelper*)CkLocalBranch(gID);
    }
/* DECLS: ReductionHelper(void);
 */
    

/* DECLS: void countTreePieces(const CkCallback &cb);
 */
    
    void countTreePieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ReductionHelper(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_ReductionHelper)
/* ---------------- collective proxy -------------- */
class CProxy_ReductionHelper: public CProxy_IrrGroup{
  public:
    typedef ReductionHelper local_t;
    typedef CkIndex_ReductionHelper index_t;
    typedef CProxy_ReductionHelper proxy_t;
    typedef CProxyElement_ReductionHelper element_t;
    typedef CProxySection_ReductionHelper section_t;

    CProxy_ReductionHelper(void) {}
    CProxy_ReductionHelper(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ReductionHelper(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ReductionHelper(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ReductionHelper operator[](int onPE) const
      {return CProxyElement_ReductionHelper(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    ReductionHelper* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionHelper* ckLocalBranch(CkGroupID gID) {
      return (ReductionHelper*)CkLocalBranch(gID);
    }
/* DECLS: ReductionHelper(void);
 */
    
    static CkGroupID ckNew(void);

/* DECLS: void countTreePieces(const CkCallback &cb);
 */
    
    void countTreePieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void countTreePieces(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void countTreePieces(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ReductionHelper(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_ReductionHelper)
/* ---------------- section proxy -------------- */
class CProxySection_ReductionHelper: public CProxySection_IrrGroup{
  public:
    typedef ReductionHelper local_t;
    typedef CkIndex_ReductionHelper index_t;
    typedef CProxy_ReductionHelper proxy_t;
    typedef CProxyElement_ReductionHelper element_t;
    typedef CProxySection_ReductionHelper section_t;

    CProxySection_ReductionHelper(void) {}
    CProxySection_ReductionHelper(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ReductionHelper(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ReductionHelper(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ReductionHelper(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ReductionHelper(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    ReductionHelper* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionHelper* ckLocalBranch(CkGroupID gID) {
      return (ReductionHelper*)CkLocalBranch(gID);
    }
/* DECLS: ReductionHelper(void);
 */
    

/* DECLS: void countTreePieces(const CkCallback &cb);
 */
    
    void countTreePieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ReductionHelper(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_ReductionHelper)
#define ReductionHelper_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ReductionHelper>CBase_ReductionHelper;

/* DECLS: chare Sorter: Chare{
Sorter(void);
threaded void startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose);
void collectEvaluations(CkReductionMsg* impl_msg);
void collectORBCounts(CkReductionMsg* impl_msg);
void finishPhase(CkReductionMsg* impl_msg);
void doORBDecomposition(CkReductionMsg* impl_msg);
void readytoSendORB(CkReductionMsg* impl_msg);
Sorter(CkMigrateMessage* impl_msg);
};
 */
 class Sorter;
 class CkIndex_Sorter;
 class CProxy_Sorter;
/* --------------- index object ------------------ */
class CkIndex_Sorter:public CkIndex_Chare{
  public:
    typedef Sorter local_t;
    typedef CkIndex_Sorter index_t;
    typedef CProxy_Sorter proxy_t;
    typedef CProxy_Sorter element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Sorter(void);
     */
    // Entry point registration at startup
    
    static int reg_Sorter_void();
    // Entry point index lookup
    
    inline static int idx_Sorter_void() {
      static int epidx = reg_Sorter_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Sorter_void(); }
    
    static void _call_Sorter_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Sorter_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose);
     */
    // Entry point registration at startup
    
    static int reg_startSorting_marshall2();
    // Entry point index lookup
    
    inline static int idx_startSorting_marshall2() {
      static int epidx = reg_startSorting_marshall2();
      return epidx;
    }

    
    inline static int idx_startSorting(void (Sorter::*)(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose) ) {
      return idx_startSorting_marshall2();
    }


    
    static int startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose) { return idx_startSorting_marshall2(); }
    
    static void _call_startSorting_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startSorting_marshall2(void* impl_msg, void* impl_obj);
    
    static void _callthr_startSorting_marshall2(CkThrCallArg *);
    
    static void _marshallmessagepup_startSorting_marshall2(PUP::er &p,void *msg);
    /* DECLS: void collectEvaluations(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_collectEvaluations_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_collectEvaluations_CkReductionMsg() {
      static int epidx = reg_collectEvaluations_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_collectEvaluations(void (Sorter::*)(CkReductionMsg* impl_msg) ) {
      return idx_collectEvaluations_CkReductionMsg();
    }


    
    static int collectEvaluations(CkReductionMsg* impl_msg) { return idx_collectEvaluations_CkReductionMsg(); }
    
    static void _call_collectEvaluations_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectEvaluations_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void collectORBCounts(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_collectORBCounts_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_collectORBCounts_CkReductionMsg() {
      static int epidx = reg_collectORBCounts_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_collectORBCounts(void (Sorter::*)(CkReductionMsg* impl_msg) ) {
      return idx_collectORBCounts_CkReductionMsg();
    }


    
    static int collectORBCounts(CkReductionMsg* impl_msg) { return idx_collectORBCounts_CkReductionMsg(); }
    
    static void _call_collectORBCounts_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectORBCounts_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishPhase(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finishPhase_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_finishPhase_CkReductionMsg() {
      static int epidx = reg_finishPhase_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_finishPhase(void (Sorter::*)(CkReductionMsg* impl_msg) ) {
      return idx_finishPhase_CkReductionMsg();
    }


    
    static int finishPhase(CkReductionMsg* impl_msg) { return idx_finishPhase_CkReductionMsg(); }
    
    static void _call_finishPhase_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishPhase_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void doORBDecomposition(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_doORBDecomposition_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_doORBDecomposition_CkReductionMsg() {
      static int epidx = reg_doORBDecomposition_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_doORBDecomposition(void (Sorter::*)(CkReductionMsg* impl_msg) ) {
      return idx_doORBDecomposition_CkReductionMsg();
    }


    
    static int doORBDecomposition(CkReductionMsg* impl_msg) { return idx_doORBDecomposition_CkReductionMsg(); }
    
    static void _call_doORBDecomposition_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doORBDecomposition_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void readytoSendORB(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_readytoSendORB_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_readytoSendORB_CkReductionMsg() {
      static int epidx = reg_readytoSendORB_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_readytoSendORB(void (Sorter::*)(CkReductionMsg* impl_msg) ) {
      return idx_readytoSendORB_CkReductionMsg();
    }


    
    static int readytoSendORB(CkReductionMsg* impl_msg) { return idx_readytoSendORB_CkReductionMsg(); }
    
    static void _call_readytoSendORB_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_readytoSendORB_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Sorter(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Sorter_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Sorter_CkMigrateMessage() {
      static int epidx = reg_Sorter_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Sorter_CkMigrateMessage(); }
    
    static void _call_Sorter_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Sorter_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Sorter:public CProxy_Chare{
  public:
    typedef Sorter local_t;
    typedef CkIndex_Sorter index_t;
    typedef CProxy_Sorter proxy_t;
    typedef CProxy_Sorter element_t;

    CProxy_Sorter(void) {};
    CProxy_Sorter(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Sorter(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Sorter *ckLocal(void) const
    { return (Sorter *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Sorter(void);
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: threaded void startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose);
 */
    
    void startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectEvaluations(CkReductionMsg* impl_msg);
 */
    
    void collectEvaluations(CkReductionMsg* impl_msg);

/* DECLS: void collectORBCounts(CkReductionMsg* impl_msg);
 */
    
    void collectORBCounts(CkReductionMsg* impl_msg);

/* DECLS: void finishPhase(CkReductionMsg* impl_msg);
 */
    
    void finishPhase(CkReductionMsg* impl_msg);

/* DECLS: void doORBDecomposition(CkReductionMsg* impl_msg);
 */
    
    void doORBDecomposition(CkReductionMsg* impl_msg);

/* DECLS: void readytoSendORB(CkReductionMsg* impl_msg);
 */
    
    void readytoSendORB(CkReductionMsg* impl_msg);

/* DECLS: Sorter(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Sorter)
#define Sorter_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Sorter>CBase_Sorter;

/* DECLS: nodegroup DataManager: NodeGroup{
DataManager(const CkArrayID &treePieceID);
void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
void combineLocalTrees(CkReductionMsg* impl_msg);
void clearInstrument(const CkCallback &cb);
void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
void CoolingSetTime(double z, double dTime, const CkCallback &cb);
void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
void memoryStats(const CkCallback &cb);
void resetReadOnly(const Parameters &param, const CkCallback &cb);
void initStarLog(const std::string &_fileName, const CkCallback &cb);
DataManager(CkMigrateMessage* impl_msg);
};
 */
 class DataManager;
 class CkIndex_DataManager;
 class CProxy_DataManager;
 class CProxyElement_DataManager;
 class CProxySection_DataManager;
/* --------------- index object ------------------ */
class CkIndex_DataManager:public CkIndex_NodeGroup{
  public:
    typedef DataManager local_t;
    typedef CkIndex_DataManager index_t;
    typedef CProxy_DataManager proxy_t;
    typedef CProxyElement_DataManager element_t;
    typedef CProxySection_DataManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: DataManager(const CkArrayID &treePieceID);
     */
    // Entry point registration at startup
    
    static int reg_DataManager_marshall1();
    // Entry point index lookup
    
    inline static int idx_DataManager_marshall1() {
      static int epidx = reg_DataManager_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkArrayID &treePieceID) { return idx_DataManager_marshall1(); }
    
    static void _call_DataManager_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DataManager_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_DataManager_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_DataManager_marshall1(PUP::er &p,void *msg);
    /* DECLS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_acceptResponsibleIndex_marshall2();
    // Entry point index lookup
    
    inline static int idx_acceptResponsibleIndex_marshall2() {
      static int epidx = reg_acceptResponsibleIndex_marshall2();
      return epidx;
    }

    
    inline static int idx_acceptResponsibleIndex(void (DataManager::*)(const int *responsible, int n, const CkCallback &cb) ) {
      return idx_acceptResponsibleIndex_marshall2();
    }


    
    static int acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb) { return idx_acceptResponsibleIndex_marshall2(); }
    
    static void _call_acceptResponsibleIndex_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptResponsibleIndex_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptResponsibleIndex_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptResponsibleIndex_marshall2(PUP::er &p,void *msg);
    /* DECLS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_acceptFinalKeys_marshall3();
    // Entry point index lookup
    
    inline static int idx_acceptFinalKeys_marshall3() {
      static int epidx = reg_acceptFinalKeys_marshall3();
      return epidx;
    }

    
    inline static int idx_acceptFinalKeys(void (DataManager::*)(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb) ) {
      return idx_acceptFinalKeys_marshall3();
    }


    
    static int acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb) { return idx_acceptFinalKeys_marshall3(); }
    
    static void _call_acceptFinalKeys_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptFinalKeys_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptFinalKeys_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptFinalKeys_marshall3(PUP::er &p,void *msg);
    /* DECLS: void combineLocalTrees(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_combineLocalTrees_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_combineLocalTrees_CkReductionMsg() {
      static int epidx = reg_combineLocalTrees_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_combineLocalTrees(void (DataManager::*)(CkReductionMsg* impl_msg) ) {
      return idx_combineLocalTrees_CkReductionMsg();
    }


    
    static int combineLocalTrees(CkReductionMsg* impl_msg) { return idx_combineLocalTrees_CkReductionMsg(); }
    
    static void _call_combineLocalTrees_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_combineLocalTrees_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void clearInstrument(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_clearInstrument_marshall5();
    // Entry point index lookup
    
    inline static int idx_clearInstrument_marshall5() {
      static int epidx = reg_clearInstrument_marshall5();
      return epidx;
    }

    
    inline static int idx_clearInstrument(void (DataManager::*)(const CkCallback &cb) ) {
      return idx_clearInstrument_marshall5();
    }


    
    static int clearInstrument(const CkCallback &cb) { return idx_clearInstrument_marshall5(); }
    
    static void _call_clearInstrument_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_clearInstrument_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_clearInstrument_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_clearInstrument_marshall5(PUP::er &p,void *msg);
    /* DECLS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_initCooling_marshall6();
    // Entry point index lookup
    
    inline static int idx_initCooling_marshall6() {
      static int epidx = reg_initCooling_marshall6();
      return epidx;
    }

    
    inline static int idx_initCooling(void (DataManager::*)(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb) ) {
      return idx_initCooling_marshall6();
    }


    
    static int initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb) { return idx_initCooling_marshall6(); }
    
    static void _call_initCooling_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initCooling_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initCooling_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initCooling_marshall6(PUP::er &p,void *msg);
    /* DECLS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_dmCoolTableRead_marshall7();
    // Entry point index lookup
    
    inline static int idx_dmCoolTableRead_marshall7() {
      static int epidx = reg_dmCoolTableRead_marshall7();
      return epidx;
    }

    
    inline static int idx_dmCoolTableRead(void (DataManager::*)(const double *dTableData, int nData, const CkCallback &cb) ) {
      return idx_dmCoolTableRead_marshall7();
    }


    
    static int dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb) { return idx_dmCoolTableRead_marshall7(); }
    
    static void _call_dmCoolTableRead_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_dmCoolTableRead_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_dmCoolTableRead_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_dmCoolTableRead_marshall7(PUP::er &p,void *msg);
    /* DECLS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_CoolingSetTime_marshall8();
    // Entry point index lookup
    
    inline static int idx_CoolingSetTime_marshall8() {
      static int epidx = reg_CoolingSetTime_marshall8();
      return epidx;
    }

    
    inline static int idx_CoolingSetTime(void (DataManager::*)(double z, double dTime, const CkCallback &cb) ) {
      return idx_CoolingSetTime_marshall8();
    }


    
    static int CoolingSetTime(double z, double dTime, const CkCallback &cb) { return idx_CoolingSetTime_marshall8(); }
    
    static void _call_CoolingSetTime_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CoolingSetTime_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CoolingSetTime_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CoolingSetTime_marshall8(PUP::er &p,void *msg);
    /* DECLS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_SetStarCM_marshall9();
    // Entry point index lookup
    
    inline static int idx_SetStarCM_marshall9() {
      static int epidx = reg_SetStarCM_marshall9();
      return epidx;
    }

    
    inline static int idx_SetStarCM(void (DataManager::*)(const double *dCenterOfMass, const CkCallback &cb) ) {
      return idx_SetStarCM_marshall9();
    }


    
    static int SetStarCM(const double *dCenterOfMass, const CkCallback &cb) { return idx_SetStarCM_marshall9(); }
    
    static void _call_SetStarCM_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SetStarCM_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_SetStarCM_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_SetStarCM_marshall9(PUP::er &p,void *msg);
    /* DECLS: void memoryStats(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_memoryStats_marshall10();
    // Entry point index lookup
    
    inline static int idx_memoryStats_marshall10() {
      static int epidx = reg_memoryStats_marshall10();
      return epidx;
    }

    
    inline static int idx_memoryStats(void (DataManager::*)(const CkCallback &cb) ) {
      return idx_memoryStats_marshall10();
    }


    
    static int memoryStats(const CkCallback &cb) { return idx_memoryStats_marshall10(); }
    
    static void _call_memoryStats_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_memoryStats_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_memoryStats_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_memoryStats_marshall10(PUP::er &p,void *msg);
    /* DECLS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_resetReadOnly_marshall11();
    // Entry point index lookup
    
    inline static int idx_resetReadOnly_marshall11() {
      static int epidx = reg_resetReadOnly_marshall11();
      return epidx;
    }

    
    inline static int idx_resetReadOnly(void (DataManager::*)(const Parameters &param, const CkCallback &cb) ) {
      return idx_resetReadOnly_marshall11();
    }


    
    static int resetReadOnly(const Parameters &param, const CkCallback &cb) { return idx_resetReadOnly_marshall11(); }
    
    static void _call_resetReadOnly_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resetReadOnly_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_resetReadOnly_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_resetReadOnly_marshall11(PUP::er &p,void *msg);
    /* DECLS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_initStarLog_marshall12();
    // Entry point index lookup
    
    inline static int idx_initStarLog_marshall12() {
      static int epidx = reg_initStarLog_marshall12();
      return epidx;
    }

    
    inline static int idx_initStarLog(void (DataManager::*)(const std::string &_fileName, const CkCallback &cb) ) {
      return idx_initStarLog_marshall12();
    }


    
    static int initStarLog(const std::string &_fileName, const CkCallback &cb) { return idx_initStarLog_marshall12(); }
    
    static void _call_initStarLog_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initStarLog_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initStarLog_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initStarLog_marshall12(PUP::er &p,void *msg);
    /* DECLS: DataManager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_DataManager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_DataManager_CkMigrateMessage() {
      static int epidx = reg_DataManager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_DataManager_CkMigrateMessage(); }
    
    static void _call_DataManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DataManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_DataManager: public CProxyElement_NodeGroup{
  public:
    typedef DataManager local_t;
    typedef CkIndex_DataManager index_t;
    typedef CProxy_DataManager proxy_t;
    typedef CProxyElement_DataManager element_t;
    typedef CProxySection_DataManager section_t;

    CProxyElement_DataManager(void) {}
    CProxyElement_DataManager(const IrrGroup *g) : CProxyElement_NodeGroup(g){  }
    CProxyElement_DataManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_DataManager(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    DataManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DataManager* ckLocalBranch(CkGroupID gID) {
      return (DataManager*)CkLocalNodeBranch(gID);
    }
/* DECLS: DataManager(const CkArrayID &treePieceID);
 */
    

/* DECLS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
 */
    
    void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
 */
    
    void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combineLocalTrees(CkReductionMsg* impl_msg);
 */
    
    void combineLocalTrees(CkReductionMsg* impl_msg);

/* DECLS: void clearInstrument(const CkCallback &cb);
 */
    
    void clearInstrument(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
 */
    
    void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
 */
    
    void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
 */
    
    void CoolingSetTime(double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
 */
    
    void SetStarCM(const double *dCenterOfMass, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void memoryStats(const CkCallback &cb);
 */
    
    void memoryStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
 */
    
    void resetReadOnly(const Parameters &param, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
 */
    
    void initStarLog(const std::string &_fileName, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DataManager(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_DataManager)
/* ---------------- collective proxy -------------- */
class CProxy_DataManager: public CProxy_NodeGroup{
  public:
    typedef DataManager local_t;
    typedef CkIndex_DataManager index_t;
    typedef CProxy_DataManager proxy_t;
    typedef CProxyElement_DataManager element_t;
    typedef CProxySection_DataManager section_t;

    CProxy_DataManager(void) {}
    CProxy_DataManager(const IrrGroup *g) : CProxy_NodeGroup(g){  }
    CProxy_DataManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_DataManager(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_DataManager operator[](int onPE) const
      {return CProxyElement_DataManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    DataManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DataManager* ckLocalBranch(CkGroupID gID) {
      return (DataManager*)CkLocalNodeBranch(gID);
    }
/* DECLS: DataManager(const CkArrayID &treePieceID);
 */
    
    static CkGroupID ckNew(const CkArrayID &treePieceID, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_DataManager(const CkArrayID &treePieceID, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
 */
    
    void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
 */
    
    void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combineLocalTrees(CkReductionMsg* impl_msg);
 */
    
    void combineLocalTrees(CkReductionMsg* impl_msg);

/* DECLS: void clearInstrument(const CkCallback &cb);
 */
    
    void clearInstrument(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
 */
    
    void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
 */
    
    void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
 */
    
    void CoolingSetTime(double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
 */
    
    void SetStarCM(const double *dCenterOfMass, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void memoryStats(const CkCallback &cb);
 */
    
    void memoryStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
 */
    
    void resetReadOnly(const Parameters &param, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
 */
    
    void initStarLog(const std::string &_fileName, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DataManager(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_DataManager)
/* ---------------- section proxy -------------- */
class CProxySection_DataManager: public CProxySection_NodeGroup{
  public:
    typedef DataManager local_t;
    typedef CkIndex_DataManager index_t;
    typedef CProxy_DataManager proxy_t;
    typedef CProxyElement_DataManager element_t;
    typedef CProxySection_DataManager section_t;

    CProxySection_DataManager(void) {}
    CProxySection_DataManager(const IrrGroup *g) : CProxySection_NodeGroup(g){  }
    CProxySection_DataManager(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_DataManager(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_NodeGroup(_gid,_pelist,_npes){  }
    CProxySection_DataManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_NodeGroup(n,_gid,_pelist,_npes){  }
    CProxySection_DataManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    DataManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DataManager* ckLocalBranch(CkGroupID gID) {
      return (DataManager*)CkLocalNodeBranch(gID);
    }
/* DECLS: DataManager(const CkArrayID &treePieceID);
 */
    

/* DECLS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
 */
    
    void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
 */
    
    void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combineLocalTrees(CkReductionMsg* impl_msg);
 */
    
    void combineLocalTrees(CkReductionMsg* impl_msg);

/* DECLS: void clearInstrument(const CkCallback &cb);
 */
    
    void clearInstrument(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
 */
    
    void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
 */
    
    void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
 */
    
    void CoolingSetTime(double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
 */
    
    void SetStarCM(const double *dCenterOfMass, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void memoryStats(const CkCallback &cb);
 */
    
    void memoryStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
 */
    
    void resetReadOnly(const Parameters &param, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
 */
    
    void initStarLog(const std::string &_fileName, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DataManager(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_DataManager)
#define DataManager_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_DataManager>CBase_DataManager;

/* DECLS: array TreePiece: ArrayElement{
TreePiece(void);
void quiescence(void);
void memCacheStats(const CkCallback &cb);
void nextBucket(dummyMsg* impl_msg);
void nextBucketSmooth(dummyMsg* impl_msg);
void nextBucketReSmooth(dummyMsg* impl_msg);
void nextBucketMarkSmooth(dummyMsg* impl_msg);
void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
void EwaldInit(void);
void initCoolingData(const CkCallback &cb);
void calculateEwald(dummyMsg* impl_msg);
void EwaldGPUComplete(void);
void EwaldGPU(void);
void velScale(double dScale, const CkCallback &cb);
void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
void resetMetals(const CkCallback &cb);
void getMaxIOrds(const CkCallback &cb);
void RestartEnergy(double dTuFac, const CkCallback &cb);
void findTotalMass(const CkCallback &cb);
void recvTotalMass(CkReductionMsg* impl_msg);
void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
void ioShuffle(CkReductionMsg* impl_msg);
void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
void assignKeys(CkReductionMsg* impl_msg);
void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
void unshuffleParticles(CkReductionMsg* impl_msg);
void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
void unshuffleParticlesWoDD(const CkCallback &cb);
void shuffleAfterQD(void);
void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
void initORBPieces(const CkCallback &cb);
void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
void sendORBParticles(void);
void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
void finalizeBoundaries(ORBSplittersMsg* impl_msg);
void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
void initAccel(int iKickRung, const CkCallback &cb);
void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
void truncateRung(int iCurrMaxRung, const CkCallback &cb);
void rungStats(const CkCallback &cb);
void countActive(int activeRung, const CkCallback &cb);
void assignDomain(const CkCallback &cb);
void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
void starCenterOfMass(const CkCallback &cb);
void calcEnergy(const CkCallback &cb);
void colNParts(const CkCallback &cb);
void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
void setSoft(double dSoft, const CkCallback &cb);
void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
void ballMax(int activeRung, double dFac, const CkCallback &cb);
void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
void initRand(int iRand, const CkCallback &cb);
void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
void flushStarLog(const CkCallback &cb);
void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
void getCOM(const CkCallback &cb, int bLiveViz);
void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
void setProjections(int bOn);
void buildTree(int bucketSize, const CkCallback &cb);
void startOctTreeBuild(CkReductionMsg* impl_msg);
void recvBoundary(const SFC::Key &key, const NborDir &dir);
void recvdBoundaries(CkReductionMsg* impl_msg);
void startORBTreeBuild(CkReductionMsg* impl_msg);
void startGravity(int activeRung, double myTheta, const CkCallback &cb);
void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
void finishNodeCache(const CkCallback &cb);
void requestRemoteMoments(const Tree::NodeKey &key, int sender);
void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
void commenceCalculateGravityLocal(void);
void calculateGravityRemote(ComputeChunkMsg* impl_msg);
void calculateReSmoothLocal(void);
void calculateMarkSmoothLocal(void);
void finishWalk(void);
void finishSmoothWalk(void);
void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
void startlb(const CkCallback &cb, int activeRung);
void ResumeFromSync(void);
void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
void doAtSync(void);
void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
void outputStatistics(const CkCallback &cb);
void collectStatistics(const CkCallback &cb);
void continueStartRemoteChunk(int chunk);
void continueWrapUp(void);
void balanceBeforeInitialForces(const CkCallback &cb);
TreePiece(CkMigrateMessage* impl_msg);
};
 */
 class TreePiece;
 class CkIndex_TreePiece;
 class CProxy_TreePiece;
 class CProxyElement_TreePiece;
 class CProxySection_TreePiece;
/* --------------- index object ------------------ */
class CkIndex_TreePiece:public CkIndex_ArrayElement{
  public:
    typedef TreePiece local_t;
    typedef CkIndex_TreePiece index_t;
    typedef CProxy_TreePiece proxy_t;
    typedef CProxyElement_TreePiece element_t;
    typedef CProxySection_TreePiece section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TreePiece(void);
     */
    // Entry point registration at startup
    
    static int reg_TreePiece_void();
    // Entry point index lookup
    
    inline static int idx_TreePiece_void() {
      static int epidx = reg_TreePiece_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_TreePiece_void(); }
    
    static void _call_TreePiece_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TreePiece_void(void* impl_msg, void* impl_obj);
    /* DECLS: void quiescence(void);
     */
    // Entry point registration at startup
    
    static int reg_quiescence_void();
    // Entry point index lookup
    
    inline static int idx_quiescence_void() {
      static int epidx = reg_quiescence_void();
      return epidx;
    }

    
    inline static int idx_quiescence(void (TreePiece::*)(void) ) {
      return idx_quiescence_void();
    }


    
    static int quiescence(void) { return idx_quiescence_void(); }
    
    static void _call_quiescence_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_quiescence_void(void* impl_msg, void* impl_obj);
    /* DECLS: void memCacheStats(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_memCacheStats_marshall3();
    // Entry point index lookup
    
    inline static int idx_memCacheStats_marshall3() {
      static int epidx = reg_memCacheStats_marshall3();
      return epidx;
    }

    
    inline static int idx_memCacheStats(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_memCacheStats_marshall3();
    }


    
    static int memCacheStats(const CkCallback &cb) { return idx_memCacheStats_marshall3(); }
    
    static void _call_memCacheStats_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_memCacheStats_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_memCacheStats_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_memCacheStats_marshall3(PUP::er &p,void *msg);
    /* DECLS: void nextBucket(dummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_nextBucket_dummyMsg();
    // Entry point index lookup
    
    inline static int idx_nextBucket_dummyMsg() {
      static int epidx = reg_nextBucket_dummyMsg();
      return epidx;
    }

    
    inline static int idx_nextBucket(void (TreePiece::*)(dummyMsg* impl_msg) ) {
      return idx_nextBucket_dummyMsg();
    }


    
    static int nextBucket(dummyMsg* impl_msg) { return idx_nextBucket_dummyMsg(); }
    
    static void _call_nextBucket_dummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_nextBucket_dummyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void nextBucketSmooth(dummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_nextBucketSmooth_dummyMsg();
    // Entry point index lookup
    
    inline static int idx_nextBucketSmooth_dummyMsg() {
      static int epidx = reg_nextBucketSmooth_dummyMsg();
      return epidx;
    }

    
    inline static int idx_nextBucketSmooth(void (TreePiece::*)(dummyMsg* impl_msg) ) {
      return idx_nextBucketSmooth_dummyMsg();
    }


    
    static int nextBucketSmooth(dummyMsg* impl_msg) { return idx_nextBucketSmooth_dummyMsg(); }
    
    static void _call_nextBucketSmooth_dummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_nextBucketSmooth_dummyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void nextBucketReSmooth(dummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_nextBucketReSmooth_dummyMsg();
    // Entry point index lookup
    
    inline static int idx_nextBucketReSmooth_dummyMsg() {
      static int epidx = reg_nextBucketReSmooth_dummyMsg();
      return epidx;
    }

    
    inline static int idx_nextBucketReSmooth(void (TreePiece::*)(dummyMsg* impl_msg) ) {
      return idx_nextBucketReSmooth_dummyMsg();
    }


    
    static int nextBucketReSmooth(dummyMsg* impl_msg) { return idx_nextBucketReSmooth_dummyMsg(); }
    
    static void _call_nextBucketReSmooth_dummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_nextBucketReSmooth_dummyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_nextBucketMarkSmooth_dummyMsg();
    // Entry point index lookup
    
    inline static int idx_nextBucketMarkSmooth_dummyMsg() {
      static int epidx = reg_nextBucketMarkSmooth_dummyMsg();
      return epidx;
    }

    
    inline static int idx_nextBucketMarkSmooth(void (TreePiece::*)(dummyMsg* impl_msg) ) {
      return idx_nextBucketMarkSmooth_dummyMsg();
    }


    
    static int nextBucketMarkSmooth(dummyMsg* impl_msg) { return idx_nextBucketMarkSmooth_dummyMsg(); }
    
    static void _call_nextBucketMarkSmooth_dummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_nextBucketMarkSmooth_dummyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
     */
    // Entry point registration at startup
    
    static int reg_setPeriodic_marshall8();
    // Entry point index lookup
    
    inline static int idx_setPeriodic_marshall8() {
      static int epidx = reg_setPeriodic_marshall8();
      return epidx;
    }

    
    inline static int idx_setPeriodic(void (TreePiece::*)(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac) ) {
      return idx_setPeriodic_marshall8();
    }


    
    static int setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac) { return idx_setPeriodic_marshall8(); }
    
    static void _call_setPeriodic_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setPeriodic_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setPeriodic_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setPeriodic_marshall8(PUP::er &p,void *msg);
    /* DECLS: void EwaldInit(void);
     */
    // Entry point registration at startup
    
    static int reg_EwaldInit_void();
    // Entry point index lookup
    
    inline static int idx_EwaldInit_void() {
      static int epidx = reg_EwaldInit_void();
      return epidx;
    }

    
    inline static int idx_EwaldInit(void (TreePiece::*)(void) ) {
      return idx_EwaldInit_void();
    }


    
    static int EwaldInit(void) { return idx_EwaldInit_void(); }
    
    static void _call_EwaldInit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_EwaldInit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void initCoolingData(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_initCoolingData_marshall10();
    // Entry point index lookup
    
    inline static int idx_initCoolingData_marshall10() {
      static int epidx = reg_initCoolingData_marshall10();
      return epidx;
    }

    
    inline static int idx_initCoolingData(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_initCoolingData_marshall10();
    }


    
    static int initCoolingData(const CkCallback &cb) { return idx_initCoolingData_marshall10(); }
    
    static void _call_initCoolingData_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initCoolingData_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initCoolingData_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initCoolingData_marshall10(PUP::er &p,void *msg);
    /* DECLS: void calculateEwald(dummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_calculateEwald_dummyMsg();
    // Entry point index lookup
    
    inline static int idx_calculateEwald_dummyMsg() {
      static int epidx = reg_calculateEwald_dummyMsg();
      return epidx;
    }

    
    inline static int idx_calculateEwald(void (TreePiece::*)(dummyMsg* impl_msg) ) {
      return idx_calculateEwald_dummyMsg();
    }


    
    static int calculateEwald(dummyMsg* impl_msg) { return idx_calculateEwald_dummyMsg(); }
    
    static void _call_calculateEwald_dummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calculateEwald_dummyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void EwaldGPUComplete(void);
     */
    // Entry point registration at startup
    
    static int reg_EwaldGPUComplete_void();
    // Entry point index lookup
    
    inline static int idx_EwaldGPUComplete_void() {
      static int epidx = reg_EwaldGPUComplete_void();
      return epidx;
    }

    
    inline static int idx_EwaldGPUComplete(void (TreePiece::*)(void) ) {
      return idx_EwaldGPUComplete_void();
    }


    
    static int EwaldGPUComplete(void) { return idx_EwaldGPUComplete_void(); }
    
    static void _call_EwaldGPUComplete_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_EwaldGPUComplete_void(void* impl_msg, void* impl_obj);
    /* DECLS: void EwaldGPU(void);
     */
    // Entry point registration at startup
    
    static int reg_EwaldGPU_void();
    // Entry point index lookup
    
    inline static int idx_EwaldGPU_void() {
      static int epidx = reg_EwaldGPU_void();
      return epidx;
    }

    
    inline static int idx_EwaldGPU(void (TreePiece::*)(void) ) {
      return idx_EwaldGPU_void();
    }


    
    static int EwaldGPU(void) { return idx_EwaldGPU_void(); }
    
    static void _call_EwaldGPU_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_EwaldGPU_void(void* impl_msg, void* impl_obj);
    /* DECLS: void velScale(double dScale, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_velScale_marshall14();
    // Entry point index lookup
    
    inline static int idx_velScale_marshall14() {
      static int epidx = reg_velScale_marshall14();
      return epidx;
    }

    
    inline static int idx_velScale(void (TreePiece::*)(double dScale, const CkCallback &cb) ) {
      return idx_velScale_marshall14();
    }


    
    static int velScale(double dScale, const CkCallback &cb) { return idx_velScale_marshall14(); }
    
    static void _call_velScale_marshall14(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_velScale_marshall14(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_velScale_marshall14(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_velScale_marshall14(PUP::er &p,void *msg);
    /* DECLS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_loadNChilada_marshall15();
    // Entry point index lookup
    
    inline static int idx_loadNChilada_marshall15() {
      static int epidx = reg_loadNChilada_marshall15();
      return epidx;
    }

    
    inline static int idx_loadNChilada(void (TreePiece::*)(const std::string &filename, double dTuFac, const CkCallback &cb) ) {
      return idx_loadNChilada_marshall15();
    }


    
    static int loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb) { return idx_loadNChilada_marshall15(); }
    
    static void _call_loadNChilada_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_loadNChilada_marshall15(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_loadNChilada_marshall15(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_loadNChilada_marshall15(PUP::er &p,void *msg);
    /* DECLS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_readFloatBinary_marshall16();
    // Entry point index lookup
    
    inline static int idx_readFloatBinary_marshall16() {
      static int epidx = reg_readFloatBinary_marshall16();
      return epidx;
    }

    
    inline static int idx_readFloatBinary(void (TreePiece::*)(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb) ) {
      return idx_readFloatBinary_marshall16();
    }


    
    static int readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb) { return idx_readFloatBinary_marshall16(); }
    
    static void _call_readFloatBinary_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_readFloatBinary_marshall16(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_readFloatBinary_marshall16(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_readFloatBinary_marshall16(PUP::er &p,void *msg);
    /* DECLS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_loadTipsy_marshall17();
    // Entry point index lookup
    
    inline static int idx_loadTipsy_marshall17() {
      static int epidx = reg_loadTipsy_marshall17();
      return epidx;
    }

    
    inline static int idx_loadTipsy(void (TreePiece::*)(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb) ) {
      return idx_loadTipsy_marshall17();
    }


    
    static int loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb) { return idx_loadTipsy_marshall17(); }
    
    static void _call_loadTipsy_marshall17(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_loadTipsy_marshall17(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_loadTipsy_marshall17(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_loadTipsy_marshall17(PUP::er &p,void *msg);
    /* DECLS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_readTipsyArray_marshall18();
    // Entry point index lookup
    
    inline static int idx_readTipsyArray_marshall18() {
      static int epidx = reg_readTipsyArray_marshall18();
      return epidx;
    }

    
    inline static int idx_readTipsyArray(void (TreePiece::*)(const CkReference<OutputParams > &params, const CkCallback &cb) ) {
      return idx_readTipsyArray_marshall18();
    }


    
    static int readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb) { return idx_readTipsyArray_marshall18(); }
    
    static void _call_readTipsyArray_marshall18(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_readTipsyArray_marshall18(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_readTipsyArray_marshall18(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_readTipsyArray_marshall18(PUP::er &p,void *msg);
    /* DECLS: void resetMetals(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_resetMetals_marshall19();
    // Entry point index lookup
    
    inline static int idx_resetMetals_marshall19() {
      static int epidx = reg_resetMetals_marshall19();
      return epidx;
    }

    
    inline static int idx_resetMetals(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_resetMetals_marshall19();
    }


    
    static int resetMetals(const CkCallback &cb) { return idx_resetMetals_marshall19(); }
    
    static void _call_resetMetals_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resetMetals_marshall19(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_resetMetals_marshall19(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_resetMetals_marshall19(PUP::er &p,void *msg);
    /* DECLS: void getMaxIOrds(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_getMaxIOrds_marshall20();
    // Entry point index lookup
    
    inline static int idx_getMaxIOrds_marshall20() {
      static int epidx = reg_getMaxIOrds_marshall20();
      return epidx;
    }

    
    inline static int idx_getMaxIOrds(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_getMaxIOrds_marshall20();
    }


    
    static int getMaxIOrds(const CkCallback &cb) { return idx_getMaxIOrds_marshall20(); }
    
    static void _call_getMaxIOrds_marshall20(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getMaxIOrds_marshall20(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getMaxIOrds_marshall20(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getMaxIOrds_marshall20(PUP::er &p,void *msg);
    /* DECLS: void RestartEnergy(double dTuFac, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_RestartEnergy_marshall21();
    // Entry point index lookup
    
    inline static int idx_RestartEnergy_marshall21() {
      static int epidx = reg_RestartEnergy_marshall21();
      return epidx;
    }

    
    inline static int idx_RestartEnergy(void (TreePiece::*)(double dTuFac, const CkCallback &cb) ) {
      return idx_RestartEnergy_marshall21();
    }


    
    static int RestartEnergy(double dTuFac, const CkCallback &cb) { return idx_RestartEnergy_marshall21(); }
    
    static void _call_RestartEnergy_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RestartEnergy_marshall21(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_RestartEnergy_marshall21(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_RestartEnergy_marshall21(PUP::er &p,void *msg);
    /* DECLS: void findTotalMass(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_findTotalMass_marshall22();
    // Entry point index lookup
    
    inline static int idx_findTotalMass_marshall22() {
      static int epidx = reg_findTotalMass_marshall22();
      return epidx;
    }

    
    inline static int idx_findTotalMass(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_findTotalMass_marshall22();
    }


    
    static int findTotalMass(const CkCallback &cb) { return idx_findTotalMass_marshall22(); }
    
    static void _call_findTotalMass_marshall22(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_findTotalMass_marshall22(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_findTotalMass_marshall22(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_findTotalMass_marshall22(PUP::er &p,void *msg);
    /* DECLS: void recvTotalMass(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvTotalMass_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_recvTotalMass_CkReductionMsg() {
      static int epidx = reg_recvTotalMass_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_recvTotalMass(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_recvTotalMass_CkReductionMsg();
    }


    
    static int recvTotalMass(CkReductionMsg* impl_msg) { return idx_recvTotalMass_CkReductionMsg(); }
    
    static void _call_recvTotalMass_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvTotalMass_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_setupWrite_marshall24();
    // Entry point index lookup
    
    inline static int idx_setupWrite_marshall24() {
      static int epidx = reg_setupWrite_marshall24();
      return epidx;
    }

    
    inline static int idx_setupWrite(void (TreePiece::*)(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb) ) {
      return idx_setupWrite_marshall24();
    }


    
    static int setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb) { return idx_setupWrite_marshall24(); }
    
    static void _call_setupWrite_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setupWrite_marshall24(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setupWrite_marshall24(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setupWrite_marshall24(PUP::er &p,void *msg);
    /* DECLS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
     */
    // Entry point registration at startup
    
    static int reg_parallelWrite_marshall25();
    // Entry point index lookup
    
    inline static int idx_parallelWrite_marshall25() {
      static int epidx = reg_parallelWrite_marshall25();
      return epidx;
    }

    
    inline static int idx_parallelWrite(void (TreePiece::*)(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool) ) {
      return idx_parallelWrite_marshall25();
    }


    
    static int parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool) { return idx_parallelWrite_marshall25(); }
    
    static void _call_parallelWrite_marshall25(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_parallelWrite_marshall25(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_parallelWrite_marshall25(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_parallelWrite_marshall25(PUP::er &p,void *msg);
    /* DECLS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_serialWrite_marshall26();
    // Entry point index lookup
    
    inline static int idx_serialWrite_marshall26() {
      static int epidx = reg_serialWrite_marshall26();
      return epidx;
    }

    
    inline static int idx_serialWrite(void (TreePiece::*)(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb) ) {
      return idx_serialWrite_marshall26();
    }


    
    static int serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb) { return idx_serialWrite_marshall26(); }
    
    static void _call_serialWrite_marshall26(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_serialWrite_marshall26(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_serialWrite_marshall26(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_serialWrite_marshall26(PUP::er &p,void *msg);
    /* DECLS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_oneNodeWrite_marshall27();
    // Entry point index lookup
    
    inline static int idx_oneNodeWrite_marshall27() {
      static int epidx = reg_oneNodeWrite_marshall27();
      return epidx;
    }

    
    inline static int idx_oneNodeWrite(void (TreePiece::*)(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb) ) {
      return idx_oneNodeWrite_marshall27();
    }


    
    static int oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb) { return idx_oneNodeWrite_marshall27(); }
    
    static void _call_oneNodeWrite_marshall27(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_oneNodeWrite_marshall27(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_oneNodeWrite_marshall27(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_oneNodeWrite_marshall27(PUP::er &p,void *msg);
    /* DECLS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_reOrder_marshall28();
    // Entry point index lookup
    
    inline static int idx_reOrder_marshall28() {
      static int epidx = reg_reOrder_marshall28();
      return epidx;
    }

    
    inline static int idx_reOrder(void (TreePiece::*)(const int64_t &nMaxOrder, const CkCallback &cb) ) {
      return idx_reOrder_marshall28();
    }


    
    static int reOrder(const int64_t &nMaxOrder, const CkCallback &cb) { return idx_reOrder_marshall28(); }
    
    static void _call_reOrder_marshall28(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reOrder_marshall28(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reOrder_marshall28(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reOrder_marshall28(PUP::er &p,void *msg);
    /* DECLS: void ioShuffle(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ioShuffle_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_ioShuffle_CkReductionMsg() {
      static int epidx = reg_ioShuffle_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_ioShuffle(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_ioShuffle_CkReductionMsg();
    }


    
    static int ioShuffle(CkReductionMsg* impl_msg) { return idx_ioShuffle_CkReductionMsg(); }
    
    static void _call_ioShuffle_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ioShuffle_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ioAcceptSortedParticles_ParticleShuffleMsg();
    // Entry point index lookup
    
    inline static int idx_ioAcceptSortedParticles_ParticleShuffleMsg() {
      static int epidx = reg_ioAcceptSortedParticles_ParticleShuffleMsg();
      return epidx;
    }

    
    inline static int idx_ioAcceptSortedParticles(void (TreePiece::*)(ParticleShuffleMsg* impl_msg) ) {
      return idx_ioAcceptSortedParticles_ParticleShuffleMsg();
    }


    
    static int ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) { return idx_ioAcceptSortedParticles_ParticleShuffleMsg(); }
    
    static void _call_ioAcceptSortedParticles_ParticleShuffleMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ioAcceptSortedParticles_ParticleShuffleMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void assignKeys(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_assignKeys_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_assignKeys_CkReductionMsg() {
      static int epidx = reg_assignKeys_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_assignKeys(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_assignKeys_CkReductionMsg();
    }


    
    static int assignKeys(CkReductionMsg* impl_msg) { return idx_assignKeys_CkReductionMsg(); }
    
    static void _call_assignKeys_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_assignKeys_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_evaluateBoundaries_marshall32();
    // Entry point index lookup
    
    inline static int idx_evaluateBoundaries_marshall32() {
      static int epidx = reg_evaluateBoundaries_marshall32();
      return epidx;
    }

    
    inline static int idx_evaluateBoundaries(void (TreePiece::*)(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb) ) {
      return idx_evaluateBoundaries_marshall32();
    }


    
    static int evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb) { return idx_evaluateBoundaries_marshall32(); }
    
    static void _call_evaluateBoundaries_marshall32(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_evaluateBoundaries_marshall32(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_evaluateBoundaries_marshall32(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_evaluateBoundaries_marshall32(PUP::er &p,void *msg);
    /* DECLS: void unshuffleParticles(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_unshuffleParticles_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_unshuffleParticles_CkReductionMsg() {
      static int epidx = reg_unshuffleParticles_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_unshuffleParticles(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_unshuffleParticles_CkReductionMsg();
    }


    
    static int unshuffleParticles(CkReductionMsg* impl_msg) { return idx_unshuffleParticles_CkReductionMsg(); }
    
    static void _call_unshuffleParticles_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unshuffleParticles_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_acceptSortedParticles_ParticleShuffleMsg();
    // Entry point index lookup
    
    inline static int idx_acceptSortedParticles_ParticleShuffleMsg() {
      static int epidx = reg_acceptSortedParticles_ParticleShuffleMsg();
      return epidx;
    }

    
    inline static int idx_acceptSortedParticles(void (TreePiece::*)(ParticleShuffleMsg* impl_msg) ) {
      return idx_acceptSortedParticles_ParticleShuffleMsg();
    }


    
    static int acceptSortedParticles(ParticleShuffleMsg* impl_msg) { return idx_acceptSortedParticles_ParticleShuffleMsg(); }
    
    static void _call_acceptSortedParticles_ParticleShuffleMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptSortedParticles_ParticleShuffleMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void unshuffleParticlesWoDD(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_unshuffleParticlesWoDD_marshall35();
    // Entry point index lookup
    
    inline static int idx_unshuffleParticlesWoDD_marshall35() {
      static int epidx = reg_unshuffleParticlesWoDD_marshall35();
      return epidx;
    }

    
    inline static int idx_unshuffleParticlesWoDD(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_unshuffleParticlesWoDD_marshall35();
    }


    
    static int unshuffleParticlesWoDD(const CkCallback &cb) { return idx_unshuffleParticlesWoDD_marshall35(); }
    
    static void _call_unshuffleParticlesWoDD_marshall35(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unshuffleParticlesWoDD_marshall35(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_unshuffleParticlesWoDD_marshall35(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_unshuffleParticlesWoDD_marshall35(PUP::er &p,void *msg);
    /* DECLS: void shuffleAfterQD(void);
     */
    // Entry point registration at startup
    
    static int reg_shuffleAfterQD_void();
    // Entry point index lookup
    
    inline static int idx_shuffleAfterQD_void() {
      static int epidx = reg_shuffleAfterQD_void();
      return epidx;
    }

    
    inline static int idx_shuffleAfterQD(void (TreePiece::*)(void) ) {
      return idx_shuffleAfterQD_void();
    }


    
    static int shuffleAfterQD(void) { return idx_shuffleAfterQD_void(); }
    
    static void _call_shuffleAfterQD_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_shuffleAfterQD_void(void* impl_msg, void* impl_obj);
    /* DECLS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_acceptSortedParticlesFromOther_ParticleShuffleMsg();
    // Entry point index lookup
    
    inline static int idx_acceptSortedParticlesFromOther_ParticleShuffleMsg() {
      static int epidx = reg_acceptSortedParticlesFromOther_ParticleShuffleMsg();
      return epidx;
    }

    
    inline static int idx_acceptSortedParticlesFromOther(void (TreePiece::*)(ParticleShuffleMsg* impl_msg) ) {
      return idx_acceptSortedParticlesFromOther_ParticleShuffleMsg();
    }


    
    static int acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) { return idx_acceptSortedParticlesFromOther_ParticleShuffleMsg(); }
    
    static void _call_acceptSortedParticlesFromOther_ParticleShuffleMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptSortedParticlesFromOther_ParticleShuffleMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initORBPieces(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_initORBPieces_marshall38();
    // Entry point index lookup
    
    inline static int idx_initORBPieces_marshall38() {
      static int epidx = reg_initORBPieces_marshall38();
      return epidx;
    }

    
    inline static int idx_initORBPieces(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_initORBPieces_marshall38();
    }


    
    static int initORBPieces(const CkCallback &cb) { return idx_initORBPieces_marshall38(); }
    
    static void _call_initORBPieces_marshall38(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initORBPieces_marshall38(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initORBPieces_marshall38(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initORBPieces_marshall38(PUP::er &p,void *msg);
    /* DECLS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
     */
    // Entry point registration at startup
    
    static int reg_initBeforeORBSend_marshall39();
    // Entry point index lookup
    
    inline static int idx_initBeforeORBSend_marshall39() {
      static int epidx = reg_initBeforeORBSend_marshall39();
      return epidx;
    }

    
    inline static int idx_initBeforeORBSend(void (TreePiece::*)(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback) ) {
      return idx_initBeforeORBSend_marshall39();
    }


    
    static int initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback) { return idx_initBeforeORBSend_marshall39(); }
    
    static void _call_initBeforeORBSend_marshall39(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initBeforeORBSend_marshall39(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initBeforeORBSend_marshall39(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initBeforeORBSend_marshall39(PUP::er &p,void *msg);
    /* DECLS: void sendORBParticles(void);
     */
    // Entry point registration at startup
    
    static int reg_sendORBParticles_void();
    // Entry point index lookup
    
    inline static int idx_sendORBParticles_void() {
      static int epidx = reg_sendORBParticles_void();
      return epidx;
    }

    
    inline static int idx_sendORBParticles(void (TreePiece::*)(void) ) {
      return idx_sendORBParticles_void();
    }


    
    static int sendORBParticles(void) { return idx_sendORBParticles_void(); }
    
    static void _call_sendORBParticles_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendORBParticles_void(void* impl_msg, void* impl_obj);
    /* DECLS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
     */
    // Entry point registration at startup
    
    static int reg_acceptORBParticles_marshall41();
    // Entry point index lookup
    
    inline static int idx_acceptORBParticles_marshall41() {
      static int epidx = reg_acceptORBParticles_marshall41();
      return epidx;
    }

    
    inline static int idx_acceptORBParticles(void (TreePiece::*)(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn) ) {
      return idx_acceptORBParticles_marshall41();
    }


    
    static int acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn) { return idx_acceptORBParticles_marshall41(); }
    
    static void _call_acceptORBParticles_marshall41(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptORBParticles_marshall41(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptORBParticles_marshall41(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptORBParticles_marshall41(PUP::er &p,void *msg);
    /* DECLS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finalizeBoundaries_ORBSplittersMsg();
    // Entry point index lookup
    
    inline static int idx_finalizeBoundaries_ORBSplittersMsg() {
      static int epidx = reg_finalizeBoundaries_ORBSplittersMsg();
      return epidx;
    }

    
    inline static int idx_finalizeBoundaries(void (TreePiece::*)(ORBSplittersMsg* impl_msg) ) {
      return idx_finalizeBoundaries_ORBSplittersMsg();
    }


    
    static int finalizeBoundaries(ORBSplittersMsg* impl_msg) { return idx_finalizeBoundaries_ORBSplittersMsg(); }
    
    static void _call_finalizeBoundaries_ORBSplittersMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finalizeBoundaries_ORBSplittersMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_evaluateParticleCounts_ORBSplittersMsg();
    // Entry point index lookup
    
    inline static int idx_evaluateParticleCounts_ORBSplittersMsg() {
      static int epidx = reg_evaluateParticleCounts_ORBSplittersMsg();
      return epidx;
    }

    
    inline static int idx_evaluateParticleCounts(void (TreePiece::*)(ORBSplittersMsg* impl_msg) ) {
      return idx_evaluateParticleCounts_ORBSplittersMsg();
    }


    
    static int evaluateParticleCounts(ORBSplittersMsg* impl_msg) { return idx_evaluateParticleCounts_ORBSplittersMsg(); }
    
    static void _call_evaluateParticleCounts_ORBSplittersMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_evaluateParticleCounts_ORBSplittersMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_kick_marshall44();
    // Entry point index lookup
    
    inline static int idx_kick_marshall44() {
      static int epidx = reg_kick_marshall44();
      return epidx;
    }

    
    inline static int idx_kick(void (TreePiece::*)(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb) ) {
      return idx_kick_marshall44();
    }


    
    static int kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb) { return idx_kick_marshall44(); }
    
    static void _call_kick_marshall44(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_kick_marshall44(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_kick_marshall44(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_kick_marshall44(PUP::er &p,void *msg);
    /* DECLS: void initAccel(int iKickRung, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_initAccel_marshall45();
    // Entry point index lookup
    
    inline static int idx_initAccel_marshall45() {
      static int epidx = reg_initAccel_marshall45();
      return epidx;
    }

    
    inline static int idx_initAccel(void (TreePiece::*)(int iKickRung, const CkCallback &cb) ) {
      return idx_initAccel_marshall45();
    }


    
    static int initAccel(int iKickRung, const CkCallback &cb) { return idx_initAccel_marshall45(); }
    
    static void _call_initAccel_marshall45(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initAccel_marshall45(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initAccel_marshall45(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initAccel_marshall45(PUP::er &p,void *msg);
    /* DECLS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_adjust_marshall46();
    // Entry point index lookup
    
    inline static int idx_adjust_marshall46() {
      static int epidx = reg_adjust_marshall46();
      return epidx;
    }

    
    inline static int idx_adjust(void (TreePiece::*)(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb) ) {
      return idx_adjust_marshall46();
    }


    
    static int adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb) { return idx_adjust_marshall46(); }
    
    static void _call_adjust_marshall46(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_adjust_marshall46(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_adjust_marshall46(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_adjust_marshall46(PUP::er &p,void *msg);
    /* DECLS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_truncateRung_marshall47();
    // Entry point index lookup
    
    inline static int idx_truncateRung_marshall47() {
      static int epidx = reg_truncateRung_marshall47();
      return epidx;
    }

    
    inline static int idx_truncateRung(void (TreePiece::*)(int iCurrMaxRung, const CkCallback &cb) ) {
      return idx_truncateRung_marshall47();
    }


    
    static int truncateRung(int iCurrMaxRung, const CkCallback &cb) { return idx_truncateRung_marshall47(); }
    
    static void _call_truncateRung_marshall47(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_truncateRung_marshall47(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_truncateRung_marshall47(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_truncateRung_marshall47(PUP::er &p,void *msg);
    /* DECLS: void rungStats(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_rungStats_marshall48();
    // Entry point index lookup
    
    inline static int idx_rungStats_marshall48() {
      static int epidx = reg_rungStats_marshall48();
      return epidx;
    }

    
    inline static int idx_rungStats(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_rungStats_marshall48();
    }


    
    static int rungStats(const CkCallback &cb) { return idx_rungStats_marshall48(); }
    
    static void _call_rungStats_marshall48(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_rungStats_marshall48(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_rungStats_marshall48(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_rungStats_marshall48(PUP::er &p,void *msg);
    /* DECLS: void countActive(int activeRung, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_countActive_marshall49();
    // Entry point index lookup
    
    inline static int idx_countActive_marshall49() {
      static int epidx = reg_countActive_marshall49();
      return epidx;
    }

    
    inline static int idx_countActive(void (TreePiece::*)(int activeRung, const CkCallback &cb) ) {
      return idx_countActive_marshall49();
    }


    
    static int countActive(int activeRung, const CkCallback &cb) { return idx_countActive_marshall49(); }
    
    static void _call_countActive_marshall49(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_countActive_marshall49(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_countActive_marshall49(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_countActive_marshall49(PUP::er &p,void *msg);
    /* DECLS: void assignDomain(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_assignDomain_marshall50();
    // Entry point index lookup
    
    inline static int idx_assignDomain_marshall50() {
      static int epidx = reg_assignDomain_marshall50();
      return epidx;
    }

    
    inline static int idx_assignDomain(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_assignDomain_marshall50();
    }


    
    static int assignDomain(const CkCallback &cb) { return idx_assignDomain_marshall50(); }
    
    static void _call_assignDomain_marshall50(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_assignDomain_marshall50(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_assignDomain_marshall50(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_assignDomain_marshall50(PUP::er &p,void *msg);
    /* DECLS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_drift_marshall51();
    // Entry point index lookup
    
    inline static int idx_drift_marshall51() {
      static int epidx = reg_drift_marshall51();
      return epidx;
    }

    
    inline static int idx_drift(void (TreePiece::*)(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb) ) {
      return idx_drift_marshall51();
    }


    
    static int drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb) { return idx_drift_marshall51(); }
    
    static void _call_drift_marshall51(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_drift_marshall51(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_drift_marshall51(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_drift_marshall51(PUP::er &p,void *msg);
    /* DECLS: void starCenterOfMass(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_starCenterOfMass_marshall52();
    // Entry point index lookup
    
    inline static int idx_starCenterOfMass_marshall52() {
      static int epidx = reg_starCenterOfMass_marshall52();
      return epidx;
    }

    
    inline static int idx_starCenterOfMass(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_starCenterOfMass_marshall52();
    }


    
    static int starCenterOfMass(const CkCallback &cb) { return idx_starCenterOfMass_marshall52(); }
    
    static void _call_starCenterOfMass_marshall52(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_starCenterOfMass_marshall52(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_starCenterOfMass_marshall52(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_starCenterOfMass_marshall52(PUP::er &p,void *msg);
    /* DECLS: void calcEnergy(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_calcEnergy_marshall53();
    // Entry point index lookup
    
    inline static int idx_calcEnergy_marshall53() {
      static int epidx = reg_calcEnergy_marshall53();
      return epidx;
    }

    
    inline static int idx_calcEnergy(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_calcEnergy_marshall53();
    }


    
    static int calcEnergy(const CkCallback &cb) { return idx_calcEnergy_marshall53(); }
    
    static void _call_calcEnergy_marshall53(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calcEnergy_marshall53(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_calcEnergy_marshall53(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_calcEnergy_marshall53(PUP::er &p,void *msg);
    /* DECLS: void colNParts(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_colNParts_marshall54();
    // Entry point index lookup
    
    inline static int idx_colNParts_marshall54() {
      static int epidx = reg_colNParts_marshall54();
      return epidx;
    }

    
    inline static int idx_colNParts(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_colNParts_marshall54();
    }


    
    static int colNParts(const CkCallback &cb) { return idx_colNParts_marshall54(); }
    
    static void _call_colNParts_marshall54(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_colNParts_marshall54(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_colNParts_marshall54(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_colNParts_marshall54(PUP::er &p,void *msg);
    /* DECLS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_newOrder_marshall55();
    // Entry point index lookup
    
    inline static int idx_newOrder_marshall55() {
      static int epidx = reg_newOrder_marshall55();
      return epidx;
    }

    
    inline static int idx_newOrder(void (TreePiece::*)(const NewMaxOrder *nStarts, int n, const CkCallback &cb) ) {
      return idx_newOrder_marshall55();
    }


    
    static int newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb) { return idx_newOrder_marshall55(); }
    
    static void _call_newOrder_marshall55(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_newOrder_marshall55(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_newOrder_marshall55(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_newOrder_marshall55(PUP::er &p,void *msg);
    /* DECLS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_setNParts_marshall56();
    // Entry point index lookup
    
    inline static int idx_setNParts_marshall56() {
      static int epidx = reg_setNParts_marshall56();
      return epidx;
    }

    
    inline static int idx_setNParts(void (TreePiece::*)(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb) ) {
      return idx_setNParts_marshall56();
    }


    
    static int setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb) { return idx_setNParts_marshall56(); }
    
    static void _call_setNParts_marshall56(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setNParts_marshall56(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setNParts_marshall56(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setNParts_marshall56(PUP::er &p,void *msg);
    /* DECLS: void setSoft(double dSoft, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_setSoft_marshall57();
    // Entry point index lookup
    
    inline static int idx_setSoft_marshall57() {
      static int epidx = reg_setSoft_marshall57();
      return epidx;
    }

    
    inline static int idx_setSoft(void (TreePiece::*)(double dSoft, const CkCallback &cb) ) {
      return idx_setSoft_marshall57();
    }


    
    static int setSoft(double dSoft, const CkCallback &cb) { return idx_setSoft_marshall57(); }
    
    static void _call_setSoft_marshall57(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setSoft_marshall57(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setSoft_marshall57(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setSoft_marshall57(PUP::er &p,void *msg);
    /* DECLS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_physicalSoft_marshall58();
    // Entry point index lookup
    
    inline static int idx_physicalSoft_marshall58() {
      static int epidx = reg_physicalSoft_marshall58();
      return epidx;
    }

    
    inline static int idx_physicalSoft(void (TreePiece::*)(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb) ) {
      return idx_physicalSoft_marshall58();
    }


    
    static int physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb) { return idx_physicalSoft_marshall58(); }
    
    static void _call_physicalSoft_marshall58(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_physicalSoft_marshall58(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_physicalSoft_marshall58(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_physicalSoft_marshall58(PUP::er &p,void *msg);
    /* DECLS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_growMass_marshall59();
    // Entry point index lookup
    
    inline static int idx_growMass_marshall59() {
      static int epidx = reg_growMass_marshall59();
      return epidx;
    }

    
    inline static int idx_growMass(void (TreePiece::*)(int nGrowMass, double dDeltaM, const CkCallback &cb) ) {
      return idx_growMass_marshall59();
    }


    
    static int growMass(int nGrowMass, double dDeltaM, const CkCallback &cb) { return idx_growMass_marshall59(); }
    
    static void _call_growMass_marshall59(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_growMass_marshall59(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_growMass_marshall59(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_growMass_marshall59(PUP::er &p,void *msg);
    /* DECLS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_InitEnergy_marshall60();
    // Entry point index lookup
    
    inline static int idx_InitEnergy_marshall60() {
      static int epidx = reg_InitEnergy_marshall60();
      return epidx;
    }

    
    inline static int idx_InitEnergy(void (TreePiece::*)(double dTuFac, double z, double dTime, const CkCallback &cb) ) {
      return idx_InitEnergy_marshall60();
    }


    
    static int InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb) { return idx_InitEnergy_marshall60(); }
    
    static void _call_InitEnergy_marshall60(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_InitEnergy_marshall60(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_InitEnergy_marshall60(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_InitEnergy_marshall60(PUP::er &p,void *msg);
    /* DECLS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_updateuDot_marshall61();
    // Entry point index lookup
    
    inline static int idx_updateuDot_marshall61() {
      static int epidx = reg_updateuDot_marshall61();
      return epidx;
    }

    
    inline static int idx_updateuDot(void (TreePiece::*)(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb) ) {
      return idx_updateuDot_marshall61();
    }


    
    static int updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb) { return idx_updateuDot_marshall61(); }
    
    static void _call_updateuDot_marshall61(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateuDot_marshall61(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateuDot_marshall61(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateuDot_marshall61(PUP::er &p,void *msg);
    /* DECLS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_ballMax_marshall62();
    // Entry point index lookup
    
    inline static int idx_ballMax_marshall62() {
      static int epidx = reg_ballMax_marshall62();
      return epidx;
    }

    
    inline static int idx_ballMax(void (TreePiece::*)(int activeRung, double dFac, const CkCallback &cb) ) {
      return idx_ballMax_marshall62();
    }


    
    static int ballMax(int activeRung, double dFac, const CkCallback &cb) { return idx_ballMax_marshall62(); }
    
    static void _call_ballMax_marshall62(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ballMax_marshall62(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ballMax_marshall62(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ballMax_marshall62(PUP::er &p,void *msg);
    /* DECLS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_sphViscosityLimiter_marshall63();
    // Entry point index lookup
    
    inline static int idx_sphViscosityLimiter_marshall63() {
      static int epidx = reg_sphViscosityLimiter_marshall63();
      return epidx;
    }

    
    inline static int idx_sphViscosityLimiter(void (TreePiece::*)(int bOn, int activeRung, const CkCallback &cb) ) {
      return idx_sphViscosityLimiter_marshall63();
    }


    
    static int sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb) { return idx_sphViscosityLimiter_marshall63(); }
    
    static void _call_sphViscosityLimiter_marshall63(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sphViscosityLimiter_marshall63(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sphViscosityLimiter_marshall63(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sphViscosityLimiter_marshall63(PUP::er &p,void *msg);
    /* DECLS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_getAdiabaticGasPressure_marshall64();
    // Entry point index lookup
    
    inline static int idx_getAdiabaticGasPressure_marshall64() {
      static int epidx = reg_getAdiabaticGasPressure_marshall64();
      return epidx;
    }

    
    inline static int idx_getAdiabaticGasPressure(void (TreePiece::*)(double gamma, double gammam1, const CkCallback &cb) ) {
      return idx_getAdiabaticGasPressure_marshall64();
    }


    
    static int getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb) { return idx_getAdiabaticGasPressure_marshall64(); }
    
    static void _call_getAdiabaticGasPressure_marshall64(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getAdiabaticGasPressure_marshall64(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getAdiabaticGasPressure_marshall64(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getAdiabaticGasPressure_marshall64(PUP::er &p,void *msg);
    /* DECLS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_getCoolingGasPressure_marshall65();
    // Entry point index lookup
    
    inline static int idx_getCoolingGasPressure_marshall65() {
      static int epidx = reg_getCoolingGasPressure_marshall65();
      return epidx;
    }

    
    inline static int idx_getCoolingGasPressure(void (TreePiece::*)(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb) ) {
      return idx_getCoolingGasPressure_marshall65();
    }


    
    static int getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb) { return idx_getCoolingGasPressure_marshall65(); }
    
    static void _call_getCoolingGasPressure_marshall65(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getCoolingGasPressure_marshall65(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getCoolingGasPressure_marshall65(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getCoolingGasPressure_marshall65(PUP::er &p,void *msg);
    /* DECLS: void initRand(int iRand, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_initRand_marshall66();
    // Entry point index lookup
    
    inline static int idx_initRand_marshall66() {
      static int epidx = reg_initRand_marshall66();
      return epidx;
    }

    
    inline static int idx_initRand(void (TreePiece::*)(int iRand, const CkCallback &cb) ) {
      return idx_initRand_marshall66();
    }


    
    static int initRand(int iRand, const CkCallback &cb) { return idx_initRand_marshall66(); }
    
    static void _call_initRand_marshall66(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initRand_marshall66(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initRand_marshall66(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initRand_marshall66(PUP::er &p,void *msg);
    /* DECLS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_FormStars_marshall67();
    // Entry point index lookup
    
    inline static int idx_FormStars_marshall67() {
      static int epidx = reg_FormStars_marshall67();
      return epidx;
    }

    
    inline static int idx_FormStars(void (TreePiece::*)(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb) ) {
      return idx_FormStars_marshall67();
    }


    
    static int FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb) { return idx_FormStars_marshall67(); }
    
    static void _call_FormStars_marshall67(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FormStars_marshall67(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_FormStars_marshall67(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_FormStars_marshall67(PUP::er &p,void *msg);
    /* DECLS: void flushStarLog(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_flushStarLog_marshall68();
    // Entry point index lookup
    
    inline static int idx_flushStarLog_marshall68() {
      static int epidx = reg_flushStarLog_marshall68();
      return epidx;
    }

    
    inline static int idx_flushStarLog(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_flushStarLog_marshall68();
    }


    
    static int flushStarLog(const CkCallback &cb) { return idx_flushStarLog_marshall68(); }
    
    static void _call_flushStarLog_marshall68(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flushStarLog_marshall68(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_flushStarLog_marshall68(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_flushStarLog_marshall68(PUP::er &p,void *msg);
    /* DECLS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_Feedback_marshall69();
    // Entry point index lookup
    
    inline static int idx_Feedback_marshall69() {
      static int epidx = reg_Feedback_marshall69();
      return epidx;
    }

    
    inline static int idx_Feedback(void (TreePiece::*)(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb) ) {
      return idx_Feedback_marshall69();
    }


    
    static int Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb) { return idx_Feedback_marshall69(); }
    
    static void _call_Feedback_marshall69(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Feedback_marshall69(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Feedback_marshall69(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Feedback_marshall69(PUP::er &p,void *msg);
    /* DECLS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_massMetalsEnergyCheck_marshall70();
    // Entry point index lookup
    
    inline static int idx_massMetalsEnergyCheck_marshall70() {
      static int epidx = reg_massMetalsEnergyCheck_marshall70();
      return epidx;
    }

    
    inline static int idx_massMetalsEnergyCheck(void (TreePiece::*)(int bPreDist, const CkCallback &cb) ) {
      return idx_massMetalsEnergyCheck_marshall70();
    }


    
    static int massMetalsEnergyCheck(int bPreDist, const CkCallback &cb) { return idx_massMetalsEnergyCheck_marshall70(); }
    
    static void _call_massMetalsEnergyCheck_marshall70(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_massMetalsEnergyCheck_marshall70(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_massMetalsEnergyCheck_marshall70(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_massMetalsEnergyCheck_marshall70(PUP::er &p,void *msg);
    /* DECLS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_setTypeFromFile_marshall71();
    // Entry point index lookup
    
    inline static int idx_setTypeFromFile_marshall71() {
      static int epidx = reg_setTypeFromFile_marshall71();
      return epidx;
    }

    
    inline static int idx_setTypeFromFile(void (TreePiece::*)(int iSetMask, const char *file, const CkCallback &cb) ) {
      return idx_setTypeFromFile_marshall71();
    }


    
    static int setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb) { return idx_setTypeFromFile_marshall71(); }
    
    static void _call_setTypeFromFile_marshall71(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setTypeFromFile_marshall71(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setTypeFromFile_marshall71(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setTypeFromFile_marshall71(PUP::er &p,void *msg);
    /* DECLS: void getCOM(const CkCallback &cb, int bLiveViz);
     */
    // Entry point registration at startup
    
    static int reg_getCOM_marshall72();
    // Entry point index lookup
    
    inline static int idx_getCOM_marshall72() {
      static int epidx = reg_getCOM_marshall72();
      return epidx;
    }

    
    inline static int idx_getCOM(void (TreePiece::*)(const CkCallback &cb, int bLiveViz) ) {
      return idx_getCOM_marshall72();
    }


    
    static int getCOM(const CkCallback &cb, int bLiveViz) { return idx_getCOM_marshall72(); }
    
    static void _call_getCOM_marshall72(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getCOM_marshall72(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getCOM_marshall72(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getCOM_marshall72(PUP::er &p,void *msg);
    /* DECLS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
     */
    // Entry point registration at startup
    
    static int reg_getCOMByType_marshall73();
    // Entry point index lookup
    
    inline static int idx_getCOMByType_marshall73() {
      static int epidx = reg_getCOMByType_marshall73();
      return epidx;
    }

    
    inline static int idx_getCOMByType(void (TreePiece::*)(int iType, const CkCallback &cb, int bLiveViz) ) {
      return idx_getCOMByType_marshall73();
    }


    
    static int getCOMByType(int iType, const CkCallback &cb, int bLiveViz) { return idx_getCOMByType_marshall73(); }
    
    static void _call_getCOMByType_marshall73(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getCOMByType_marshall73(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getCOMByType_marshall73(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getCOMByType_marshall73(PUP::er &p,void *msg);
    /* DECLS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
     */
    // Entry point registration at startup
    
    static int reg_DumpFrame_marshall74();
    // Entry point index lookup
    
    inline static int idx_DumpFrame_marshall74() {
      static int epidx = reg_DumpFrame_marshall74();
      return epidx;
    }

    
    inline static int idx_DumpFrame(void (TreePiece::*)(const InDumpFrame &in, const CkCallback &cb, int liveVizDump) ) {
      return idx_DumpFrame_marshall74();
    }


    
    static int DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump) { return idx_DumpFrame_marshall74(); }
    
    static void _call_DumpFrame_marshall74(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DumpFrame_marshall74(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_DumpFrame_marshall74(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_DumpFrame_marshall74(PUP::er &p,void *msg);
    /* DECLS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_liveVizDumpFrameInit_liveVizRequestMsg();
    // Entry point index lookup
    
    inline static int idx_liveVizDumpFrameInit_liveVizRequestMsg() {
      static int epidx = reg_liveVizDumpFrameInit_liveVizRequestMsg();
      return epidx;
    }

    
    inline static int idx_liveVizDumpFrameInit(void (TreePiece::*)(liveVizRequestMsg* impl_msg) ) {
      return idx_liveVizDumpFrameInit_liveVizRequestMsg();
    }


    
    static int liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) { return idx_liveVizDumpFrameInit_liveVizRequestMsg(); }
    
    static void _call_liveVizDumpFrameInit_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveVizDumpFrameInit_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setProjections(int bOn);
     */
    // Entry point registration at startup
    
    static int reg_setProjections_marshall76();
    // Entry point index lookup
    
    inline static int idx_setProjections_marshall76() {
      static int epidx = reg_setProjections_marshall76();
      return epidx;
    }

    
    inline static int idx_setProjections(void (TreePiece::*)(int bOn) ) {
      return idx_setProjections_marshall76();
    }


    
    static int setProjections(int bOn) { return idx_setProjections_marshall76(); }
    
    static void _call_setProjections_marshall76(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setProjections_marshall76(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setProjections_marshall76(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setProjections_marshall76(PUP::er &p,void *msg);
    /* DECLS: void buildTree(int bucketSize, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_buildTree_marshall77();
    // Entry point index lookup
    
    inline static int idx_buildTree_marshall77() {
      static int epidx = reg_buildTree_marshall77();
      return epidx;
    }

    
    inline static int idx_buildTree(void (TreePiece::*)(int bucketSize, const CkCallback &cb) ) {
      return idx_buildTree_marshall77();
    }


    
    static int buildTree(int bucketSize, const CkCallback &cb) { return idx_buildTree_marshall77(); }
    
    static void _call_buildTree_marshall77(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_buildTree_marshall77(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_buildTree_marshall77(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_buildTree_marshall77(PUP::er &p,void *msg);
    /* DECLS: void startOctTreeBuild(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_startOctTreeBuild_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_startOctTreeBuild_CkReductionMsg() {
      static int epidx = reg_startOctTreeBuild_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_startOctTreeBuild(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_startOctTreeBuild_CkReductionMsg();
    }


    
    static int startOctTreeBuild(CkReductionMsg* impl_msg) { return idx_startOctTreeBuild_CkReductionMsg(); }
    
    static void _call_startOctTreeBuild_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startOctTreeBuild_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
     */
    // Entry point registration at startup
    
    static int reg_recvBoundary_marshall79();
    // Entry point index lookup
    
    inline static int idx_recvBoundary_marshall79() {
      static int epidx = reg_recvBoundary_marshall79();
      return epidx;
    }

    
    inline static int idx_recvBoundary(void (TreePiece::*)(const SFC::Key &key, const NborDir &dir) ) {
      return idx_recvBoundary_marshall79();
    }


    
    static int recvBoundary(const SFC::Key &key, const NborDir &dir) { return idx_recvBoundary_marshall79(); }
    
    static void _call_recvBoundary_marshall79(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBoundary_marshall79(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvBoundary_marshall79(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvBoundary_marshall79(PUP::er &p,void *msg);
    /* DECLS: void recvdBoundaries(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvdBoundaries_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_recvdBoundaries_CkReductionMsg() {
      static int epidx = reg_recvdBoundaries_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_recvdBoundaries(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_recvdBoundaries_CkReductionMsg();
    }


    
    static int recvdBoundaries(CkReductionMsg* impl_msg) { return idx_recvdBoundaries_CkReductionMsg(); }
    
    static void _call_recvdBoundaries_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvdBoundaries_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void startORBTreeBuild(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_startORBTreeBuild_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_startORBTreeBuild_CkReductionMsg() {
      static int epidx = reg_startORBTreeBuild_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_startORBTreeBuild(void (TreePiece::*)(CkReductionMsg* impl_msg) ) {
      return idx_startORBTreeBuild_CkReductionMsg();
    }


    
    static int startORBTreeBuild(CkReductionMsg* impl_msg) { return idx_startORBTreeBuild_CkReductionMsg(); }
    
    static void _call_startORBTreeBuild_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startORBTreeBuild_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_startGravity_marshall82();
    // Entry point index lookup
    
    inline static int idx_startGravity_marshall82() {
      static int epidx = reg_startGravity_marshall82();
      return epidx;
    }

    
    inline static int idx_startGravity(void (TreePiece::*)(int activeRung, double myTheta, const CkCallback &cb) ) {
      return idx_startGravity_marshall82();
    }


    
    static int startGravity(int activeRung, double myTheta, const CkCallback &cb) { return idx_startGravity_marshall82(); }
    
    static void _call_startGravity_marshall82(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startGravity_marshall82(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startGravity_marshall82(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startGravity_marshall82(PUP::er &p,void *msg);
    /* DECLS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_startSmooth_marshall83();
    // Entry point index lookup
    
    inline static int idx_startSmooth_marshall83() {
      static int epidx = reg_startSmooth_marshall83();
      return epidx;
    }

    
    inline static int idx_startSmooth(void (TreePiece::*)(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb) ) {
      return idx_startSmooth_marshall83();
    }


    
    static int startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb) { return idx_startSmooth_marshall83(); }
    
    static void _call_startSmooth_marshall83(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startSmooth_marshall83(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startSmooth_marshall83(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startSmooth_marshall83(PUP::er &p,void *msg);
    /* DECLS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_startReSmooth_marshall84();
    // Entry point index lookup
    
    inline static int idx_startReSmooth_marshall84() {
      static int epidx = reg_startReSmooth_marshall84();
      return epidx;
    }

    
    inline static int idx_startReSmooth(void (TreePiece::*)(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb) ) {
      return idx_startReSmooth_marshall84();
    }


    
    static int startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb) { return idx_startReSmooth_marshall84(); }
    
    static void _call_startReSmooth_marshall84(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startReSmooth_marshall84(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startReSmooth_marshall84(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startReSmooth_marshall84(PUP::er &p,void *msg);
    /* DECLS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_startMarkSmooth_marshall85();
    // Entry point index lookup
    
    inline static int idx_startMarkSmooth_marshall85() {
      static int epidx = reg_startMarkSmooth_marshall85();
      return epidx;
    }

    
    inline static int idx_startMarkSmooth(void (TreePiece::*)(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb) ) {
      return idx_startMarkSmooth_marshall85();
    }


    
    static int startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb) { return idx_startMarkSmooth_marshall85(); }
    
    static void _call_startMarkSmooth_marshall85(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startMarkSmooth_marshall85(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startMarkSmooth_marshall85(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startMarkSmooth_marshall85(PUP::er &p,void *msg);
    /* DECLS: void finishNodeCache(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_finishNodeCache_marshall86();
    // Entry point index lookup
    
    inline static int idx_finishNodeCache_marshall86() {
      static int epidx = reg_finishNodeCache_marshall86();
      return epidx;
    }

    
    inline static int idx_finishNodeCache(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_finishNodeCache_marshall86();
    }


    
    static int finishNodeCache(const CkCallback &cb) { return idx_finishNodeCache_marshall86(); }
    
    static void _call_finishNodeCache_marshall86(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishNodeCache_marshall86(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_finishNodeCache_marshall86(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_finishNodeCache_marshall86(PUP::er &p,void *msg);
    /* DECLS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
     */
    // Entry point registration at startup
    
    static int reg_requestRemoteMoments_marshall87();
    // Entry point index lookup
    
    inline static int idx_requestRemoteMoments_marshall87() {
      static int epidx = reg_requestRemoteMoments_marshall87();
      return epidx;
    }

    
    inline static int idx_requestRemoteMoments(void (TreePiece::*)(const Tree::NodeKey &key, int sender) ) {
      return idx_requestRemoteMoments_marshall87();
    }


    
    static int requestRemoteMoments(const Tree::NodeKey &key, int sender) { return idx_requestRemoteMoments_marshall87(); }
    
    static void _call_requestRemoteMoments_marshall87(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestRemoteMoments_marshall87(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestRemoteMoments_marshall87(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestRemoteMoments_marshall87(PUP::er &p,void *msg);
    /* DECLS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
     */
    // Entry point registration at startup
    
    static int reg_receiveRemoteMoments_marshall88();
    // Entry point index lookup
    
    inline static int idx_receiveRemoteMoments_marshall88() {
      static int epidx = reg_receiveRemoteMoments_marshall88();
      return epidx;
    }

    
    inline static int idx_receiveRemoteMoments(void (TreePiece::*)(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes) ) {
      return idx_receiveRemoteMoments_marshall88();
    }


    
    static int receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes) { return idx_receiveRemoteMoments_marshall88(); }
    
    static void _call_receiveRemoteMoments_marshall88(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveRemoteMoments_marshall88(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveRemoteMoments_marshall88(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveRemoteMoments_marshall88(PUP::er &p,void *msg);
    /* DECLS: void commenceCalculateGravityLocal(void);
     */
    // Entry point registration at startup
    
    static int reg_commenceCalculateGravityLocal_void();
    // Entry point index lookup
    
    inline static int idx_commenceCalculateGravityLocal_void() {
      static int epidx = reg_commenceCalculateGravityLocal_void();
      return epidx;
    }

    
    inline static int idx_commenceCalculateGravityLocal(void (TreePiece::*)(void) ) {
      return idx_commenceCalculateGravityLocal_void();
    }


    
    static int commenceCalculateGravityLocal(void) { return idx_commenceCalculateGravityLocal_void(); }
    
    static void _call_commenceCalculateGravityLocal_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_commenceCalculateGravityLocal_void(void* impl_msg, void* impl_obj);
    /* DECLS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_calculateGravityRemote_ComputeChunkMsg();
    // Entry point index lookup
    
    inline static int idx_calculateGravityRemote_ComputeChunkMsg() {
      static int epidx = reg_calculateGravityRemote_ComputeChunkMsg();
      return epidx;
    }

    
    inline static int idx_calculateGravityRemote(void (TreePiece::*)(ComputeChunkMsg* impl_msg) ) {
      return idx_calculateGravityRemote_ComputeChunkMsg();
    }


    
    static int calculateGravityRemote(ComputeChunkMsg* impl_msg) { return idx_calculateGravityRemote_ComputeChunkMsg(); }
    
    static void _call_calculateGravityRemote_ComputeChunkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calculateGravityRemote_ComputeChunkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void calculateReSmoothLocal(void);
     */
    // Entry point registration at startup
    
    static int reg_calculateReSmoothLocal_void();
    // Entry point index lookup
    
    inline static int idx_calculateReSmoothLocal_void() {
      static int epidx = reg_calculateReSmoothLocal_void();
      return epidx;
    }

    
    inline static int idx_calculateReSmoothLocal(void (TreePiece::*)(void) ) {
      return idx_calculateReSmoothLocal_void();
    }


    
    static int calculateReSmoothLocal(void) { return idx_calculateReSmoothLocal_void(); }
    
    static void _call_calculateReSmoothLocal_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calculateReSmoothLocal_void(void* impl_msg, void* impl_obj);
    /* DECLS: void calculateMarkSmoothLocal(void);
     */
    // Entry point registration at startup
    
    static int reg_calculateMarkSmoothLocal_void();
    // Entry point index lookup
    
    inline static int idx_calculateMarkSmoothLocal_void() {
      static int epidx = reg_calculateMarkSmoothLocal_void();
      return epidx;
    }

    
    inline static int idx_calculateMarkSmoothLocal(void (TreePiece::*)(void) ) {
      return idx_calculateMarkSmoothLocal_void();
    }


    
    static int calculateMarkSmoothLocal(void) { return idx_calculateMarkSmoothLocal_void(); }
    
    static void _call_calculateMarkSmoothLocal_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calculateMarkSmoothLocal_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finishWalk(void);
     */
    // Entry point registration at startup
    
    static int reg_finishWalk_void();
    // Entry point index lookup
    
    inline static int idx_finishWalk_void() {
      static int epidx = reg_finishWalk_void();
      return epidx;
    }

    
    inline static int idx_finishWalk(void (TreePiece::*)(void) ) {
      return idx_finishWalk_void();
    }


    
    static int finishWalk(void) { return idx_finishWalk_void(); }
    
    static void _call_finishWalk_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishWalk_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finishSmoothWalk(void);
     */
    // Entry point registration at startup
    
    static int reg_finishSmoothWalk_void();
    // Entry point index lookup
    
    inline static int idx_finishSmoothWalk_void() {
      static int epidx = reg_finishSmoothWalk_void();
      return epidx;
    }

    
    inline static int idx_finishSmoothWalk(void (TreePiece::*)(void) ) {
      return idx_finishSmoothWalk_void();
    }


    
    static int finishSmoothWalk(void) { return idx_finishSmoothWalk_void(); }
    
    static void _call_finishSmoothWalk_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishSmoothWalk_void(void* impl_msg, void* impl_obj);
    /* DECLS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_fillRequestNode_CkCacheRequestMsg();
    // Entry point index lookup
    
    inline static int idx_fillRequestNode_CkCacheRequestMsg() {
      static int epidx = reg_fillRequestNode_CkCacheRequestMsg();
      return epidx;
    }

    
    inline static int idx_fillRequestNode(void (TreePiece::*)(CkCacheRequestMsg<KeyType >* impl_msg) ) {
      return idx_fillRequestNode_CkCacheRequestMsg();
    }


    
    static int fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) { return idx_fillRequestNode_CkCacheRequestMsg(); }
    
    static void _call_fillRequestNode_CkCacheRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_fillRequestNode_CkCacheRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
     */
    // Entry point registration at startup
    
    static int reg_receiveNodeCallback_marshall96();
    // Entry point index lookup
    
    inline static int idx_receiveNodeCallback_marshall96() {
      static int epidx = reg_receiveNodeCallback_marshall96();
      return epidx;
    }

    
    inline static int idx_receiveNodeCallback(void (TreePiece::*)(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source) ) {
      return idx_receiveNodeCallback_marshall96();
    }


    
    static int receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source) { return idx_receiveNodeCallback_marshall96(); }
    
    static void _call_receiveNodeCallback_marshall96(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveNodeCallback_marshall96(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveNodeCallback_marshall96(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveNodeCallback_marshall96(PUP::er &p,void *msg);
    /* DECLS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_fillRequestParticles_CkCacheRequestMsg();
    // Entry point index lookup
    
    inline static int idx_fillRequestParticles_CkCacheRequestMsg() {
      static int epidx = reg_fillRequestParticles_CkCacheRequestMsg();
      return epidx;
    }

    
    inline static int idx_fillRequestParticles(void (TreePiece::*)(CkCacheRequestMsg<KeyType >* impl_msg) ) {
      return idx_fillRequestParticles_CkCacheRequestMsg();
    }


    
    static int fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) { return idx_fillRequestParticles_CkCacheRequestMsg(); }
    
    static void _call_fillRequestParticles_CkCacheRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_fillRequestParticles_CkCacheRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_fillRequestSmoothParticles_CkCacheRequestMsg();
    // Entry point index lookup
    
    inline static int idx_fillRequestSmoothParticles_CkCacheRequestMsg() {
      static int epidx = reg_fillRequestSmoothParticles_CkCacheRequestMsg();
      return epidx;
    }

    
    inline static int idx_fillRequestSmoothParticles(void (TreePiece::*)(CkCacheRequestMsg<KeyType >* impl_msg) ) {
      return idx_fillRequestSmoothParticles_CkCacheRequestMsg();
    }


    
    static int fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) { return idx_fillRequestSmoothParticles_CkCacheRequestMsg(); }
    
    static void _call_fillRequestSmoothParticles_CkCacheRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_fillRequestSmoothParticles_CkCacheRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_flushSmoothParticles_CkCacheFillMsg();
    // Entry point index lookup
    
    inline static int idx_flushSmoothParticles_CkCacheFillMsg() {
      static int epidx = reg_flushSmoothParticles_CkCacheFillMsg();
      return epidx;
    }

    
    inline static int idx_flushSmoothParticles(void (TreePiece::*)(CkCacheFillMsg<KeyType >* impl_msg) ) {
      return idx_flushSmoothParticles_CkCacheFillMsg();
    }


    
    static int flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) { return idx_flushSmoothParticles_CkCacheFillMsg(); }
    
    static void _call_flushSmoothParticles_CkCacheFillMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flushSmoothParticles_CkCacheFillMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
     */
    // Entry point registration at startup
    
    static int reg_receiveParticlesCallback_marshall100();
    // Entry point index lookup
    
    inline static int idx_receiveParticlesCallback_marshall100() {
      static int epidx = reg_receiveParticlesCallback_marshall100();
      return epidx;
    }

    
    inline static int idx_receiveParticlesCallback(void (TreePiece::*)(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source) ) {
      return idx_receiveParticlesCallback_marshall100();
    }


    
    static int receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source) { return idx_receiveParticlesCallback_marshall100(); }
    
    static void _call_receiveParticlesCallback_marshall100(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveParticlesCallback_marshall100(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveParticlesCallback_marshall100(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveParticlesCallback_marshall100(PUP::er &p,void *msg);
    /* DECLS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
     */
    // Entry point registration at startup
    
    static int reg_receiveParticlesFullCallback_marshall101();
    // Entry point index lookup
    
    inline static int idx_receiveParticlesFullCallback_marshall101() {
      static int epidx = reg_receiveParticlesFullCallback_marshall101();
      return epidx;
    }

    
    inline static int idx_receiveParticlesFullCallback(void (TreePiece::*)(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source) ) {
      return idx_receiveParticlesFullCallback_marshall101();
    }


    
    static int receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source) { return idx_receiveParticlesFullCallback_marshall101(); }
    
    static void _call_receiveParticlesFullCallback_marshall101(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveParticlesFullCallback_marshall101(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveParticlesFullCallback_marshall101(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveParticlesFullCallback_marshall101(PUP::er &p,void *msg);
    /* DECLS: void startlb(const CkCallback &cb, int activeRung);
     */
    // Entry point registration at startup
    
    static int reg_startlb_marshall102();
    // Entry point index lookup
    
    inline static int idx_startlb_marshall102() {
      static int epidx = reg_startlb_marshall102();
      return epidx;
    }

    
    inline static int idx_startlb(void (TreePiece::*)(const CkCallback &cb, int activeRung) ) {
      return idx_startlb_marshall102();
    }


    
    static int startlb(const CkCallback &cb, int activeRung) { return idx_startlb_marshall102(); }
    
    static void _call_startlb_marshall102(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startlb_marshall102(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startlb_marshall102(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startlb_marshall102(PUP::er &p,void *msg);
    /* DECLS: void ResumeFromSync(void);
     */
    // Entry point registration at startup
    
    static int reg_ResumeFromSync_void();
    // Entry point index lookup
    
    inline static int idx_ResumeFromSync_void() {
      static int epidx = reg_ResumeFromSync_void();
      return epidx;
    }

    
    inline static int idx_ResumeFromSync(void (TreePiece::*)(void) ) {
      return idx_ResumeFromSync_void();
    }


    
    static int ResumeFromSync(void) { return idx_ResumeFromSync_void(); }
    
    static void _call_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
     */
    // Entry point registration at startup
    
    static int reg_getParticleInfoForLB_marshall104();
    // Entry point index lookup
    
    inline static int idx_getParticleInfoForLB_marshall104() {
      static int epidx = reg_getParticleInfoForLB_marshall104();
      return epidx;
    }

    
    inline static int idx_getParticleInfoForLB(void (TreePiece::*)(const int64_t &active_part, const int64_t &total_part) ) {
      return idx_getParticleInfoForLB_marshall104();
    }


    
    static int getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part) { return idx_getParticleInfoForLB_marshall104(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_getParticleInfoForLB_marshall104();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_getParticleInfoForLB_marshall104() {
      static int epidx = reg_redn_wrapper_getParticleInfoForLB_marshall104();
      return epidx;
    }
    
    static int redn_wrapper_getParticleInfoForLB(CkReductionMsg* impl_msg) { return idx_redn_wrapper_getParticleInfoForLB_marshall104(); }
    
    static void _call_redn_wrapper_getParticleInfoForLB_marshall104(void* impl_msg, void* impl_obj_void);
    
    static void _call_getParticleInfoForLB_marshall104(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getParticleInfoForLB_marshall104(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getParticleInfoForLB_marshall104(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getParticleInfoForLB_marshall104(PUP::er &p,void *msg);
    /* DECLS: void doAtSync(void);
     */
    // Entry point registration at startup
    
    static int reg_doAtSync_void();
    // Entry point index lookup
    
    inline static int idx_doAtSync_void() {
      static int epidx = reg_doAtSync_void();
      return epidx;
    }

    
    inline static int idx_doAtSync(void (TreePiece::*)(void) ) {
      return idx_doAtSync_void();
    }


    
    static int doAtSync(void) { return idx_doAtSync_void(); }
    
    static void _call_doAtSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doAtSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_outputAccelerations_marshall106();
    // Entry point index lookup
    
    inline static int idx_outputAccelerations_marshall106() {
      static int epidx = reg_outputAccelerations_marshall106();
      return epidx;
    }

    
    inline static int idx_outputAccelerations(void (TreePiece::*)(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb) ) {
      return idx_outputAccelerations_marshall106();
    }


    
    static int outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb) { return idx_outputAccelerations_marshall106(); }
    
    static void _call_outputAccelerations_marshall106(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_outputAccelerations_marshall106(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_outputAccelerations_marshall106(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_outputAccelerations_marshall106(PUP::er &p,void *msg);
    /* DECLS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_outputASCII_marshall107();
    // Entry point index lookup
    
    inline static int idx_outputASCII_marshall107() {
      static int epidx = reg_outputASCII_marshall107();
      return epidx;
    }

    
    inline static int idx_outputASCII(void (TreePiece::*)(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb) ) {
      return idx_outputASCII_marshall107();
    }


    
    static int outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb) { return idx_outputASCII_marshall107(); }
    
    static void _call_outputASCII_marshall107(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_outputASCII_marshall107(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_outputASCII_marshall107(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_outputASCII_marshall107(PUP::er &p,void *msg);
    /* DECLS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_oneNodeOutVec_marshall108();
    // Entry point index lookup
    
    inline static int idx_oneNodeOutVec_marshall108() {
      static int epidx = reg_oneNodeOutVec_marshall108();
      return epidx;
    }

    
    inline static int idx_oneNodeOutVec(void (TreePiece::*)(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb) ) {
      return idx_oneNodeOutVec_marshall108();
    }


    
    static int oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb) { return idx_oneNodeOutVec_marshall108(); }
    
    static void _call_oneNodeOutVec_marshall108(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_oneNodeOutVec_marshall108(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_oneNodeOutVec_marshall108(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_oneNodeOutVec_marshall108(PUP::er &p,void *msg);
    /* DECLS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_oneNodeOutArr_marshall109();
    // Entry point index lookup
    
    inline static int idx_oneNodeOutArr_marshall109() {
      static int epidx = reg_oneNodeOutArr_marshall109();
      return epidx;
    }

    
    inline static int idx_oneNodeOutArr(void (TreePiece::*)(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb) ) {
      return idx_oneNodeOutArr_marshall109();
    }


    
    static int oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb) { return idx_oneNodeOutArr_marshall109(); }
    
    static void _call_oneNodeOutArr_marshall109(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_oneNodeOutArr_marshall109(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_oneNodeOutArr_marshall109(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_oneNodeOutArr_marshall109(PUP::er &p,void *msg);
    /* DECLS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
     */
    // Entry point registration at startup
    
    static int reg_outputBinary_marshall110();
    // Entry point index lookup
    
    inline static int idx_outputBinary_marshall110() {
      static int epidx = reg_outputBinary_marshall110();
      return epidx;
    }

    
    inline static int idx_outputBinary(void (TreePiece::*)(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9) ) {
      return idx_outputBinary_marshall110();
    }


    
    static int outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9) { return idx_outputBinary_marshall110(); }
    
    static void _call_outputBinary_marshall110(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_outputBinary_marshall110(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_outputBinary_marshall110(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_outputBinary_marshall110(PUP::er &p,void *msg);
    /* DECLS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_minmaxNCOut_marshall111();
    // Entry point index lookup
    
    inline static int idx_minmaxNCOut_marshall111() {
      static int epidx = reg_minmaxNCOut_marshall111();
      return epidx;
    }

    
    inline static int idx_minmaxNCOut(void (TreePiece::*)(const CkReference<OutputParams > &params, const CkCallback &cb) ) {
      return idx_minmaxNCOut_marshall111();
    }


    
    static int minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb) { return idx_minmaxNCOut_marshall111(); }
    
    static void _call_minmaxNCOut_marshall111(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_minmaxNCOut_marshall111(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_minmaxNCOut_marshall111(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_minmaxNCOut_marshall111(PUP::er &p,void *msg);
    /* DECLS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_outputBinaryStart_marshall112();
    // Entry point index lookup
    
    inline static int idx_outputBinaryStart_marshall112() {
      static int epidx = reg_outputBinaryStart_marshall112();
      return epidx;
    }

    
    inline static int idx_outputBinaryStart(void (TreePiece::*)(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb) ) {
      return idx_outputBinaryStart_marshall112();
    }


    
    static int outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb) { return idx_outputBinaryStart_marshall112(); }
    
    static void _call_outputBinaryStart_marshall112(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_outputBinaryStart_marshall112(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_outputBinaryStart_marshall112(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_outputBinaryStart_marshall112(PUP::er &p,void *msg);
    /* DECLS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_oneNodeOutIntArr_marshall113();
    // Entry point index lookup
    
    inline static int idx_oneNodeOutIntArr_marshall113() {
      static int epidx = reg_oneNodeOutIntArr_marshall113();
      return epidx;
    }

    
    inline static int idx_oneNodeOutIntArr(void (TreePiece::*)(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb) ) {
      return idx_oneNodeOutIntArr_marshall113();
    }


    
    static int oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb) { return idx_oneNodeOutIntArr_marshall113(); }
    
    static void _call_oneNodeOutIntArr_marshall113(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_oneNodeOutIntArr_marshall113(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_oneNodeOutIntArr_marshall113(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_oneNodeOutIntArr_marshall113(PUP::er &p,void *msg);
    /* DECLS: void outputStatistics(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_outputStatistics_marshall114();
    // Entry point index lookup
    
    inline static int idx_outputStatistics_marshall114() {
      static int epidx = reg_outputStatistics_marshall114();
      return epidx;
    }

    
    inline static int idx_outputStatistics(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_outputStatistics_marshall114();
    }


    
    static int outputStatistics(const CkCallback &cb) { return idx_outputStatistics_marshall114(); }
    
    static void _call_outputStatistics_marshall114(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_outputStatistics_marshall114(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_outputStatistics_marshall114(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_outputStatistics_marshall114(PUP::er &p,void *msg);
    /* DECLS: void collectStatistics(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_collectStatistics_marshall115();
    // Entry point index lookup
    
    inline static int idx_collectStatistics_marshall115() {
      static int epidx = reg_collectStatistics_marshall115();
      return epidx;
    }

    
    inline static int idx_collectStatistics(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_collectStatistics_marshall115();
    }


    
    static int collectStatistics(const CkCallback &cb) { return idx_collectStatistics_marshall115(); }
    
    static void _call_collectStatistics_marshall115(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectStatistics_marshall115(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_collectStatistics_marshall115(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_collectStatistics_marshall115(PUP::er &p,void *msg);
    /* DECLS: void continueStartRemoteChunk(int chunk);
     */
    // Entry point registration at startup
    
    static int reg_continueStartRemoteChunk_marshall116();
    // Entry point index lookup
    
    inline static int idx_continueStartRemoteChunk_marshall116() {
      static int epidx = reg_continueStartRemoteChunk_marshall116();
      return epidx;
    }

    
    inline static int idx_continueStartRemoteChunk(void (TreePiece::*)(int chunk) ) {
      return idx_continueStartRemoteChunk_marshall116();
    }


    
    static int continueStartRemoteChunk(int chunk) { return idx_continueStartRemoteChunk_marshall116(); }
    
    static void _call_continueStartRemoteChunk_marshall116(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_continueStartRemoteChunk_marshall116(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_continueStartRemoteChunk_marshall116(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_continueStartRemoteChunk_marshall116(PUP::er &p,void *msg);
    /* DECLS: void continueWrapUp(void);
     */
    // Entry point registration at startup
    
    static int reg_continueWrapUp_void();
    // Entry point index lookup
    
    inline static int idx_continueWrapUp_void() {
      static int epidx = reg_continueWrapUp_void();
      return epidx;
    }

    
    inline static int idx_continueWrapUp(void (TreePiece::*)(void) ) {
      return idx_continueWrapUp_void();
    }


    
    static int continueWrapUp(void) { return idx_continueWrapUp_void(); }
    
    static void _call_continueWrapUp_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_continueWrapUp_void(void* impl_msg, void* impl_obj);
    /* DECLS: void balanceBeforeInitialForces(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_balanceBeforeInitialForces_marshall118();
    // Entry point index lookup
    
    inline static int idx_balanceBeforeInitialForces_marshall118() {
      static int epidx = reg_balanceBeforeInitialForces_marshall118();
      return epidx;
    }

    
    inline static int idx_balanceBeforeInitialForces(void (TreePiece::*)(const CkCallback &cb) ) {
      return idx_balanceBeforeInitialForces_marshall118();
    }


    
    static int balanceBeforeInitialForces(const CkCallback &cb) { return idx_balanceBeforeInitialForces_marshall118(); }
    
    static void _call_balanceBeforeInitialForces_marshall118(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_balanceBeforeInitialForces_marshall118(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_balanceBeforeInitialForces_marshall118(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_balanceBeforeInitialForces_marshall118(PUP::er &p,void *msg);
    /* DECLS: TreePiece(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TreePiece_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TreePiece_CkMigrateMessage() {
      static int epidx = reg_TreePiece_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TreePiece_CkMigrateMessage(); }
    
    static void _call_TreePiece_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TreePiece_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_TreePiece : public CProxyElement_ArrayElement{
  public:
    typedef TreePiece local_t;
    typedef CkIndex_TreePiece index_t;
    typedef CProxy_TreePiece proxy_t;
    typedef CProxyElement_TreePiece element_t;
    typedef CProxySection_TreePiece section_t;

    CProxyElement_TreePiece(void) {}
    CProxyElement_TreePiece(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    TreePiece *ckLocal(void) const
    { return (TreePiece *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_TreePiece(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_TreePiece(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_TreePiece(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_TreePiece(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: TreePiece(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void quiescence(void);
 */
    
    void quiescence(void) ;

/* DECLS: void memCacheStats(const CkCallback &cb);
 */
    
    void memCacheStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void nextBucket(dummyMsg* impl_msg);
 */
    
    void nextBucket(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketSmooth(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketReSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketReSmooth(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketMarkSmooth(dummyMsg* impl_msg) ;

/* DECLS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
 */
    
    void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void EwaldInit(void);
 */
    
    void EwaldInit(void) ;

/* DECLS: void initCoolingData(const CkCallback &cb);
 */
    
    void initCoolingData(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void calculateEwald(dummyMsg* impl_msg);
 */
    
    void calculateEwald(dummyMsg* impl_msg) ;

/* DECLS: void EwaldGPUComplete(void);
 */
    
    void EwaldGPUComplete(void) ;

/* DECLS: void EwaldGPU(void);
 */
    
    void EwaldGPU(void) ;

/* DECLS: void velScale(double dScale, const CkCallback &cb);
 */
    
    void velScale(double dScale, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
 */
    
    void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
 */
    
    void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
 */
    
    void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
 */
    
    void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resetMetals(const CkCallback &cb);
 */
    
    void resetMetals(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getMaxIOrds(const CkCallback &cb);
 */
    
    void getMaxIOrds(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void RestartEnergy(double dTuFac, const CkCallback &cb);
 */
    
    void RestartEnergy(double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void findTotalMass(const CkCallback &cb);
 */
    
    void findTotalMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvTotalMass(CkReductionMsg* impl_msg);
 */
    
    void recvTotalMass(CkReductionMsg* impl_msg) ;

/* DECLS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
 */
    
    void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
 */
    
    void reOrder(const int64_t &nMaxOrder, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ioShuffle(CkReductionMsg* impl_msg);
 */
    
    void ioShuffle(CkReductionMsg* impl_msg) ;

/* DECLS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */
    
    void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void assignKeys(CkReductionMsg* impl_msg);
 */
    
    void assignKeys(CkReductionMsg* impl_msg) ;

/* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unshuffleParticles(CkReductionMsg* impl_msg);
 */
    
    void unshuffleParticles(CkReductionMsg* impl_msg) ;

/* DECLS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */
    
    void acceptSortedParticles(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void unshuffleParticlesWoDD(const CkCallback &cb);
 */
    
    void unshuffleParticlesWoDD(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void shuffleAfterQD(void);
 */
    
    void shuffleAfterQD(void) ;

/* DECLS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
 */
    
    void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void initORBPieces(const CkCallback &cb);
 */
    
    void initORBPieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
 */
    
    void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sendORBParticles(void);
 */
    
    void sendORBParticles(void) ;

/* DECLS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
 */
    
    void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
 */
    
    void finalizeBoundaries(ORBSplittersMsg* impl_msg) ;

/* DECLS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
 */
    
    void evaluateParticleCounts(ORBSplittersMsg* impl_msg) ;

/* DECLS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
 */
    
    void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initAccel(int iKickRung, const CkCallback &cb);
 */
    
    void initAccel(int iKickRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
 */
    
    void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
 */
    
    void truncateRung(int iCurrMaxRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void rungStats(const CkCallback &cb);
 */
    
    void rungStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void countActive(int activeRung, const CkCallback &cb);
 */
    
    void countActive(int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void assignDomain(const CkCallback &cb);
 */
    
    void assignDomain(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
 */
    
    void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void starCenterOfMass(const CkCallback &cb);
 */
    
    void starCenterOfMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void calcEnergy(const CkCallback &cb);
 */
    
    void calcEnergy(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void colNParts(const CkCallback &cb);
 */
    
    void colNParts(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
 */
    
    void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
 */
    
    void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setSoft(double dSoft, const CkCallback &cb);
 */
    
    void setSoft(double dSoft, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
 */
    
    void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
 */
    
    void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
 */
    
    void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
 */
    
    void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
 */
    
    void ballMax(int activeRung, double dFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
 */
    
    void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
 */
    
    void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
 */
    
    void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initRand(int iRand, const CkCallback &cb);
 */
    
    void initRand(int iRand, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
 */
    
    void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void flushStarLog(const CkCallback &cb);
 */
    
    void flushStarLog(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
 */
    
    void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
 */
    
    void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
 */
    
    void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCOM(const CkCallback &cb, int bLiveViz);
 */
    
    void getCOM(const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
 */
    
    void getCOMByType(int iType, const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
 */
    
    void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
 */
    
    void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) ;

/* DECLS: void setProjections(int bOn);
 */
    
    void setProjections(int bOn, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void buildTree(int bucketSize, const CkCallback &cb);
 */
    
    void buildTree(int bucketSize, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startOctTreeBuild(CkReductionMsg* impl_msg);
 */
    
    void startOctTreeBuild(CkReductionMsg* impl_msg) ;

/* DECLS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
 */
    
    void recvBoundary(const SFC::Key &key, const NborDir &dir, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvdBoundaries(CkReductionMsg* impl_msg);
 */
    
    void recvdBoundaries(CkReductionMsg* impl_msg) ;

/* DECLS: void startORBTreeBuild(CkReductionMsg* impl_msg);
 */
    
    void startORBTreeBuild(CkReductionMsg* impl_msg) ;

/* DECLS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
 */
    
    void startGravity(int activeRung, double myTheta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
 */
    
    void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
 */
    
    void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
 */
    
    void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finishNodeCache(const CkCallback &cb);
 */
    
    void finishNodeCache(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
 */
    
    void requestRemoteMoments(const Tree::NodeKey &key, int sender, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
 */
    
    void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void commenceCalculateGravityLocal(void);
 */
    
    void commenceCalculateGravityLocal(void) ;

/* DECLS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
 */
    
    void calculateGravityRemote(ComputeChunkMsg* impl_msg) ;

/* DECLS: void calculateReSmoothLocal(void);
 */
    
    void calculateReSmoothLocal(void) ;

/* DECLS: void calculateMarkSmoothLocal(void);
 */
    
    void calculateMarkSmoothLocal(void) ;

/* DECLS: void finishWalk(void);
 */
    
    void finishWalk(void) ;

/* DECLS: void finishSmoothWalk(void);
 */
    
    void finishSmoothWalk(void) ;

/* DECLS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
 */
    
    void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
 */
    
    void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) ;

/* DECLS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */
    
    void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, Tree::NodeKey &remoteBucket, int awi, void* source, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */
    
    void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, Tree::NodeKey &remoteBucket, int awi, void* source, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startlb(const CkCallback &cb, int activeRung);
 */
    
    void startlb(const CkCallback &cb, int activeRung, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
 */
    
    void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doAtSync(void);
 */
    
    void doAtSync(void) ;

/* DECLS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
 */
    
    void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
 */
    
    void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */
    
    void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */
    
    void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
 */
    
    void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
 */
    
    void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
 */
    
    void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
 */
    
    void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputStatistics(const CkCallback &cb);
 */
    
    void outputStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void collectStatistics(const CkCallback &cb);
 */
    
    void collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void continueStartRemoteChunk(int chunk);
 */
    
    void continueStartRemoteChunk(int chunk, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void continueWrapUp(void);
 */
    
    void continueWrapUp(void) ;

/* DECLS: void balanceBeforeInitialForces(const CkCallback &cb);
 */
    
    void balanceBeforeInitialForces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: TreePiece(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_TreePiece)
/* ---------------- collective proxy -------------- */
 class CProxy_TreePiece : public CProxy_ArrayElement{
  public:
    typedef TreePiece local_t;
    typedef CkIndex_TreePiece index_t;
    typedef CProxy_TreePiece proxy_t;
    typedef CProxyElement_TreePiece element_t;
    typedef CProxySection_TreePiece section_t;

    CProxy_TreePiece(void) {}
    CProxy_TreePiece(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_TreePiece operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_TreePiece(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TreePiece operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_TreePiece(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TreePiece operator [] (int idx) const 
        {return CProxyElement_TreePiece(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_TreePiece operator () (int idx) const 
        {return CProxyElement_TreePiece(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_TreePiece(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_TreePiece(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: TreePiece(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(const int s1);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb);

/* DECLS: void quiescence(void);
 */
    
    void quiescence(void) ;

/* DECLS: void memCacheStats(const CkCallback &cb);
 */
    
    void memCacheStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void nextBucket(dummyMsg* impl_msg);
 */
    
    void nextBucket(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketSmooth(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketReSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketReSmooth(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketMarkSmooth(dummyMsg* impl_msg) ;

/* DECLS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
 */
    
    void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void EwaldInit(void);
 */
    
    void EwaldInit(void) ;

/* DECLS: void initCoolingData(const CkCallback &cb);
 */
    
    void initCoolingData(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void calculateEwald(dummyMsg* impl_msg);
 */
    
    void calculateEwald(dummyMsg* impl_msg) ;

/* DECLS: void EwaldGPUComplete(void);
 */
    
    void EwaldGPUComplete(void) ;

/* DECLS: void EwaldGPU(void);
 */
    
    void EwaldGPU(void) ;

/* DECLS: void velScale(double dScale, const CkCallback &cb);
 */
    
    void velScale(double dScale, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
 */
    
    void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
 */
    
    void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
 */
    
    void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
 */
    
    void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resetMetals(const CkCallback &cb);
 */
    
    void resetMetals(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getMaxIOrds(const CkCallback &cb);
 */
    
    void getMaxIOrds(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void RestartEnergy(double dTuFac, const CkCallback &cb);
 */
    
    void RestartEnergy(double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void findTotalMass(const CkCallback &cb);
 */
    
    void findTotalMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvTotalMass(CkReductionMsg* impl_msg);
 */
    
    void recvTotalMass(CkReductionMsg* impl_msg) ;

/* DECLS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
 */
    
    void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
 */
    
    void reOrder(const int64_t &nMaxOrder, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ioShuffle(CkReductionMsg* impl_msg);
 */
    
    void ioShuffle(CkReductionMsg* impl_msg) ;

/* DECLS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */
    
    void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void assignKeys(CkReductionMsg* impl_msg);
 */
    
    void assignKeys(CkReductionMsg* impl_msg) ;

/* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unshuffleParticles(CkReductionMsg* impl_msg);
 */
    
    void unshuffleParticles(CkReductionMsg* impl_msg) ;

/* DECLS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */
    
    void acceptSortedParticles(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void unshuffleParticlesWoDD(const CkCallback &cb);
 */
    
    void unshuffleParticlesWoDD(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void shuffleAfterQD(void);
 */
    
    void shuffleAfterQD(void) ;

/* DECLS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
 */
    
    void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void initORBPieces(const CkCallback &cb);
 */
    
    void initORBPieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
 */
    
    void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sendORBParticles(void);
 */
    
    void sendORBParticles(void) ;

/* DECLS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
 */
    
    void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
 */
    
    void finalizeBoundaries(ORBSplittersMsg* impl_msg) ;

/* DECLS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
 */
    
    void evaluateParticleCounts(ORBSplittersMsg* impl_msg) ;

/* DECLS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
 */
    
    void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initAccel(int iKickRung, const CkCallback &cb);
 */
    
    void initAccel(int iKickRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
 */
    
    void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
 */
    
    void truncateRung(int iCurrMaxRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void rungStats(const CkCallback &cb);
 */
    
    void rungStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void countActive(int activeRung, const CkCallback &cb);
 */
    
    void countActive(int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void assignDomain(const CkCallback &cb);
 */
    
    void assignDomain(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
 */
    
    void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void starCenterOfMass(const CkCallback &cb);
 */
    
    void starCenterOfMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void calcEnergy(const CkCallback &cb);
 */
    
    void calcEnergy(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void colNParts(const CkCallback &cb);
 */
    
    void colNParts(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
 */
    
    void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
 */
    
    void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setSoft(double dSoft, const CkCallback &cb);
 */
    
    void setSoft(double dSoft, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
 */
    
    void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
 */
    
    void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
 */
    
    void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
 */
    
    void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
 */
    
    void ballMax(int activeRung, double dFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
 */
    
    void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
 */
    
    void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
 */
    
    void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initRand(int iRand, const CkCallback &cb);
 */
    
    void initRand(int iRand, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
 */
    
    void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void flushStarLog(const CkCallback &cb);
 */
    
    void flushStarLog(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
 */
    
    void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
 */
    
    void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
 */
    
    void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCOM(const CkCallback &cb, int bLiveViz);
 */
    
    void getCOM(const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
 */
    
    void getCOMByType(int iType, const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
 */
    
    void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
 */
    
    void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) ;

/* DECLS: void setProjections(int bOn);
 */
    
    void setProjections(int bOn, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void buildTree(int bucketSize, const CkCallback &cb);
 */
    
    void buildTree(int bucketSize, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startOctTreeBuild(CkReductionMsg* impl_msg);
 */
    
    void startOctTreeBuild(CkReductionMsg* impl_msg) ;

/* DECLS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
 */
    
    void recvBoundary(const SFC::Key &key, const NborDir &dir, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvdBoundaries(CkReductionMsg* impl_msg);
 */
    
    void recvdBoundaries(CkReductionMsg* impl_msg) ;

/* DECLS: void startORBTreeBuild(CkReductionMsg* impl_msg);
 */
    
    void startORBTreeBuild(CkReductionMsg* impl_msg) ;

/* DECLS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
 */
    
    void startGravity(int activeRung, double myTheta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
 */
    
    void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
 */
    
    void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
 */
    
    void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finishNodeCache(const CkCallback &cb);
 */
    
    void finishNodeCache(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
 */
    
    void requestRemoteMoments(const Tree::NodeKey &key, int sender, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
 */
    
    void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void commenceCalculateGravityLocal(void);
 */
    
    void commenceCalculateGravityLocal(void) ;

/* DECLS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
 */
    
    void calculateGravityRemote(ComputeChunkMsg* impl_msg) ;

/* DECLS: void calculateReSmoothLocal(void);
 */
    
    void calculateReSmoothLocal(void) ;

/* DECLS: void calculateMarkSmoothLocal(void);
 */
    
    void calculateMarkSmoothLocal(void) ;

/* DECLS: void finishWalk(void);
 */
    
    void finishWalk(void) ;

/* DECLS: void finishSmoothWalk(void);
 */
    
    void finishSmoothWalk(void) ;

/* DECLS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
 */

/* DECLS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
 */
    
    void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) ;

/* DECLS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

/* DECLS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

/* DECLS: void startlb(const CkCallback &cb, int activeRung);
 */
    
    void startlb(const CkCallback &cb, int activeRung, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
 */
    
    void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doAtSync(void);
 */
    
    void doAtSync(void) ;

/* DECLS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
 */
    
    void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
 */
    
    void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */
    
    void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */
    
    void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
 */
    
    void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
 */
    
    void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
 */
    
    void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
 */
    
    void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputStatistics(const CkCallback &cb);
 */
    
    void outputStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void collectStatistics(const CkCallback &cb);
 */
    
    void collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void continueStartRemoteChunk(int chunk);
 */
    
    void continueStartRemoteChunk(int chunk, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void continueWrapUp(void);
 */
    
    void continueWrapUp(void) ;

/* DECLS: void balanceBeforeInitialForces(const CkCallback &cb);
 */
    
    void balanceBeforeInitialForces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: TreePiece(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_TreePiece)
/* ---------------- section proxy -------------- */
 class CProxySection_TreePiece : public CProxySection_ArrayElement{
  public:
    typedef TreePiece local_t;
    typedef CkIndex_TreePiece index_t;
    typedef CProxy_TreePiece proxy_t;
    typedef CProxyElement_TreePiece element_t;
    typedef CProxySection_TreePiece section_t;

    CProxySection_TreePiece(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_TreePiece operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_TreePiece(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TreePiece operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_TreePiece(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TreePiece operator [] (int idx) const 
        {return CProxyElement_TreePiece(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_TreePiece operator () (int idx) const 
        {return CProxyElement_TreePiece(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_TreePiece(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TreePiece(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_TreePiece(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_TreePiece(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TreePiece(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: TreePiece(void);
 */
    

/* DECLS: void quiescence(void);
 */
    
    void quiescence(void) ;

/* DECLS: void memCacheStats(const CkCallback &cb);
 */
    
    void memCacheStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void nextBucket(dummyMsg* impl_msg);
 */
    
    void nextBucket(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketSmooth(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketReSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketReSmooth(dummyMsg* impl_msg) ;

/* DECLS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
 */
    
    void nextBucketMarkSmooth(dummyMsg* impl_msg) ;

/* DECLS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
 */
    
    void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void EwaldInit(void);
 */
    
    void EwaldInit(void) ;

/* DECLS: void initCoolingData(const CkCallback &cb);
 */
    
    void initCoolingData(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void calculateEwald(dummyMsg* impl_msg);
 */
    
    void calculateEwald(dummyMsg* impl_msg) ;

/* DECLS: void EwaldGPUComplete(void);
 */
    
    void EwaldGPUComplete(void) ;

/* DECLS: void EwaldGPU(void);
 */
    
    void EwaldGPU(void) ;

/* DECLS: void velScale(double dScale, const CkCallback &cb);
 */
    
    void velScale(double dScale, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
 */
    
    void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
 */
    
    void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
 */
    
    void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
 */
    
    void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void resetMetals(const CkCallback &cb);
 */
    
    void resetMetals(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getMaxIOrds(const CkCallback &cb);
 */
    
    void getMaxIOrds(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void RestartEnergy(double dTuFac, const CkCallback &cb);
 */
    
    void RestartEnergy(double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void findTotalMass(const CkCallback &cb);
 */
    
    void findTotalMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvTotalMass(CkReductionMsg* impl_msg);
 */
    
    void recvTotalMass(CkReductionMsg* impl_msg) ;

/* DECLS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
 */
    
    void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */
    
    void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
 */
    
    void reOrder(const int64_t &nMaxOrder, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ioShuffle(CkReductionMsg* impl_msg);
 */
    
    void ioShuffle(CkReductionMsg* impl_msg) ;

/* DECLS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */
    
    void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void assignKeys(CkReductionMsg* impl_msg);
 */
    
    void assignKeys(CkReductionMsg* impl_msg) ;

/* DECLS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */
    
    void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unshuffleParticles(CkReductionMsg* impl_msg);
 */
    
    void unshuffleParticles(CkReductionMsg* impl_msg) ;

/* DECLS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */
    
    void acceptSortedParticles(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void unshuffleParticlesWoDD(const CkCallback &cb);
 */
    
    void unshuffleParticlesWoDD(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void shuffleAfterQD(void);
 */
    
    void shuffleAfterQD(void) ;

/* DECLS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
 */
    
    void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) ;

/* DECLS: void initORBPieces(const CkCallback &cb);
 */
    
    void initORBPieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
 */
    
    void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sendORBParticles(void);
 */
    
    void sendORBParticles(void) ;

/* DECLS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
 */
    
    void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
 */
    
    void finalizeBoundaries(ORBSplittersMsg* impl_msg) ;

/* DECLS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
 */
    
    void evaluateParticleCounts(ORBSplittersMsg* impl_msg) ;

/* DECLS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
 */
    
    void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initAccel(int iKickRung, const CkCallback &cb);
 */
    
    void initAccel(int iKickRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
 */
    
    void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
 */
    
    void truncateRung(int iCurrMaxRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void rungStats(const CkCallback &cb);
 */
    
    void rungStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void countActive(int activeRung, const CkCallback &cb);
 */
    
    void countActive(int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void assignDomain(const CkCallback &cb);
 */
    
    void assignDomain(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
 */
    
    void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void starCenterOfMass(const CkCallback &cb);
 */
    
    void starCenterOfMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void calcEnergy(const CkCallback &cb);
 */
    
    void calcEnergy(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void colNParts(const CkCallback &cb);
 */
    
    void colNParts(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
 */
    
    void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
 */
    
    void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setSoft(double dSoft, const CkCallback &cb);
 */
    
    void setSoft(double dSoft, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
 */
    
    void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
 */
    
    void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
 */
    
    void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
 */
    
    void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
 */
    
    void ballMax(int activeRung, double dFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
 */
    
    void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
 */
    
    void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
 */
    
    void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void initRand(int iRand, const CkCallback &cb);
 */
    
    void initRand(int iRand, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
 */
    
    void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void flushStarLog(const CkCallback &cb);
 */
    
    void flushStarLog(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
 */
    
    void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
 */
    
    void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
 */
    
    void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCOM(const CkCallback &cb, int bLiveViz);
 */
    
    void getCOM(const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
 */
    
    void getCOMByType(int iType, const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
 */
    
    void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
 */
    
    void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) ;

/* DECLS: void setProjections(int bOn);
 */
    
    void setProjections(int bOn, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void buildTree(int bucketSize, const CkCallback &cb);
 */
    
    void buildTree(int bucketSize, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startOctTreeBuild(CkReductionMsg* impl_msg);
 */
    
    void startOctTreeBuild(CkReductionMsg* impl_msg) ;

/* DECLS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
 */
    
    void recvBoundary(const SFC::Key &key, const NborDir &dir, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvdBoundaries(CkReductionMsg* impl_msg);
 */
    
    void recvdBoundaries(CkReductionMsg* impl_msg) ;

/* DECLS: void startORBTreeBuild(CkReductionMsg* impl_msg);
 */
    
    void startORBTreeBuild(CkReductionMsg* impl_msg) ;

/* DECLS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
 */
    
    void startGravity(int activeRung, double myTheta, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
 */
    
    void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
 */
    
    void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
 */
    
    void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finishNodeCache(const CkCallback &cb);
 */
    
    void finishNodeCache(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
 */
    
    void requestRemoteMoments(const Tree::NodeKey &key, int sender, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
 */
    
    void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void commenceCalculateGravityLocal(void);
 */
    
    void commenceCalculateGravityLocal(void) ;

/* DECLS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
 */
    
    void calculateGravityRemote(ComputeChunkMsg* impl_msg) ;

/* DECLS: void calculateReSmoothLocal(void);
 */
    
    void calculateReSmoothLocal(void) ;

/* DECLS: void calculateMarkSmoothLocal(void);
 */
    
    void calculateMarkSmoothLocal(void) ;

/* DECLS: void finishWalk(void);
 */
    
    void finishWalk(void) ;

/* DECLS: void finishSmoothWalk(void);
 */
    
    void finishSmoothWalk(void) ;

/* DECLS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
 */

/* DECLS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */
    
    void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) ;

/* DECLS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
 */
    
    void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) ;

/* DECLS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

/* DECLS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

/* DECLS: void startlb(const CkCallback &cb, int activeRung);
 */
    
    void startlb(const CkCallback &cb, int activeRung, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
 */
    
    void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doAtSync(void);
 */
    
    void doAtSync(void) ;

/* DECLS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
 */
    
    void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
 */
    
    void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */
    
    void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */
    
    void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
 */
    
    void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
 */
    
    void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
 */
    
    void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
 */
    
    void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void outputStatistics(const CkCallback &cb);
 */
    
    void outputStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void collectStatistics(const CkCallback &cb);
 */
    
    void collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void continueStartRemoteChunk(int chunk);
 */
    
    void continueStartRemoteChunk(int chunk, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void continueWrapUp(void);
 */
    
    void continueWrapUp(void) ;

/* DECLS: void balanceBeforeInitialForces(const CkCallback &cb);
 */
    
    void balanceBeforeInitialForces(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: TreePiece(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_TreePiece)
#define TreePiece_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_TreePiece>CBase_TreePiece;

/* DECLS: array LvArray: ArrayElement{
LvArray(void);
LvArray(CkMigrateMessage* impl_msg);
};
 */
 class LvArray;
 class CkIndex_LvArray;
 class CProxy_LvArray;
 class CProxyElement_LvArray;
 class CProxySection_LvArray;
/* --------------- index object ------------------ */
class CkIndex_LvArray:public CkIndex_ArrayElement{
  public:
    typedef LvArray local_t;
    typedef CkIndex_LvArray index_t;
    typedef CProxy_LvArray proxy_t;
    typedef CProxyElement_LvArray element_t;
    typedef CProxySection_LvArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LvArray(void);
     */
    // Entry point registration at startup
    
    static int reg_LvArray_void();
    // Entry point index lookup
    
    inline static int idx_LvArray_void() {
      static int epidx = reg_LvArray_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_LvArray_void(); }
    
    static void _call_LvArray_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LvArray_void(void* impl_msg, void* impl_obj);
    /* DECLS: LvArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LvArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_LvArray_CkMigrateMessage() {
      static int epidx = reg_LvArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_LvArray_CkMigrateMessage(); }
    
    static void _call_LvArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LvArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_LvArray : public CProxyElement_ArrayElement{
  public:
    typedef LvArray local_t;
    typedef CkIndex_LvArray index_t;
    typedef CProxy_LvArray proxy_t;
    typedef CProxyElement_LvArray element_t;
    typedef CProxySection_LvArray section_t;

    CProxyElement_LvArray(void) {}
    CProxyElement_LvArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    LvArray *ckLocal(void) const
    { return (LvArray *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_LvArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_LvArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_LvArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_LvArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: LvArray(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: LvArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_LvArray)
/* ---------------- collective proxy -------------- */
 class CProxy_LvArray : public CProxy_ArrayElement{
  public:
    typedef LvArray local_t;
    typedef CkIndex_LvArray index_t;
    typedef CProxy_LvArray proxy_t;
    typedef CProxyElement_LvArray element_t;
    typedef CProxySection_LvArray section_t;

    CProxy_LvArray(void) {}
    CProxy_LvArray(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_LvArray operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_LvArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_LvArray operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_LvArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_LvArray operator [] (int idx) const 
        {return CProxyElement_LvArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_LvArray operator () (int idx) const 
        {return CProxyElement_LvArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_LvArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_LvArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: LvArray(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(const int s1);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb);

/* DECLS: LvArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_LvArray)
/* ---------------- section proxy -------------- */
 class CProxySection_LvArray : public CProxySection_ArrayElement{
  public:
    typedef LvArray local_t;
    typedef CkIndex_LvArray index_t;
    typedef CProxy_LvArray proxy_t;
    typedef CProxyElement_LvArray element_t;
    typedef CProxySection_LvArray section_t;

    CProxySection_LvArray(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_LvArray operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_LvArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_LvArray operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_LvArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_LvArray operator [] (int idx) const 
        {return CProxyElement_LvArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_LvArray operator () (int idx) const 
        {return CProxyElement_LvArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_LvArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_LvArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_LvArray(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_LvArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_LvArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: LvArray(void);
 */
    

/* DECLS: LvArray(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_LvArray)
#define LvArray_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_LvArray>CBase_LvArray;

/* DECLS: group PETreeMerger: IrrGroup{
PETreeMerger(void);
PETreeMerger(CkMigrateMessage* impl_msg);
};
 */
 class PETreeMerger;
 class CkIndex_PETreeMerger;
 class CProxy_PETreeMerger;
 class CProxyElement_PETreeMerger;
 class CProxySection_PETreeMerger;
/* --------------- index object ------------------ */
class CkIndex_PETreeMerger:public CkIndex_IrrGroup{
  public:
    typedef PETreeMerger local_t;
    typedef CkIndex_PETreeMerger index_t;
    typedef CProxy_PETreeMerger proxy_t;
    typedef CProxyElement_PETreeMerger element_t;
    typedef CProxySection_PETreeMerger section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PETreeMerger(void);
     */
    // Entry point registration at startup
    
    static int reg_PETreeMerger_void();
    // Entry point index lookup
    
    inline static int idx_PETreeMerger_void() {
      static int epidx = reg_PETreeMerger_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_PETreeMerger_void(); }
    
    static void _call_PETreeMerger_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PETreeMerger_void(void* impl_msg, void* impl_obj);
    /* DECLS: PETreeMerger(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PETreeMerger_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PETreeMerger_CkMigrateMessage() {
      static int epidx = reg_PETreeMerger_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PETreeMerger_CkMigrateMessage(); }
    
    static void _call_PETreeMerger_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PETreeMerger_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PETreeMerger: public CProxyElement_IrrGroup{
  public:
    typedef PETreeMerger local_t;
    typedef CkIndex_PETreeMerger index_t;
    typedef CProxy_PETreeMerger proxy_t;
    typedef CProxyElement_PETreeMerger element_t;
    typedef CProxySection_PETreeMerger section_t;

    CProxyElement_PETreeMerger(void) {}
    CProxyElement_PETreeMerger(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_PETreeMerger(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_PETreeMerger(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    PETreeMerger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PETreeMerger* ckLocalBranch(CkGroupID gID) {
      return (PETreeMerger*)CkLocalBranch(gID);
    }
/* DECLS: PETreeMerger(void);
 */
    

/* DECLS: PETreeMerger(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_PETreeMerger)
/* ---------------- collective proxy -------------- */
class CProxy_PETreeMerger: public CProxy_IrrGroup{
  public:
    typedef PETreeMerger local_t;
    typedef CkIndex_PETreeMerger index_t;
    typedef CProxy_PETreeMerger proxy_t;
    typedef CProxyElement_PETreeMerger element_t;
    typedef CProxySection_PETreeMerger section_t;

    CProxy_PETreeMerger(void) {}
    CProxy_PETreeMerger(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_PETreeMerger(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PETreeMerger(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_PETreeMerger operator[](int onPE) const
      {return CProxyElement_PETreeMerger(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    PETreeMerger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PETreeMerger* ckLocalBranch(CkGroupID gID) {
      return (PETreeMerger*)CkLocalBranch(gID);
    }
/* DECLS: PETreeMerger(void);
 */
    
    static CkGroupID ckNew(void);

/* DECLS: PETreeMerger(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_PETreeMerger)
/* ---------------- section proxy -------------- */
class CProxySection_PETreeMerger: public CProxySection_IrrGroup{
  public:
    typedef PETreeMerger local_t;
    typedef CkIndex_PETreeMerger index_t;
    typedef CProxy_PETreeMerger proxy_t;
    typedef CProxyElement_PETreeMerger element_t;
    typedef CProxySection_PETreeMerger section_t;

    CProxySection_PETreeMerger(void) {}
    CProxySection_PETreeMerger(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_PETreeMerger(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PETreeMerger(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_PETreeMerger(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_PETreeMerger(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    PETreeMerger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PETreeMerger* ckLocalBranch(CkGroupID gID) {
      return (PETreeMerger*)CkLocalBranch(gID);
    }
/* DECLS: PETreeMerger(void);
 */
    

/* DECLS: PETreeMerger(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_PETreeMerger)
#define PETreeMerger_SDAG_CODE 
typedef CBaseT1<Group, CProxy_PETreeMerger>CBase_PETreeMerger;

/* DECLS: group DumpFrameData: IrrGroup{
DumpFrameData(void);
void clearFrame(const InDumpFrame &in, const CkCallback &cb);
void combineFrame(const InDumpFrame &in, const CkCallback &cb);
DumpFrameData(CkMigrateMessage* impl_msg);
};
 */
 class DumpFrameData;
 class CkIndex_DumpFrameData;
 class CProxy_DumpFrameData;
 class CProxyElement_DumpFrameData;
 class CProxySection_DumpFrameData;
/* --------------- index object ------------------ */
class CkIndex_DumpFrameData:public CkIndex_IrrGroup{
  public:
    typedef DumpFrameData local_t;
    typedef CkIndex_DumpFrameData index_t;
    typedef CProxy_DumpFrameData proxy_t;
    typedef CProxyElement_DumpFrameData element_t;
    typedef CProxySection_DumpFrameData section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: DumpFrameData(void);
     */
    // Entry point registration at startup
    
    static int reg_DumpFrameData_void();
    // Entry point index lookup
    
    inline static int idx_DumpFrameData_void() {
      static int epidx = reg_DumpFrameData_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_DumpFrameData_void(); }
    
    static void _call_DumpFrameData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DumpFrameData_void(void* impl_msg, void* impl_obj);
    /* DECLS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_clearFrame_marshall2();
    // Entry point index lookup
    
    inline static int idx_clearFrame_marshall2() {
      static int epidx = reg_clearFrame_marshall2();
      return epidx;
    }

    
    inline static int idx_clearFrame(void (DumpFrameData::*)(const InDumpFrame &in, const CkCallback &cb) ) {
      return idx_clearFrame_marshall2();
    }


    
    static int clearFrame(const InDumpFrame &in, const CkCallback &cb) { return idx_clearFrame_marshall2(); }
    
    static void _call_clearFrame_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_clearFrame_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_clearFrame_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_clearFrame_marshall2(PUP::er &p,void *msg);
    /* DECLS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_combineFrame_marshall3();
    // Entry point index lookup
    
    inline static int idx_combineFrame_marshall3() {
      static int epidx = reg_combineFrame_marshall3();
      return epidx;
    }

    
    inline static int idx_combineFrame(void (DumpFrameData::*)(const InDumpFrame &in, const CkCallback &cb) ) {
      return idx_combineFrame_marshall3();
    }


    
    static int combineFrame(const InDumpFrame &in, const CkCallback &cb) { return idx_combineFrame_marshall3(); }
    
    static void _call_combineFrame_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_combineFrame_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_combineFrame_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_combineFrame_marshall3(PUP::er &p,void *msg);
    /* DECLS: DumpFrameData(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_DumpFrameData_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_DumpFrameData_CkMigrateMessage() {
      static int epidx = reg_DumpFrameData_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_DumpFrameData_CkMigrateMessage(); }
    
    static void _call_DumpFrameData_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DumpFrameData_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_DumpFrameData: public CProxyElement_IrrGroup{
  public:
    typedef DumpFrameData local_t;
    typedef CkIndex_DumpFrameData index_t;
    typedef CProxy_DumpFrameData proxy_t;
    typedef CProxyElement_DumpFrameData element_t;
    typedef CProxySection_DumpFrameData section_t;

    CProxyElement_DumpFrameData(void) {}
    CProxyElement_DumpFrameData(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_DumpFrameData(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_DumpFrameData(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    DumpFrameData* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DumpFrameData* ckLocalBranch(CkGroupID gID) {
      return (DumpFrameData*)CkLocalBranch(gID);
    }
/* DECLS: DumpFrameData(void);
 */
    

/* DECLS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
 */
    
    void clearFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
 */
    
    void combineFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DumpFrameData(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_DumpFrameData)
/* ---------------- collective proxy -------------- */
class CProxy_DumpFrameData: public CProxy_IrrGroup{
  public:
    typedef DumpFrameData local_t;
    typedef CkIndex_DumpFrameData index_t;
    typedef CProxy_DumpFrameData proxy_t;
    typedef CProxyElement_DumpFrameData element_t;
    typedef CProxySection_DumpFrameData section_t;

    CProxy_DumpFrameData(void) {}
    CProxy_DumpFrameData(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_DumpFrameData(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_DumpFrameData(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_DumpFrameData operator[](int onPE) const
      {return CProxyElement_DumpFrameData(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    DumpFrameData* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DumpFrameData* ckLocalBranch(CkGroupID gID) {
      return (DumpFrameData*)CkLocalBranch(gID);
    }
/* DECLS: DumpFrameData(void);
 */
    
    static CkGroupID ckNew(void);

/* DECLS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
 */
    
    void clearFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void clearFrame(const InDumpFrame &in, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void clearFrame(const InDumpFrame &in, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
 */
    
    void combineFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void combineFrame(const InDumpFrame &in, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void combineFrame(const InDumpFrame &in, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DumpFrameData(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_DumpFrameData)
/* ---------------- section proxy -------------- */
class CProxySection_DumpFrameData: public CProxySection_IrrGroup{
  public:
    typedef DumpFrameData local_t;
    typedef CkIndex_DumpFrameData index_t;
    typedef CProxy_DumpFrameData proxy_t;
    typedef CProxyElement_DumpFrameData element_t;
    typedef CProxySection_DumpFrameData section_t;

    CProxySection_DumpFrameData(void) {}
    CProxySection_DumpFrameData(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_DumpFrameData(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_DumpFrameData(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_DumpFrameData(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_DumpFrameData(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    DumpFrameData* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DumpFrameData* ckLocalBranch(CkGroupID gID) {
      return (DumpFrameData*)CkLocalBranch(gID);
    }
/* DECLS: DumpFrameData(void);
 */
    

/* DECLS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
 */
    
    void clearFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
 */
    
    void combineFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: DumpFrameData(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_DumpFrameData)
#define DumpFrameData_SDAG_CODE 
typedef CBaseT1<Group, CProxy_DumpFrameData>CBase_DumpFrameData;

/* DECLS: group IntraNodeLBManager: IrrGroup{
IntraNodeLBManager(int dummy, const CkGroupID &gid);
void registerTP(void);
void finishedTPWork(void);
IntraNodeLBManager(CkMigrateMessage* impl_msg);
};
 */
 class IntraNodeLBManager;
 class CkIndex_IntraNodeLBManager;
 class CProxy_IntraNodeLBManager;
 class CProxyElement_IntraNodeLBManager;
 class CProxySection_IntraNodeLBManager;
/* --------------- index object ------------------ */
class CkIndex_IntraNodeLBManager:public CkIndex_IrrGroup{
  public:
    typedef IntraNodeLBManager local_t;
    typedef CkIndex_IntraNodeLBManager index_t;
    typedef CProxy_IntraNodeLBManager proxy_t;
    typedef CProxyElement_IntraNodeLBManager element_t;
    typedef CProxySection_IntraNodeLBManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
     */
    // Entry point registration at startup
    
    static int reg_IntraNodeLBManager_marshall1();
    // Entry point index lookup
    
    inline static int idx_IntraNodeLBManager_marshall1() {
      static int epidx = reg_IntraNodeLBManager_marshall1();
      return epidx;
    }

    
    static int ckNew(int dummy, const CkGroupID &gid) { return idx_IntraNodeLBManager_marshall1(); }
    
    static void _call_IntraNodeLBManager_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_IntraNodeLBManager_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_IntraNodeLBManager_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_IntraNodeLBManager_marshall1(PUP::er &p,void *msg);
    /* DECLS: void registerTP(void);
     */
    // Entry point registration at startup
    
    static int reg_registerTP_void();
    // Entry point index lookup
    
    inline static int idx_registerTP_void() {
      static int epidx = reg_registerTP_void();
      return epidx;
    }

    
    inline static int idx_registerTP(void (IntraNodeLBManager::*)(void) ) {
      return idx_registerTP_void();
    }


    
    static int registerTP(void) { return idx_registerTP_void(); }
    
    static void _call_registerTP_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registerTP_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finishedTPWork(void);
     */
    // Entry point registration at startup
    
    static int reg_finishedTPWork_void();
    // Entry point index lookup
    
    inline static int idx_finishedTPWork_void() {
      static int epidx = reg_finishedTPWork_void();
      return epidx;
    }

    
    inline static int idx_finishedTPWork(void (IntraNodeLBManager::*)(void) ) {
      return idx_finishedTPWork_void();
    }


    
    static int finishedTPWork(void) { return idx_finishedTPWork_void(); }
    
    static void _call_finishedTPWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedTPWork_void(void* impl_msg, void* impl_obj);
    /* DECLS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_IntraNodeLBManager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_IntraNodeLBManager_CkMigrateMessage() {
      static int epidx = reg_IntraNodeLBManager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_IntraNodeLBManager_CkMigrateMessage(); }
    
    static void _call_IntraNodeLBManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_IntraNodeLBManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_IntraNodeLBManager: public CProxyElement_IrrGroup{
  public:
    typedef IntraNodeLBManager local_t;
    typedef CkIndex_IntraNodeLBManager index_t;
    typedef CProxy_IntraNodeLBManager proxy_t;
    typedef CProxyElement_IntraNodeLBManager element_t;
    typedef CProxySection_IntraNodeLBManager section_t;

    CProxyElement_IntraNodeLBManager(void) {}
    CProxyElement_IntraNodeLBManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_IntraNodeLBManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_IntraNodeLBManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    IntraNodeLBManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static IntraNodeLBManager* ckLocalBranch(CkGroupID gID) {
      return (IntraNodeLBManager*)CkLocalBranch(gID);
    }
/* DECLS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
 */
    

/* DECLS: void registerTP(void);
 */
    
    void registerTP(void);

/* DECLS: void finishedTPWork(void);
 */
    
    void finishedTPWork(void);

/* DECLS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_IntraNodeLBManager)
/* ---------------- collective proxy -------------- */
class CProxy_IntraNodeLBManager: public CProxy_IrrGroup{
  public:
    typedef IntraNodeLBManager local_t;
    typedef CkIndex_IntraNodeLBManager index_t;
    typedef CProxy_IntraNodeLBManager proxy_t;
    typedef CProxyElement_IntraNodeLBManager element_t;
    typedef CProxySection_IntraNodeLBManager section_t;

    CProxy_IntraNodeLBManager(void) {}
    CProxy_IntraNodeLBManager(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_IntraNodeLBManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_IntraNodeLBManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_IntraNodeLBManager operator[](int onPE) const
      {return CProxyElement_IntraNodeLBManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    IntraNodeLBManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static IntraNodeLBManager* ckLocalBranch(CkGroupID gID) {
      return (IntraNodeLBManager*)CkLocalBranch(gID);
    }
/* DECLS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
 */
    
    static CkGroupID ckNew(int dummy, const CkGroupID &gid, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_IntraNodeLBManager(int dummy, const CkGroupID &gid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerTP(void);
 */

/* DECLS: void finishedTPWork(void);
 */

/* DECLS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_IntraNodeLBManager)
/* ---------------- section proxy -------------- */
class CProxySection_IntraNodeLBManager: public CProxySection_IrrGroup{
  public:
    typedef IntraNodeLBManager local_t;
    typedef CkIndex_IntraNodeLBManager index_t;
    typedef CProxy_IntraNodeLBManager proxy_t;
    typedef CProxyElement_IntraNodeLBManager element_t;
    typedef CProxySection_IntraNodeLBManager section_t;

    CProxySection_IntraNodeLBManager(void) {}
    CProxySection_IntraNodeLBManager(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_IntraNodeLBManager(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_IntraNodeLBManager(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_IntraNodeLBManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_IntraNodeLBManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    IntraNodeLBManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static IntraNodeLBManager* ckLocalBranch(CkGroupID gID) {
      return (IntraNodeLBManager*)CkLocalBranch(gID);
    }
/* DECLS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
 */
    

/* DECLS: void registerTP(void);
 */

/* DECLS: void finishedTPWork(void);
 */

/* DECLS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_IntraNodeLBManager)
#define IntraNodeLBManager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_IntraNodeLBManager>CBase_IntraNodeLBManager;

















































































































/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct setupICs_2_closure;


    struct initialForces_3_closure;


    struct doSimulation_4_closure;







    struct niceExit_10_closure;



};

/* ---------------- method closures -------------- */
class Closure_ProjectionsControl {
  public:


    struct on_2_closure;


    struct off_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_ReductionHelper {
  public:


    struct countTreePieces_2_closure;


    struct evaluateBoundaries_3_closure;


    struct evaluateBoundaries_4_closure;


};

/* ---------------- method closures -------------- */
class Closure_Sorter {
  public:


    struct startSorting_2_closure;







};

/* ---------------- method closures -------------- */
class Closure_DataManager {
  public:


    struct acceptResponsibleIndex_2_closure;


    struct acceptFinalKeys_3_closure;



    struct clearInstrument_5_closure;


    struct initCooling_6_closure;


    struct dmCoolTableRead_7_closure;


    struct CoolingSetTime_8_closure;


    struct SetStarCM_9_closure;


    struct memoryStats_10_closure;


    struct resetReadOnly_11_closure;


    struct initStarLog_12_closure;


};

/* ---------------- method closures -------------- */
class Closure_TreePiece {
  public:


    struct quiescence_2_closure;


    struct memCacheStats_3_closure;






    struct setPeriodic_8_closure;


    struct EwaldInit_9_closure;


    struct initCoolingData_10_closure;



    struct EwaldGPUComplete_12_closure;


    struct EwaldGPU_13_closure;


    struct velScale_14_closure;


    struct loadNChilada_15_closure;


    struct readFloatBinary_16_closure;


    struct loadTipsy_17_closure;


    struct readTipsyArray_18_closure;


    struct resetMetals_19_closure;


    struct getMaxIOrds_20_closure;


    struct RestartEnergy_21_closure;


    struct findTotalMass_22_closure;



    struct setupWrite_24_closure;


    struct parallelWrite_25_closure;


    struct serialWrite_26_closure;


    struct oneNodeWrite_27_closure;


    struct reOrder_28_closure;





    struct evaluateBoundaries_32_closure;




    struct unshuffleParticlesWoDD_35_closure;


    struct shuffleAfterQD_36_closure;



    struct initORBPieces_38_closure;


    struct initBeforeORBSend_39_closure;


    struct sendORBParticles_40_closure;


    struct acceptORBParticles_41_closure;




    struct kick_44_closure;


    struct initAccel_45_closure;


    struct adjust_46_closure;


    struct truncateRung_47_closure;


    struct rungStats_48_closure;


    struct countActive_49_closure;


    struct assignDomain_50_closure;


    struct drift_51_closure;


    struct starCenterOfMass_52_closure;


    struct calcEnergy_53_closure;


    struct colNParts_54_closure;


    struct newOrder_55_closure;


    struct setNParts_56_closure;


    struct setSoft_57_closure;


    struct physicalSoft_58_closure;


    struct growMass_59_closure;


    struct InitEnergy_60_closure;


    struct updateuDot_61_closure;


    struct ballMax_62_closure;


    struct sphViscosityLimiter_63_closure;


    struct getAdiabaticGasPressure_64_closure;


    struct getCoolingGasPressure_65_closure;


    struct initRand_66_closure;


    struct FormStars_67_closure;


    struct flushStarLog_68_closure;


    struct Feedback_69_closure;


    struct massMetalsEnergyCheck_70_closure;


    struct setTypeFromFile_71_closure;


    struct getCOM_72_closure;


    struct getCOMByType_73_closure;


    struct DumpFrame_74_closure;



    struct setProjections_76_closure;


    struct buildTree_77_closure;



    struct recvBoundary_79_closure;




    struct startGravity_82_closure;


    struct startSmooth_83_closure;


    struct startReSmooth_84_closure;


    struct startMarkSmooth_85_closure;


    struct finishNodeCache_86_closure;


    struct requestRemoteMoments_87_closure;


    struct receiveRemoteMoments_88_closure;


    struct commenceCalculateGravityLocal_89_closure;



    struct calculateReSmoothLocal_91_closure;


    struct calculateMarkSmoothLocal_92_closure;


    struct finishWalk_93_closure;


    struct finishSmoothWalk_94_closure;









    struct startlb_102_closure;


    struct ResumeFromSync_103_closure;


    struct getParticleInfoForLB_104_closure;


    struct doAtSync_105_closure;


    struct outputAccelerations_106_closure;


    struct outputASCII_107_closure;


    struct oneNodeOutVec_108_closure;


    struct oneNodeOutArr_109_closure;


    struct outputBinary_110_closure;


    struct minmaxNCOut_111_closure;


    struct outputBinaryStart_112_closure;


    struct oneNodeOutIntArr_113_closure;


    struct outputStatistics_114_closure;


    struct collectStatistics_115_closure;


    struct continueStartRemoteChunk_116_closure;


    struct continueWrapUp_117_closure;


    struct balanceBeforeInitialForces_118_closure;


};

/* ---------------- method closures -------------- */
class Closure_LvArray {
  public:


};

/* ---------------- method closures -------------- */
class Closure_PETreeMerger {
  public:


};

/* ---------------- method closures -------------- */
class Closure_DumpFrameData {
  public:


    struct clearFrame_2_closure;


    struct combineFrame_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_IntraNodeLBManager {
  public:




};


extern void _registerParallelGravity(void);
extern "C" void CkRegisterMainModule(void);
#endif
