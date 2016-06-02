

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group MultistepLB: CentralLB{
void MultistepLB(const CkLBOptions &impl_noname_0);
MultistepLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MultistepLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MultistepLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepLB(const CkLBOptions &impl_noname_0);
 */

CkGroupID CProxy_MultistepLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  return CkCreateGroup(CkIndex_MultistepLB::__idx, CkIndex_MultistepLB::idx_MultistepLB_marshall1(), impl_msg);
}

  CProxy_MultistepLB::CProxy_MultistepLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_MultistepLB::__idx, CkIndex_MultistepLB::idx_MultistepLB_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_MultistepLB::reg_MultistepLB_marshall1() {
  int epidx = CkRegisterEp("MultistepLB(const CkLBOptions &impl_noname_0)",
      _call_MultistepLB_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MultistepLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MultistepLB_marshall1);

  return epidx;
}


void CkIndex_MultistepLB::_call_MultistepLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  MultistepLB* impl_obj = static_cast<MultistepLB *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MultistepLB(impl_noname_0);
}

int CkIndex_MultistepLB::_callmarshall_MultistepLB_marshall1(char* impl_buf, void* impl_obj_void) {
  MultistepLB* impl_obj = static_cast< MultistepLB *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MultistepLB(impl_noname_0);
  return implP.size();
}

void CkIndex_MultistepLB::_marshallmessagepup_MultistepLB_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: MultistepLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_MultistepLB::reg_MultistepLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("MultistepLB(CkMigrateMessage* impl_msg)",
      _call_MultistepLB_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_MultistepLB::_call_MultistepLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  MultistepLB* impl_obj = static_cast<MultistepLB *>(impl_obj_void);
  new (impl_obj) MultistepLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MultistepLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MultistepLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,MultistepLB::isIrreducible());
  // REG: void MultistepLB(const CkLBOptions &impl_noname_0);
  idx_MultistepLB_marshall1();

  // REG: MultistepLB(CkMigrateMessage* impl_msg);
  idx_MultistepLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MultistepLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerMultistepLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCentralLB();

  _registerInitCall(lbinit,1);

/* REG: group MultistepLB: CentralLB{
void MultistepLB(const CkLBOptions &impl_noname_0);
MultistepLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MultistepLB::__register("MultistepLB", sizeof(MultistepLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MultistepLB::virtual_pup(PUP::er &p) {
    recursive_pup<MultistepLB >(dynamic_cast<MultistepLB* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
