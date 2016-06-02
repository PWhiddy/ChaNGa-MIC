


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */





/* DEFS: group HierarchOrbLB: HybridBaseLB{
void HierarchOrbLB(const CkLBOptions &impl_noname_0);
HierarchOrbLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_HierarchOrbLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HierarchOrbLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
 */

CkGroupID CProxy_HierarchOrbLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  return CkCreateGroup(CkIndex_HierarchOrbLB::__idx, CkIndex_HierarchOrbLB::idx_HierarchOrbLB_marshall1(), impl_msg);
}

  CProxy_HierarchOrbLB::CProxy_HierarchOrbLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkLBOptions &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateGroup(CkIndex_HierarchOrbLB::__idx, CkIndex_HierarchOrbLB::idx_HierarchOrbLB_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_HierarchOrbLB::reg_HierarchOrbLB_marshall1() {
  int epidx = CkRegisterEp("HierarchOrbLB(const CkLBOptions &impl_noname_0)",
      _call_HierarchOrbLB_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_HierarchOrbLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_HierarchOrbLB_marshall1);

  return epidx;
}


void CkIndex_HierarchOrbLB::_call_HierarchOrbLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  HierarchOrbLB* impl_obj = static_cast<HierarchOrbLB *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) HierarchOrbLB(impl_noname_0);
}

int CkIndex_HierarchOrbLB::_callmarshall_HierarchOrbLB_marshall1(char* impl_buf, void* impl_obj_void) {
  HierarchOrbLB* impl_obj = static_cast< HierarchOrbLB *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) HierarchOrbLB(impl_noname_0);
  return implP.size();
}

void CkIndex_HierarchOrbLB::_marshallmessagepup_HierarchOrbLB_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HierarchOrbLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_HierarchOrbLB::reg_HierarchOrbLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("HierarchOrbLB(CkMigrateMessage* impl_msg)",
      _call_HierarchOrbLB_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_HierarchOrbLB::_call_HierarchOrbLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  HierarchOrbLB* impl_obj = static_cast<HierarchOrbLB *>(impl_obj_void);
  new (impl_obj) HierarchOrbLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HierarchOrbLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_HierarchOrbLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_HybridBaseLB::__idx);
   CkRegisterGroupIrr(__idx,HierarchOrbLB::isIrreducible());
  // REG: void HierarchOrbLB(const CkLBOptions &impl_noname_0);
  idx_HierarchOrbLB_marshall1();

  // REG: HierarchOrbLB(CkMigrateMessage* impl_msg);
  idx_HierarchOrbLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_HierarchOrbLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerHierarchOrbLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerLBDatabase();

  _registerHybridBaseLB();

  _registerInitCall(lbinit,1);

/* REG: group HierarchOrbLB: HybridBaseLB{
void HierarchOrbLB(const CkLBOptions &impl_noname_0);
HierarchOrbLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_HierarchOrbLB::__register("HierarchOrbLB", sizeof(HierarchOrbLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_HierarchOrbLB::virtual_pup(PUP::er &p) {
    recursive_pup<HierarchOrbLB >(dynamic_cast<HierarchOrbLB* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
