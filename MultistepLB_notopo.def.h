

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group MultistepLB_notopo: CentralLB{
void MultistepLB_notopo(const CkLBOptions &impl_noname_0);
MultistepLB_notopo(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MultistepLB_notopo::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepLB_notopo(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MultistepLB_notopo(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepLB_notopo(const CkLBOptions &impl_noname_0);
 */

CkGroupID CProxy_MultistepLB_notopo::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  return CkCreateGroup(CkIndex_MultistepLB_notopo::__idx, CkIndex_MultistepLB_notopo::idx_MultistepLB_notopo_marshall1(), impl_msg);
}

  CProxy_MultistepLB_notopo::CProxy_MultistepLB_notopo(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_MultistepLB_notopo::__idx, CkIndex_MultistepLB_notopo::idx_MultistepLB_notopo_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_MultistepLB_notopo::reg_MultistepLB_notopo_marshall1() {
  int epidx = CkRegisterEp("MultistepLB_notopo(const CkLBOptions &impl_noname_0)",
      _call_MultistepLB_notopo_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MultistepLB_notopo_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MultistepLB_notopo_marshall1);

  return epidx;
}


void CkIndex_MultistepLB_notopo::_call_MultistepLB_notopo_marshall1(void* impl_msg, void* impl_obj_void)
{
  MultistepLB_notopo* impl_obj = static_cast<MultistepLB_notopo *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MultistepLB_notopo(impl_noname_0);
}

int CkIndex_MultistepLB_notopo::_callmarshall_MultistepLB_notopo_marshall1(char* impl_buf, void* impl_obj_void) {
  MultistepLB_notopo* impl_obj = static_cast< MultistepLB_notopo *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MultistepLB_notopo(impl_noname_0);
  return implP.size();
}

void CkIndex_MultistepLB_notopo::_marshallmessagepup_MultistepLB_notopo_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: MultistepLB_notopo(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_MultistepLB_notopo::reg_MultistepLB_notopo_CkMigrateMessage() {
  int epidx = CkRegisterEp("MultistepLB_notopo(CkMigrateMessage* impl_msg)",
      _call_MultistepLB_notopo_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_MultistepLB_notopo::_call_MultistepLB_notopo_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  MultistepLB_notopo* impl_obj = static_cast<MultistepLB_notopo *>(impl_obj_void);
  new (impl_obj) MultistepLB_notopo((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void MultistepLB_notopo(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MultistepLB_notopo(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MultistepLB_notopo::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,MultistepLB_notopo::isIrreducible());
  // REG: void MultistepLB_notopo(const CkLBOptions &impl_noname_0);
  idx_MultistepLB_notopo_marshall1();

  // REG: MultistepLB_notopo(CkMigrateMessage* impl_msg);
  idx_MultistepLB_notopo_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MultistepLB_notopo_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerMultistepLB_notopo(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCentralLB();

  _registerInitCall(lbinit,1);

/* REG: group MultistepLB_notopo: CentralLB{
void MultistepLB_notopo(const CkLBOptions &impl_noname_0);
MultistepLB_notopo(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MultistepLB_notopo::__register("MultistepLB_notopo", sizeof(MultistepLB_notopo));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MultistepLB_notopo::virtual_pup(PUP::er &p) {
    recursive_pup<MultistepLB_notopo >(dynamic_cast<MultistepLB_notopo* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
