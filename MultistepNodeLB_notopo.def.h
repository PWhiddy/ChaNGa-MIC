

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group MultistepNodeLB_notopo: CentralLB{
void MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0);
MultistepNodeLB_notopo(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MultistepNodeLB_notopo::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MultistepNodeLB_notopo(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0);
 */

CkGroupID CProxy_MultistepNodeLB_notopo::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  return CkCreateGroup(CkIndex_MultistepNodeLB_notopo::__idx, CkIndex_MultistepNodeLB_notopo::idx_MultistepNodeLB_notopo_marshall1(), impl_msg);
}

  CProxy_MultistepNodeLB_notopo::CProxy_MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_MultistepNodeLB_notopo::__idx, CkIndex_MultistepNodeLB_notopo::idx_MultistepNodeLB_notopo_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_MultistepNodeLB_notopo::reg_MultistepNodeLB_notopo_marshall1() {
  int epidx = CkRegisterEp("MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0)",
      _call_MultistepNodeLB_notopo_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MultistepNodeLB_notopo_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MultistepNodeLB_notopo_marshall1);

  return epidx;
}


void CkIndex_MultistepNodeLB_notopo::_call_MultistepNodeLB_notopo_marshall1(void* impl_msg, void* impl_obj_void)
{
  MultistepNodeLB_notopo* impl_obj = static_cast<MultistepNodeLB_notopo *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MultistepNodeLB_notopo(impl_noname_0);
}

int CkIndex_MultistepNodeLB_notopo::_callmarshall_MultistepNodeLB_notopo_marshall1(char* impl_buf, void* impl_obj_void) {
  MultistepNodeLB_notopo* impl_obj = static_cast< MultistepNodeLB_notopo *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MultistepNodeLB_notopo(impl_noname_0);
  return implP.size();
}

void CkIndex_MultistepNodeLB_notopo::_marshallmessagepup_MultistepNodeLB_notopo_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: MultistepNodeLB_notopo(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_MultistepNodeLB_notopo::reg_MultistepNodeLB_notopo_CkMigrateMessage() {
  int epidx = CkRegisterEp("MultistepNodeLB_notopo(CkMigrateMessage* impl_msg)",
      _call_MultistepNodeLB_notopo_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_MultistepNodeLB_notopo::_call_MultistepNodeLB_notopo_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  MultistepNodeLB_notopo* impl_obj = static_cast<MultistepNodeLB_notopo *>(impl_obj_void);
  new (impl_obj) MultistepNodeLB_notopo((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MultistepNodeLB_notopo(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MultistepNodeLB_notopo::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,MultistepNodeLB_notopo::isIrreducible());
  // REG: void MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0);
  idx_MultistepNodeLB_notopo_marshall1();

  // REG: MultistepNodeLB_notopo(CkMigrateMessage* impl_msg);
  idx_MultistepNodeLB_notopo_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MultistepNodeLB_notopo_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerMultistepNodeLB_notopo(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCentralLB();

  _registerInitCall(lbinit,1);

/* REG: group MultistepNodeLB_notopo: CentralLB{
void MultistepNodeLB_notopo(const CkLBOptions &impl_noname_0);
MultistepNodeLB_notopo(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MultistepNodeLB_notopo::__register("MultistepNodeLB_notopo", sizeof(MultistepNodeLB_notopo));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MultistepNodeLB_notopo::virtual_pup(PUP::er &p) {
    recursive_pup<MultistepNodeLB_notopo >(dynamic_cast<MultistepNodeLB_notopo* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
