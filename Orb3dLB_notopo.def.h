

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group Orb3dLB_notopo: CentralLB{
void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
Orb3dLB_notopo(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Orb3dLB_notopo::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
 */

CkGroupID CProxy_Orb3dLB_notopo::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  return CkCreateGroup(CkIndex_Orb3dLB_notopo::__idx, CkIndex_Orb3dLB_notopo::idx_Orb3dLB_notopo_marshall1(), impl_msg);
}

  CProxy_Orb3dLB_notopo::CProxy_Orb3dLB_notopo(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_Orb3dLB_notopo::__idx, CkIndex_Orb3dLB_notopo::idx_Orb3dLB_notopo_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_Orb3dLB_notopo::reg_Orb3dLB_notopo_marshall1() {
  int epidx = CkRegisterEp("Orb3dLB_notopo(const CkLBOptions &impl_noname_0)",
      _call_Orb3dLB_notopo_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Orb3dLB_notopo_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Orb3dLB_notopo_marshall1);

  return epidx;
}


void CkIndex_Orb3dLB_notopo::_call_Orb3dLB_notopo_marshall1(void* impl_msg, void* impl_obj_void)
{
  Orb3dLB_notopo* impl_obj = static_cast<Orb3dLB_notopo *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) Orb3dLB_notopo(impl_noname_0);
}

int CkIndex_Orb3dLB_notopo::_callmarshall_Orb3dLB_notopo_marshall1(char* impl_buf, void* impl_obj_void) {
  Orb3dLB_notopo* impl_obj = static_cast< Orb3dLB_notopo *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkLBOptions impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) Orb3dLB_notopo(impl_noname_0);
  return implP.size();
}

void CkIndex_Orb3dLB_notopo::_marshallmessagepup_Orb3dLB_notopo_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Orb3dLB_notopo::reg_Orb3dLB_notopo_CkMigrateMessage() {
  int epidx = CkRegisterEp("Orb3dLB_notopo(CkMigrateMessage* impl_msg)",
      _call_Orb3dLB_notopo_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Orb3dLB_notopo::_call_Orb3dLB_notopo_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Orb3dLB_notopo* impl_obj = static_cast<Orb3dLB_notopo *>(impl_obj_void);
  new (impl_obj) Orb3dLB_notopo((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Orb3dLB_notopo::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,Orb3dLB_notopo::isIrreducible());
  // REG: void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
  idx_Orb3dLB_notopo_marshall1();

  // REG: Orb3dLB_notopo(CkMigrateMessage* impl_msg);
  idx_Orb3dLB_notopo_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Orb3dLB_notopo_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerOrb3dLB_notopo(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCentralLB();

  _registerInitCall(lbinit,1);

/* REG: group Orb3dLB_notopo: CentralLB{
void Orb3dLB_notopo(const CkLBOptions &impl_noname_0);
Orb3dLB_notopo(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Orb3dLB_notopo::__register("Orb3dLB_notopo", sizeof(Orb3dLB_notopo));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Orb3dLB_notopo::virtual_pup(PUP::er &p) {
    recursive_pup<Orb3dLB_notopo >(dynamic_cast<Orb3dLB_notopo* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
