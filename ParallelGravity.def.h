














































































































/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::setupICs_2_closure : public SDAG::Closure {
      

      setupICs_2_closure() {
        init();
      }
      setupICs_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setupICs_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(setupICs_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::initialForces_3_closure : public SDAG::Closure {
      

      initialForces_3_closure() {
        init();
      }
      initialForces_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initialForces_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(initialForces_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::doSimulation_4_closure : public SDAG::Closure {
      

      doSimulation_4_closure() {
        init();
      }
      doSimulation_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doSimulation_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(doSimulation_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::niceExit_10_closure : public SDAG::Closure {
      

      niceExit_10_closure() {
        init();
      }
      niceExit_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~niceExit_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(niceExit_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ProjectionsControl::on_2_closure : public SDAG::Closure {
      CkCallback impl_noname_0;


      on_2_closure() {
        init();
      }
      on_2_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~on_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(on_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ProjectionsControl::off_3_closure : public SDAG::Closure {
      CkCallback impl_noname_1;


      off_3_closure() {
        init();
      }
      off_3_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~off_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(off_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ReductionHelper::countTreePieces_2_closure : public SDAG::Closure {
      CkCallback cb;


      countTreePieces_2_closure() {
        init();
      }
      countTreePieces_2_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~countTreePieces_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(countTreePieces_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ReductionHelper::evaluateBoundaries_3_closure : public SDAG::Closure {
      SFC::Key *keys;
      int n;
      int isRefine;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      evaluateBoundaries_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      evaluateBoundaries_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      SFC::Key *& getP0() { return keys;}
      int & getP1() { return n;}
      int & getP2() { return isRefine;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | isRefine;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        keys = (SFC::Key *)(impl_buf+impl_off_keys);
        }
      }
      virtual ~evaluateBoundaries_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(evaluateBoundaries_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ReductionHelper::evaluateBoundaries_4_closure : public SDAG::Closure {
      CkBitVector binsToSplit;
      CkCallback cb;


      evaluateBoundaries_4_closure() {
        init();
      }
      evaluateBoundaries_4_closure(CkMigrateMessage*) {
        init();
      }
      CkBitVector & getP0() { return binsToSplit;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | binsToSplit;
        __p | cb;
        packClosure(__p);
      }
      virtual ~evaluateBoundaries_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(evaluateBoundaries_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Sorter::startSorting_2_closure : public SDAG::Closure {
      CkGroupID dataManagerID;
      double toler;
      CkCallback cb;
      bool decompose;


      startSorting_2_closure() {
        init();
      }
      startSorting_2_closure(CkMigrateMessage*) {
        init();
      }
      CkGroupID & getP0() { return dataManagerID;}
      double & getP1() { return toler;}
      CkCallback & getP2() { return cb;}
      bool & getP3() { return decompose;}
      void pup(PUP::er& __p) {
        __p | dataManagerID;
        __p | toler;
        __p | cb;
        __p | decompose;
        packClosure(__p);
      }
      virtual ~startSorting_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(startSorting_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::acceptResponsibleIndex_2_closure : public SDAG::Closure {
      int *responsible;
      int n;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptResponsibleIndex_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptResponsibleIndex_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int *& getP0() { return responsible;}
      int & getP1() { return n;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int n; implP|n;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        responsible = (int *)(impl_buf+impl_off_responsible);
        }
      }
      virtual ~acceptResponsibleIndex_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptResponsibleIndex_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::acceptFinalKeys_3_closure : public SDAG::Closure {
      SFC::Key *keys;
      int *responsible;
      uint64_t *bins;
      int n;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptFinalKeys_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptFinalKeys_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      SFC::Key *& getP0() { return keys;}
      int *& getP1() { return responsible;}
      uint64_t *& getP2() { return bins;}
      int & getP3() { return n;}
      CkCallback & getP4() { return cb;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int impl_off_bins, impl_cnt_bins; 
  implP|impl_off_bins;
  implP|impl_cnt_bins;
  int n; implP|n;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        keys = (SFC::Key *)(impl_buf+impl_off_keys);
        responsible = (int *)(impl_buf+impl_off_responsible);
        bins = (uint64_t *)(impl_buf+impl_off_bins);
        }
      }
      virtual ~acceptFinalKeys_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptFinalKeys_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::clearInstrument_5_closure : public SDAG::Closure {
      CkCallback cb;


      clearInstrument_5_closure() {
        init();
      }
      clearInstrument_5_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~clearInstrument_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(clearInstrument_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::initCooling_6_closure : public SDAG::Closure {
      double dGmPerCcUnit;
      double dComovingGmPerCcUnit;
      double dErgPerGmUnit;
      double dSecUnit;
      double dKpcUnit;
      COOLPARAM inParam;
      CkCallback cb;


      initCooling_6_closure() {
        init();
      }
      initCooling_6_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dGmPerCcUnit;}
      double & getP1() { return dComovingGmPerCcUnit;}
      double & getP2() { return dErgPerGmUnit;}
      double & getP3() { return dSecUnit;}
      double & getP4() { return dKpcUnit;}
      COOLPARAM & getP5() { return inParam;}
      CkCallback & getP6() { return cb;}
      void pup(PUP::er& __p) {
        __p | dGmPerCcUnit;
        __p | dComovingGmPerCcUnit;
        __p | dErgPerGmUnit;
        __p | dSecUnit;
        __p | dKpcUnit;
        __p | inParam;
        __p | cb;
        packClosure(__p);
      }
      virtual ~initCooling_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(initCooling_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::dmCoolTableRead_7_closure : public SDAG::Closure {
      double *dTableData;
      int nData;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      dmCoolTableRead_7_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      dmCoolTableRead_7_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      double *& getP0() { return dTableData;}
      int & getP1() { return nData;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | nData;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_dTableData, impl_cnt_dTableData; 
  implP|impl_off_dTableData;
  implP|impl_cnt_dTableData;
  int nData; implP|nData;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        dTableData = (double *)(impl_buf+impl_off_dTableData);
        }
      }
      virtual ~dmCoolTableRead_7_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(dmCoolTableRead_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::CoolingSetTime_8_closure : public SDAG::Closure {
      double z;
      double dTime;
      CkCallback cb;


      CoolingSetTime_8_closure() {
        init();
      }
      CoolingSetTime_8_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return z;}
      double & getP1() { return dTime;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | z;
        __p | dTime;
        __p | cb;
        packClosure(__p);
      }
      virtual ~CoolingSetTime_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(CoolingSetTime_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::SetStarCM_9_closure : public SDAG::Closure {
      double *dCenterOfMass;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      SetStarCM_9_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      SetStarCM_9_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      double *& getP0() { return dCenterOfMass;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass; 
  implP|impl_off_dCenterOfMass;
  implP|impl_cnt_dCenterOfMass;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        dCenterOfMass = (double *)(impl_buf+impl_off_dCenterOfMass);
        }
      }
      virtual ~SetStarCM_9_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(SetStarCM_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::memoryStats_10_closure : public SDAG::Closure {
      CkCallback cb;


      memoryStats_10_closure() {
        init();
      }
      memoryStats_10_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~memoryStats_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(memoryStats_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::resetReadOnly_11_closure : public SDAG::Closure {
      Parameters param;
      CkCallback cb;


      resetReadOnly_11_closure() {
        init();
      }
      resetReadOnly_11_closure(CkMigrateMessage*) {
        init();
      }
      Parameters & getP0() { return param;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | param;
        __p | cb;
        packClosure(__p);
      }
      virtual ~resetReadOnly_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(resetReadOnly_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataManager::initStarLog_12_closure : public SDAG::Closure {
      std::string _fileName;
      CkCallback cb;


      initStarLog_12_closure() {
        init();
      }
      initStarLog_12_closure(CkMigrateMessage*) {
        init();
      }
      std::string & getP0() { return _fileName;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | _fileName;
        __p | cb;
        packClosure(__p);
      }
      virtual ~initStarLog_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(initStarLog_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::quiescence_2_closure : public SDAG::Closure {
      

      quiescence_2_closure() {
        init();
      }
      quiescence_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~quiescence_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(quiescence_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::memCacheStats_3_closure : public SDAG::Closure {
      CkCallback cb;


      memCacheStats_3_closure() {
        init();
      }
      memCacheStats_3_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~memCacheStats_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(memCacheStats_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::setPeriodic_8_closure : public SDAG::Closure {
      int nReplicas;
      Vector3D<double > fPeriod;
      int bEwald;
      double fEwCut;
      double fEwhCut;
      int bPeriod;
      int bComove;
      double dRhoFac;


      setPeriodic_8_closure() {
        init();
      }
      setPeriodic_8_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return nReplicas;}
      Vector3D<double > & getP1() { return fPeriod;}
      int & getP2() { return bEwald;}
      double & getP3() { return fEwCut;}
      double & getP4() { return fEwhCut;}
      int & getP5() { return bPeriod;}
      int & getP6() { return bComove;}
      double & getP7() { return dRhoFac;}
      void pup(PUP::er& __p) {
        __p | nReplicas;
        __p | fPeriod;
        __p | bEwald;
        __p | fEwCut;
        __p | fEwhCut;
        __p | bPeriod;
        __p | bComove;
        __p | dRhoFac;
        packClosure(__p);
      }
      virtual ~setPeriodic_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(setPeriodic_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::EwaldInit_9_closure : public SDAG::Closure {
      

      EwaldInit_9_closure() {
        init();
      }
      EwaldInit_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~EwaldInit_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(EwaldInit_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::initCoolingData_10_closure : public SDAG::Closure {
      CkCallback cb;


      initCoolingData_10_closure() {
        init();
      }
      initCoolingData_10_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~initCoolingData_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(initCoolingData_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::EwaldGPUComplete_12_closure : public SDAG::Closure {
      

      EwaldGPUComplete_12_closure() {
        init();
      }
      EwaldGPUComplete_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~EwaldGPUComplete_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(EwaldGPUComplete_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::EwaldGPU_13_closure : public SDAG::Closure {
      

      EwaldGPU_13_closure() {
        init();
      }
      EwaldGPU_13_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~EwaldGPU_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(EwaldGPU_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::velScale_14_closure : public SDAG::Closure {
      double dScale;
      CkCallback cb;


      velScale_14_closure() {
        init();
      }
      velScale_14_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dScale;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | dScale;
        __p | cb;
        packClosure(__p);
      }
      virtual ~velScale_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(velScale_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::loadNChilada_15_closure : public SDAG::Closure {
      std::string filename;
      double dTuFac;
      CkCallback cb;


      loadNChilada_15_closure() {
        init();
      }
      loadNChilada_15_closure(CkMigrateMessage*) {
        init();
      }
      std::string & getP0() { return filename;}
      double & getP1() { return dTuFac;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | filename;
        __p | dTuFac;
        __p | cb;
        packClosure(__p);
      }
      virtual ~loadNChilada_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(loadNChilada_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::readFloatBinary_16_closure : public SDAG::Closure {
      CkReference<OutputParams > params;
      int bParaRead;
      CkCallback cb;


      readFloatBinary_16_closure() {
        init();
      }
      readFloatBinary_16_closure(CkMigrateMessage*) {
        init();
      }
      CkReference<OutputParams > & getP0() { return params;}
      int & getP1() { return bParaRead;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | params;
        __p | bParaRead;
        __p | cb;
        packClosure(__p);
      }
      virtual ~readFloatBinary_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(readFloatBinary_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::loadTipsy_17_closure : public SDAG::Closure {
      std::string filename;
      double dTuFac;
      bool bDoublePos;
      bool bDoubleVel;
      CkCallback cb;


      loadTipsy_17_closure() {
        init();
      }
      loadTipsy_17_closure(CkMigrateMessage*) {
        init();
      }
      std::string & getP0() { return filename;}
      double & getP1() { return dTuFac;}
      bool & getP2() { return bDoublePos;}
      bool & getP3() { return bDoubleVel;}
      CkCallback & getP4() { return cb;}
      void pup(PUP::er& __p) {
        __p | filename;
        __p | dTuFac;
        __p | bDoublePos;
        __p | bDoubleVel;
        __p | cb;
        packClosure(__p);
      }
      virtual ~loadTipsy_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(loadTipsy_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::readTipsyArray_18_closure : public SDAG::Closure {
      CkReference<OutputParams > params;
      CkCallback cb;


      readTipsyArray_18_closure() {
        init();
      }
      readTipsyArray_18_closure(CkMigrateMessage*) {
        init();
      }
      CkReference<OutputParams > & getP0() { return params;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | params;
        __p | cb;
        packClosure(__p);
      }
      virtual ~readTipsyArray_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(readTipsyArray_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::resetMetals_19_closure : public SDAG::Closure {
      CkCallback cb;


      resetMetals_19_closure() {
        init();
      }
      resetMetals_19_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~resetMetals_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(resetMetals_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::getMaxIOrds_20_closure : public SDAG::Closure {
      CkCallback cb;


      getMaxIOrds_20_closure() {
        init();
      }
      getMaxIOrds_20_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~getMaxIOrds_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(getMaxIOrds_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::RestartEnergy_21_closure : public SDAG::Closure {
      double dTuFac;
      CkCallback cb;


      RestartEnergy_21_closure() {
        init();
      }
      RestartEnergy_21_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dTuFac;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | dTuFac;
        __p | cb;
        packClosure(__p);
      }
      virtual ~RestartEnergy_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(RestartEnergy_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::findTotalMass_22_closure : public SDAG::Closure {
      CkCallback cb;


      findTotalMass_22_closure() {
        init();
      }
      findTotalMass_22_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~findTotalMass_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(findTotalMass_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::setupWrite_24_closure : public SDAG::Closure {
      int iStage;
      u_int64_t iPrevOffset;
      std::string filename;
      double dTime;
      double dvFac;
      double duTfac;
      bool bDoublePos;
      bool bDoubleVel;
      int bCool;
      CkCallback cb;


      setupWrite_24_closure() {
        init();
      }
      setupWrite_24_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iStage;}
      u_int64_t & getP1() { return iPrevOffset;}
      std::string & getP2() { return filename;}
      double & getP3() { return dTime;}
      double & getP4() { return dvFac;}
      double & getP5() { return duTfac;}
      bool & getP6() { return bDoublePos;}
      bool & getP7() { return bDoubleVel;}
      int & getP8() { return bCool;}
      CkCallback & getP9() { return cb;}
      void pup(PUP::er& __p) {
        __p | iStage;
        __p | iPrevOffset;
        __p | filename;
        __p | dTime;
        __p | dvFac;
        __p | duTfac;
        __p | bDoublePos;
        __p | bDoubleVel;
        __p | bCool;
        __p | cb;
        packClosure(__p);
      }
      virtual ~setupWrite_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(setupWrite_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::parallelWrite_25_closure : public SDAG::Closure {
      int iPass;
      CkCallback cb;
      std::string filename;
      double dTime;
      double dvFac;
      double duTFac;
      bool bDoublePos;
      bool bDoubleVel;
      int bCool;


      parallelWrite_25_closure() {
        init();
      }
      parallelWrite_25_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iPass;}
      CkCallback & getP1() { return cb;}
      std::string & getP2() { return filename;}
      double & getP3() { return dTime;}
      double & getP4() { return dvFac;}
      double & getP5() { return duTFac;}
      bool & getP6() { return bDoublePos;}
      bool & getP7() { return bDoubleVel;}
      int & getP8() { return bCool;}
      void pup(PUP::er& __p) {
        __p | iPass;
        __p | cb;
        __p | filename;
        __p | dTime;
        __p | dvFac;
        __p | duTFac;
        __p | bDoublePos;
        __p | bDoubleVel;
        __p | bCool;
        packClosure(__p);
      }
      virtual ~parallelWrite_25_closure() {
      }
      PUPable_decl(SINGLE_ARG(parallelWrite_25_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::serialWrite_26_closure : public SDAG::Closure {
      u_int64_t iPrevOffset;
      std::string filename;
      double dTime;
      double dvFac;
      double duTfac;
      bool bDoublePos;
      bool bDoubleVel;
      int bCool;
      CkCallback cb;


      serialWrite_26_closure() {
        init();
      }
      serialWrite_26_closure(CkMigrateMessage*) {
        init();
      }
      u_int64_t & getP0() { return iPrevOffset;}
      std::string & getP1() { return filename;}
      double & getP2() { return dTime;}
      double & getP3() { return dvFac;}
      double & getP4() { return duTfac;}
      bool & getP5() { return bDoublePos;}
      bool & getP6() { return bDoubleVel;}
      int & getP7() { return bCool;}
      CkCallback & getP8() { return cb;}
      void pup(PUP::er& __p) {
        __p | iPrevOffset;
        __p | filename;
        __p | dTime;
        __p | dvFac;
        __p | duTfac;
        __p | bDoublePos;
        __p | bDoubleVel;
        __p | bCool;
        __p | cb;
        packClosure(__p);
      }
      virtual ~serialWrite_26_closure() {
      }
      PUPable_decl(SINGLE_ARG(serialWrite_26_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::oneNodeWrite_27_closure : public SDAG::Closure {
      int iIndex;
      int iOutParticles;
      int iOutSPH;
      int iOutStar;
      GravityParticle *particles;
      extraSPHData *pGas;
      extraStarData *pStar;
      int *piSPH;
      int *piStar;
      u_int64_t iPrevOffset;
      std::string filename;
      double dTime;
      double dvFac;
      double duTFac;
      bool bDoublePos;
      bool bDoubleVel;
      int bCool;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      oneNodeWrite_27_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      oneNodeWrite_27_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return iIndex;}
      int & getP1() { return iOutParticles;}
      int & getP2() { return iOutSPH;}
      int & getP3() { return iOutStar;}
      GravityParticle *& getP4() { return particles;}
      extraSPHData *& getP5() { return pGas;}
      extraStarData *& getP6() { return pStar;}
      int *& getP7() { return piSPH;}
      int *& getP8() { return piStar;}
      u_int64_t & getP9() { return iPrevOffset;}
      std::string & getP10() { return filename;}
      double & getP11() { return dTime;}
      double & getP12() { return dvFac;}
      double & getP13() { return duTFac;}
      bool & getP14() { return bDoublePos;}
      bool & getP15() { return bDoubleVel;}
      int & getP16() { return bCool;}
      CkCallback & getP17() { return cb;}
      void pup(PUP::er& __p) {
        __p | iIndex;
        __p | iOutParticles;
        __p | iOutSPH;
        __p | iOutStar;
        __p | iPrevOffset;
        __p | filename;
        __p | dTime;
        __p | dvFac;
        __p | duTFac;
        __p | bDoublePos;
        __p | bDoubleVel;
        __p | bCool;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int iIndex; implP|iIndex;
  int iOutParticles; implP|iOutParticles;
  int iOutSPH; implP|iOutSPH;
  int iOutStar; implP|iOutStar;
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int impl_off_piSPH, impl_cnt_piSPH; 
  implP|impl_off_piSPH;
  implP|impl_cnt_piSPH;
  int impl_off_piStar, impl_cnt_piStar; 
  implP|impl_off_piStar;
  implP|impl_cnt_piStar;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        particles = (GravityParticle *)(impl_buf+impl_off_particles);
        pGas = (extraSPHData *)(impl_buf+impl_off_pGas);
        pStar = (extraStarData *)(impl_buf+impl_off_pStar);
        piSPH = (int *)(impl_buf+impl_off_piSPH);
        piStar = (int *)(impl_buf+impl_off_piStar);
        }
      }
      virtual ~oneNodeWrite_27_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(oneNodeWrite_27_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::reOrder_28_closure : public SDAG::Closure {
      int64_t nMaxOrder;
      CkCallback cb;


      reOrder_28_closure() {
        init();
      }
      reOrder_28_closure(CkMigrateMessage*) {
        init();
      }
      int64_t & getP0() { return nMaxOrder;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | nMaxOrder;
        __p | cb;
        packClosure(__p);
      }
      virtual ~reOrder_28_closure() {
      }
      PUPable_decl(SINGLE_ARG(reOrder_28_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::evaluateBoundaries_32_closure : public SDAG::Closure {
      SFC::Key *keys;
      int n;
      int isRefine;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      evaluateBoundaries_32_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      evaluateBoundaries_32_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      SFC::Key *& getP0() { return keys;}
      int & getP1() { return n;}
      int & getP2() { return isRefine;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | isRefine;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        keys = (SFC::Key *)(impl_buf+impl_off_keys);
        }
      }
      virtual ~evaluateBoundaries_32_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(evaluateBoundaries_32_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::unshuffleParticlesWoDD_35_closure : public SDAG::Closure {
      CkCallback cb;


      unshuffleParticlesWoDD_35_closure() {
        init();
      }
      unshuffleParticlesWoDD_35_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~unshuffleParticlesWoDD_35_closure() {
      }
      PUPable_decl(SINGLE_ARG(unshuffleParticlesWoDD_35_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::shuffleAfterQD_36_closure : public SDAG::Closure {
      

      shuffleAfterQD_36_closure() {
        init();
      }
      shuffleAfterQD_36_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~shuffleAfterQD_36_closure() {
      }
      PUPable_decl(SINGLE_ARG(shuffleAfterQD_36_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::initORBPieces_38_closure : public SDAG::Closure {
      CkCallback cb;


      initORBPieces_38_closure() {
        init();
      }
      initORBPieces_38_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~initORBPieces_38_closure() {
      }
      PUPable_decl(SINGLE_ARG(initORBPieces_38_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::initBeforeORBSend_39_closure : public SDAG::Closure {
      unsigned int myCount;
      unsigned int myCountGas;
      unsigned int myCountStar;
      CkCallback cb;
      CkCallback cback;


      initBeforeORBSend_39_closure() {
        init();
      }
      initBeforeORBSend_39_closure(CkMigrateMessage*) {
        init();
      }
      unsigned int & getP0() { return myCount;}
      unsigned int & getP1() { return myCountGas;}
      unsigned int & getP2() { return myCountStar;}
      CkCallback & getP3() { return cb;}
      CkCallback & getP4() { return cback;}
      void pup(PUP::er& __p) {
        __p | myCount;
        __p | myCountGas;
        __p | myCountStar;
        __p | cb;
        __p | cback;
        packClosure(__p);
      }
      virtual ~initBeforeORBSend_39_closure() {
      }
      PUPable_decl(SINGLE_ARG(initBeforeORBSend_39_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::sendORBParticles_40_closure : public SDAG::Closure {
      

      sendORBParticles_40_closure() {
        init();
      }
      sendORBParticles_40_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendORBParticles_40_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendORBParticles_40_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::acceptORBParticles_41_closure : public SDAG::Closure {
      GravityParticle *particles;
      int n;
      extraSPHData *pGas;
      int nGasIn;
      extraStarData *pStar;
      int nStarIn;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptORBParticles_41_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptORBParticles_41_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      GravityParticle *& getP0() { return particles;}
      int & getP1() { return n;}
      extraSPHData *& getP2() { return pGas;}
      int & getP3() { return nGasIn;}
      extraStarData *& getP4() { return pStar;}
      int & getP5() { return nStarIn;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | nGasIn;
        __p | nStarIn;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int n; implP|n;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int nGasIn; implP|nGasIn;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int nStarIn; implP|nStarIn;
          impl_buf+=CK_ALIGN(implP.size(),16);
        particles = (GravityParticle *)(impl_buf+impl_off_particles);
        pGas = (extraSPHData *)(impl_buf+impl_off_pGas);
        pStar = (extraStarData *)(impl_buf+impl_off_pStar);
        }
      }
      virtual ~acceptORBParticles_41_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptORBParticles_41_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::kick_44_closure : public SDAG::Closure {
      int iKickRung;
      double *dDelta;
      int bClosing;
      int bNeedVPred;
      int bGasIsothermal;
      double *duDelta;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      kick_44_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      kick_44_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return iKickRung;}
      double *& getP1() { return dDelta;}
      int & getP2() { return bClosing;}
      int & getP3() { return bNeedVPred;}
      int & getP4() { return bGasIsothermal;}
      double *& getP5() { return duDelta;}
      CkCallback & getP6() { return cb;}
      void pup(PUP::er& __p) {
        __p | iKickRung;
        __p | bClosing;
        __p | bNeedVPred;
        __p | bGasIsothermal;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int impl_off_dDelta, impl_cnt_dDelta; 
  implP|impl_off_dDelta;
  implP|impl_cnt_dDelta;
  int bClosing; implP|bClosing;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsothermal; implP|bGasIsothermal;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        dDelta = (double *)(impl_buf+impl_off_dDelta);
        duDelta = (double *)(impl_buf+impl_off_duDelta);
        }
      }
      virtual ~kick_44_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(kick_44_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::initAccel_45_closure : public SDAG::Closure {
      int iKickRung;
      CkCallback cb;


      initAccel_45_closure() {
        init();
      }
      initAccel_45_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iKickRung;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iKickRung;
        __p | cb;
        packClosure(__p);
      }
      virtual ~initAccel_45_closure() {
      }
      PUPable_decl(SINGLE_ARG(initAccel_45_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::adjust_46_closure : public SDAG::Closure {
      int iKickRung;
      int bEpsAccStep;
      int bGravStep;
      int bSphStep;
      int bViscosityLimitdt;
      double dEta;
      double dEtaCourant;
      double dEtauDot;
      double dDelta;
      double dAccFac;
      double dCosmoFac;
      double dhMinOverSoft;
      double dResolveJeans;
      int bDoGas;
      CkCallback cb;


      adjust_46_closure() {
        init();
      }
      adjust_46_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iKickRung;}
      int & getP1() { return bEpsAccStep;}
      int & getP2() { return bGravStep;}
      int & getP3() { return bSphStep;}
      int & getP4() { return bViscosityLimitdt;}
      double & getP5() { return dEta;}
      double & getP6() { return dEtaCourant;}
      double & getP7() { return dEtauDot;}
      double & getP8() { return dDelta;}
      double & getP9() { return dAccFac;}
      double & getP10() { return dCosmoFac;}
      double & getP11() { return dhMinOverSoft;}
      double & getP12() { return dResolveJeans;}
      int & getP13() { return bDoGas;}
      CkCallback & getP14() { return cb;}
      void pup(PUP::er& __p) {
        __p | iKickRung;
        __p | bEpsAccStep;
        __p | bGravStep;
        __p | bSphStep;
        __p | bViscosityLimitdt;
        __p | dEta;
        __p | dEtaCourant;
        __p | dEtauDot;
        __p | dDelta;
        __p | dAccFac;
        __p | dCosmoFac;
        __p | dhMinOverSoft;
        __p | dResolveJeans;
        __p | bDoGas;
        __p | cb;
        packClosure(__p);
      }
      virtual ~adjust_46_closure() {
      }
      PUPable_decl(SINGLE_ARG(adjust_46_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::truncateRung_47_closure : public SDAG::Closure {
      int iCurrMaxRung;
      CkCallback cb;


      truncateRung_47_closure() {
        init();
      }
      truncateRung_47_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iCurrMaxRung;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iCurrMaxRung;
        __p | cb;
        packClosure(__p);
      }
      virtual ~truncateRung_47_closure() {
      }
      PUPable_decl(SINGLE_ARG(truncateRung_47_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::rungStats_48_closure : public SDAG::Closure {
      CkCallback cb;


      rungStats_48_closure() {
        init();
      }
      rungStats_48_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~rungStats_48_closure() {
      }
      PUPable_decl(SINGLE_ARG(rungStats_48_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::countActive_49_closure : public SDAG::Closure {
      int activeRung;
      CkCallback cb;


      countActive_49_closure() {
        init();
      }
      countActive_49_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return activeRung;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | activeRung;
        __p | cb;
        packClosure(__p);
      }
      virtual ~countActive_49_closure() {
      }
      PUPable_decl(SINGLE_ARG(countActive_49_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::assignDomain_50_closure : public SDAG::Closure {
      CkCallback cb;


      assignDomain_50_closure() {
        init();
      }
      assignDomain_50_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~assignDomain_50_closure() {
      }
      PUPable_decl(SINGLE_ARG(assignDomain_50_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::drift_51_closure : public SDAG::Closure {
      double dDelta;
      int bNeedVPred;
      int bGasIsoThermal;
      double dvDelta;
      double duDelta;
      int nGrowMass;
      bool buildTree;
      CkCallback cb;


      drift_51_closure() {
        init();
      }
      drift_51_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dDelta;}
      int & getP1() { return bNeedVPred;}
      int & getP2() { return bGasIsoThermal;}
      double & getP3() { return dvDelta;}
      double & getP4() { return duDelta;}
      int & getP5() { return nGrowMass;}
      bool & getP6() { return buildTree;}
      CkCallback & getP7() { return cb;}
      void pup(PUP::er& __p) {
        __p | dDelta;
        __p | bNeedVPred;
        __p | bGasIsoThermal;
        __p | dvDelta;
        __p | duDelta;
        __p | nGrowMass;
        __p | buildTree;
        __p | cb;
        packClosure(__p);
      }
      virtual ~drift_51_closure() {
      }
      PUPable_decl(SINGLE_ARG(drift_51_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::starCenterOfMass_52_closure : public SDAG::Closure {
      CkCallback cb;


      starCenterOfMass_52_closure() {
        init();
      }
      starCenterOfMass_52_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~starCenterOfMass_52_closure() {
      }
      PUPable_decl(SINGLE_ARG(starCenterOfMass_52_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::calcEnergy_53_closure : public SDAG::Closure {
      CkCallback cb;


      calcEnergy_53_closure() {
        init();
      }
      calcEnergy_53_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~calcEnergy_53_closure() {
      }
      PUPable_decl(SINGLE_ARG(calcEnergy_53_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::colNParts_54_closure : public SDAG::Closure {
      CkCallback cb;


      colNParts_54_closure() {
        init();
      }
      colNParts_54_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~colNParts_54_closure() {
      }
      PUPable_decl(SINGLE_ARG(colNParts_54_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::newOrder_55_closure : public SDAG::Closure {
      NewMaxOrder *nStarts;
      int n;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      newOrder_55_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      newOrder_55_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      NewMaxOrder *& getP0() { return nStarts;}
      int & getP1() { return n;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | n;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_nStarts, impl_cnt_nStarts; 
  implP|impl_off_nStarts;
  implP|impl_cnt_nStarts;
  int n; implP|n;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        nStarts = (NewMaxOrder *)(impl_buf+impl_off_nStarts);
        }
      }
      virtual ~newOrder_55_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(newOrder_55_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::setNParts_56_closure : public SDAG::Closure {
      int64_t _nTotalSPH;
      int64_t _nTotalDark;
      int64_t _nTotalStar;
      CkCallback cb;


      setNParts_56_closure() {
        init();
      }
      setNParts_56_closure(CkMigrateMessage*) {
        init();
      }
      int64_t & getP0() { return _nTotalSPH;}
      int64_t & getP1() { return _nTotalDark;}
      int64_t & getP2() { return _nTotalStar;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | _nTotalSPH;
        __p | _nTotalDark;
        __p | _nTotalStar;
        __p | cb;
        packClosure(__p);
      }
      virtual ~setNParts_56_closure() {
      }
      PUPable_decl(SINGLE_ARG(setNParts_56_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::setSoft_57_closure : public SDAG::Closure {
      double dSoft;
      CkCallback cb;


      setSoft_57_closure() {
        init();
      }
      setSoft_57_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dSoft;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | dSoft;
        __p | cb;
        packClosure(__p);
      }
      virtual ~setSoft_57_closure() {
      }
      PUPable_decl(SINGLE_ARG(setSoft_57_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::physicalSoft_58_closure : public SDAG::Closure {
      double dSoftMax;
      double dFac;
      int bSoftMaxMul;
      CkCallback cb;


      physicalSoft_58_closure() {
        init();
      }
      physicalSoft_58_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dSoftMax;}
      double & getP1() { return dFac;}
      int & getP2() { return bSoftMaxMul;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | dSoftMax;
        __p | dFac;
        __p | bSoftMaxMul;
        __p | cb;
        packClosure(__p);
      }
      virtual ~physicalSoft_58_closure() {
      }
      PUPable_decl(SINGLE_ARG(physicalSoft_58_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::growMass_59_closure : public SDAG::Closure {
      int nGrowMass;
      double dDeltaM;
      CkCallback cb;


      growMass_59_closure() {
        init();
      }
      growMass_59_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return nGrowMass;}
      double & getP1() { return dDeltaM;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | nGrowMass;
        __p | dDeltaM;
        __p | cb;
        packClosure(__p);
      }
      virtual ~growMass_59_closure() {
      }
      PUPable_decl(SINGLE_ARG(growMass_59_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::InitEnergy_60_closure : public SDAG::Closure {
      double dTuFac;
      double z;
      double dTime;
      CkCallback cb;


      InitEnergy_60_closure() {
        init();
      }
      InitEnergy_60_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dTuFac;}
      double & getP1() { return z;}
      double & getP2() { return dTime;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | dTuFac;
        __p | z;
        __p | dTime;
        __p | cb;
        packClosure(__p);
      }
      virtual ~InitEnergy_60_closure() {
      }
      PUPable_decl(SINGLE_ARG(InitEnergy_60_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::updateuDot_61_closure : public SDAG::Closure {
      int activeRung;
      double *duDelta;
      double *dStartTime;
      int bCool;
      int bAll;
      int bUpdateState;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      updateuDot_61_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      updateuDot_61_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return activeRung;}
      double *& getP1() { return duDelta;}
      double *& getP2() { return dStartTime;}
      int & getP3() { return bCool;}
      int & getP4() { return bAll;}
      int & getP5() { return bUpdateState;}
      CkCallback & getP6() { return cb;}
      void pup(PUP::er& __p) {
        __p | activeRung;
        __p | bCool;
        __p | bAll;
        __p | bUpdateState;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  int impl_off_dStartTime, impl_cnt_dStartTime; 
  implP|impl_off_dStartTime;
  implP|impl_cnt_dStartTime;
  int bCool; implP|bCool;
  int bAll; implP|bAll;
  int bUpdateState; implP|bUpdateState;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        duDelta = (double *)(impl_buf+impl_off_duDelta);
        dStartTime = (double *)(impl_buf+impl_off_dStartTime);
        }
      }
      virtual ~updateuDot_61_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(updateuDot_61_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::ballMax_62_closure : public SDAG::Closure {
      int activeRung;
      double dFac;
      CkCallback cb;


      ballMax_62_closure() {
        init();
      }
      ballMax_62_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return activeRung;}
      double & getP1() { return dFac;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | activeRung;
        __p | dFac;
        __p | cb;
        packClosure(__p);
      }
      virtual ~ballMax_62_closure() {
      }
      PUPable_decl(SINGLE_ARG(ballMax_62_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::sphViscosityLimiter_63_closure : public SDAG::Closure {
      int bOn;
      int activeRung;
      CkCallback cb;


      sphViscosityLimiter_63_closure() {
        init();
      }
      sphViscosityLimiter_63_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return bOn;}
      int & getP1() { return activeRung;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | bOn;
        __p | activeRung;
        __p | cb;
        packClosure(__p);
      }
      virtual ~sphViscosityLimiter_63_closure() {
      }
      PUPable_decl(SINGLE_ARG(sphViscosityLimiter_63_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::getAdiabaticGasPressure_64_closure : public SDAG::Closure {
      double gamma;
      double gammam1;
      CkCallback cb;


      getAdiabaticGasPressure_64_closure() {
        init();
      }
      getAdiabaticGasPressure_64_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return gamma;}
      double & getP1() { return gammam1;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | gamma;
        __p | gammam1;
        __p | cb;
        packClosure(__p);
      }
      virtual ~getAdiabaticGasPressure_64_closure() {
      }
      PUPable_decl(SINGLE_ARG(getAdiabaticGasPressure_64_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::getCoolingGasPressure_65_closure : public SDAG::Closure {
      double gamma;
      double gammam1;
      double dResolveJeans;
      CkCallback cb;


      getCoolingGasPressure_65_closure() {
        init();
      }
      getCoolingGasPressure_65_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return gamma;}
      double & getP1() { return gammam1;}
      double & getP2() { return dResolveJeans;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | gamma;
        __p | gammam1;
        __p | dResolveJeans;
        __p | cb;
        packClosure(__p);
      }
      virtual ~getCoolingGasPressure_65_closure() {
      }
      PUPable_decl(SINGLE_ARG(getCoolingGasPressure_65_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::initRand_66_closure : public SDAG::Closure {
      int iRand;
      CkCallback cb;


      initRand_66_closure() {
        init();
      }
      initRand_66_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iRand;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iRand;
        __p | cb;
        packClosure(__p);
      }
      virtual ~initRand_66_closure() {
      }
      PUPable_decl(SINGLE_ARG(initRand_66_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::FormStars_67_closure : public SDAG::Closure {
      Stfm param;
      double dTime;
      double dDelta;
      double dCosmoFac;
      CkCallback cb;


      FormStars_67_closure() {
        init();
      }
      FormStars_67_closure(CkMigrateMessage*) {
        init();
      }
      Stfm & getP0() { return param;}
      double & getP1() { return dTime;}
      double & getP2() { return dDelta;}
      double & getP3() { return dCosmoFac;}
      CkCallback & getP4() { return cb;}
      void pup(PUP::er& __p) {
        __p | param;
        __p | dTime;
        __p | dDelta;
        __p | dCosmoFac;
        __p | cb;
        packClosure(__p);
      }
      virtual ~FormStars_67_closure() {
      }
      PUPable_decl(SINGLE_ARG(FormStars_67_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::flushStarLog_68_closure : public SDAG::Closure {
      CkCallback cb;


      flushStarLog_68_closure() {
        init();
      }
      flushStarLog_68_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~flushStarLog_68_closure() {
      }
      PUPable_decl(SINGLE_ARG(flushStarLog_68_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::Feedback_69_closure : public SDAG::Closure {
      Fdbk fb;
      double dTime;
      double dDelta;
      CkCallback cb;


      Feedback_69_closure() {
        init();
      }
      Feedback_69_closure(CkMigrateMessage*) {
        init();
      }
      Fdbk & getP0() { return fb;}
      double & getP1() { return dTime;}
      double & getP2() { return dDelta;}
      CkCallback & getP3() { return cb;}
      void pup(PUP::er& __p) {
        __p | fb;
        __p | dTime;
        __p | dDelta;
        __p | cb;
        packClosure(__p);
      }
      virtual ~Feedback_69_closure() {
      }
      PUPable_decl(SINGLE_ARG(Feedback_69_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::massMetalsEnergyCheck_70_closure : public SDAG::Closure {
      int bPreDist;
      CkCallback cb;


      massMetalsEnergyCheck_70_closure() {
        init();
      }
      massMetalsEnergyCheck_70_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return bPreDist;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | bPreDist;
        __p | cb;
        packClosure(__p);
      }
      virtual ~massMetalsEnergyCheck_70_closure() {
      }
      PUPable_decl(SINGLE_ARG(massMetalsEnergyCheck_70_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::setTypeFromFile_71_closure : public SDAG::Closure {
      int iSetMask;
      char *file;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      setTypeFromFile_71_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      setTypeFromFile_71_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return iSetMask;}
      char *& getP1() { return file;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | iSetMask;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int iSetMask; implP|iSetMask;
  int impl_off_file, impl_cnt_file; 
  implP|impl_off_file;
  implP|impl_cnt_file;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        file = (char *)(impl_buf+impl_off_file);
        }
      }
      virtual ~setTypeFromFile_71_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(setTypeFromFile_71_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::getCOM_72_closure : public SDAG::Closure {
      CkCallback cb;
      int bLiveViz;


      getCOM_72_closure() {
        init();
      }
      getCOM_72_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      int & getP1() { return bLiveViz;}
      void pup(PUP::er& __p) {
        __p | cb;
        __p | bLiveViz;
        packClosure(__p);
      }
      virtual ~getCOM_72_closure() {
      }
      PUPable_decl(SINGLE_ARG(getCOM_72_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::getCOMByType_73_closure : public SDAG::Closure {
      int iType;
      CkCallback cb;
      int bLiveViz;


      getCOMByType_73_closure() {
        init();
      }
      getCOMByType_73_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return iType;}
      CkCallback & getP1() { return cb;}
      int & getP2() { return bLiveViz;}
      void pup(PUP::er& __p) {
        __p | iType;
        __p | cb;
        __p | bLiveViz;
        packClosure(__p);
      }
      virtual ~getCOMByType_73_closure() {
      }
      PUPable_decl(SINGLE_ARG(getCOMByType_73_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::DumpFrame_74_closure : public SDAG::Closure {
      InDumpFrame in;
      CkCallback cb;
      int liveVizDump;


      DumpFrame_74_closure() {
        init();
      }
      DumpFrame_74_closure(CkMigrateMessage*) {
        init();
      }
      InDumpFrame & getP0() { return in;}
      CkCallback & getP1() { return cb;}
      int & getP2() { return liveVizDump;}
      void pup(PUP::er& __p) {
        __p | in;
        __p | cb;
        __p | liveVizDump;
        packClosure(__p);
      }
      virtual ~DumpFrame_74_closure() {
      }
      PUPable_decl(SINGLE_ARG(DumpFrame_74_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::setProjections_76_closure : public SDAG::Closure {
      int bOn;


      setProjections_76_closure() {
        init();
      }
      setProjections_76_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return bOn;}
      void pup(PUP::er& __p) {
        __p | bOn;
        packClosure(__p);
      }
      virtual ~setProjections_76_closure() {
      }
      PUPable_decl(SINGLE_ARG(setProjections_76_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::buildTree_77_closure : public SDAG::Closure {
      int bucketSize;
      CkCallback cb;


      buildTree_77_closure() {
        init();
      }
      buildTree_77_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return bucketSize;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | bucketSize;
        __p | cb;
        packClosure(__p);
      }
      virtual ~buildTree_77_closure() {
      }
      PUPable_decl(SINGLE_ARG(buildTree_77_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::recvBoundary_79_closure : public SDAG::Closure {
      SFC::Key key;
      NborDir dir;


      recvBoundary_79_closure() {
        init();
      }
      recvBoundary_79_closure(CkMigrateMessage*) {
        init();
      }
      SFC::Key & getP0() { return key;}
      NborDir & getP1() { return dir;}
      void pup(PUP::er& __p) {
        __p | key;
        __p | dir;
        packClosure(__p);
      }
      virtual ~recvBoundary_79_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvBoundary_79_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::startGravity_82_closure : public SDAG::Closure {
      int activeRung;
      double myTheta;
      CkCallback cb;


      startGravity_82_closure() {
        init();
      }
      startGravity_82_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return activeRung;}
      double & getP1() { return myTheta;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | activeRung;
        __p | myTheta;
        __p | cb;
        packClosure(__p);
      }
      virtual ~startGravity_82_closure() {
      }
      PUPable_decl(SINGLE_ARG(startGravity_82_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::startSmooth_83_closure : public SDAG::Closure {
      CkPointer<SmoothParams > impl_noname_2;
      int iLowhFix;
      int nSmooth;
      double dfBall2OverSoft2;
      CkCallback cb;


      startSmooth_83_closure() {
        init();
      }
      startSmooth_83_closure(CkMigrateMessage*) {
        init();
      }
      CkPointer<SmoothParams > & getP0() { return impl_noname_2;}
      int & getP1() { return iLowhFix;}
      int & getP2() { return nSmooth;}
      double & getP3() { return dfBall2OverSoft2;}
      CkCallback & getP4() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_2;
        __p | iLowhFix;
        __p | nSmooth;
        __p | dfBall2OverSoft2;
        __p | cb;
        packClosure(__p);
      }
      virtual ~startSmooth_83_closure() {
      }
      PUPable_decl(SINGLE_ARG(startSmooth_83_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::startReSmooth_84_closure : public SDAG::Closure {
      CkPointer<SmoothParams > impl_noname_3;
      CkCallback cb;


      startReSmooth_84_closure() {
        init();
      }
      startReSmooth_84_closure(CkMigrateMessage*) {
        init();
      }
      CkPointer<SmoothParams > & getP0() { return impl_noname_3;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        __p | cb;
        packClosure(__p);
      }
      virtual ~startReSmooth_84_closure() {
      }
      PUPable_decl(SINGLE_ARG(startReSmooth_84_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::startMarkSmooth_85_closure : public SDAG::Closure {
      CkPointer<SmoothParams > impl_noname_4;
      CkCallback cb;


      startMarkSmooth_85_closure() {
        init();
      }
      startMarkSmooth_85_closure(CkMigrateMessage*) {
        init();
      }
      CkPointer<SmoothParams > & getP0() { return impl_noname_4;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_4;
        __p | cb;
        packClosure(__p);
      }
      virtual ~startMarkSmooth_85_closure() {
      }
      PUPable_decl(SINGLE_ARG(startMarkSmooth_85_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::finishNodeCache_86_closure : public SDAG::Closure {
      CkCallback cb;


      finishNodeCache_86_closure() {
        init();
      }
      finishNodeCache_86_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~finishNodeCache_86_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishNodeCache_86_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::requestRemoteMoments_87_closure : public SDAG::Closure {
      Tree::NodeKey key;
      int sender;


      requestRemoteMoments_87_closure() {
        init();
      }
      requestRemoteMoments_87_closure(CkMigrateMessage*) {
        init();
      }
      Tree::NodeKey & getP0() { return key;}
      int & getP1() { return sender;}
      void pup(PUP::er& __p) {
        __p | key;
        __p | sender;
        packClosure(__p);
      }
      virtual ~requestRemoteMoments_87_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestRemoteMoments_87_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::receiveRemoteMoments_88_closure : public SDAG::Closure {
      Tree::NodeKey key;
      Tree::NodeType type;
      int firstParticle;
      int numParticles;
      int remIdx;
      MultipoleMoments moments;
      OrientedBox<double > box;
      OrientedBox<double > boxBall;
      unsigned int iParticleTypes;


      receiveRemoteMoments_88_closure() {
        init();
      }
      receiveRemoteMoments_88_closure(CkMigrateMessage*) {
        init();
      }
      Tree::NodeKey & getP0() { return key;}
      Tree::NodeType & getP1() { return type;}
      int & getP2() { return firstParticle;}
      int & getP3() { return numParticles;}
      int & getP4() { return remIdx;}
      MultipoleMoments & getP5() { return moments;}
      OrientedBox<double > & getP6() { return box;}
      OrientedBox<double > & getP7() { return boxBall;}
      unsigned int & getP8() { return iParticleTypes;}
      void pup(PUP::er& __p) {
        __p | key;
        __p | type;
        __p | firstParticle;
        __p | numParticles;
        __p | remIdx;
        __p | moments;
        __p | box;
        __p | boxBall;
        __p | iParticleTypes;
        packClosure(__p);
      }
      virtual ~receiveRemoteMoments_88_closure() {
      }
      PUPable_decl(SINGLE_ARG(receiveRemoteMoments_88_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::commenceCalculateGravityLocal_89_closure : public SDAG::Closure {
      

      commenceCalculateGravityLocal_89_closure() {
        init();
      }
      commenceCalculateGravityLocal_89_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~commenceCalculateGravityLocal_89_closure() {
      }
      PUPable_decl(SINGLE_ARG(commenceCalculateGravityLocal_89_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::calculateReSmoothLocal_91_closure : public SDAG::Closure {
      

      calculateReSmoothLocal_91_closure() {
        init();
      }
      calculateReSmoothLocal_91_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~calculateReSmoothLocal_91_closure() {
      }
      PUPable_decl(SINGLE_ARG(calculateReSmoothLocal_91_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::calculateMarkSmoothLocal_92_closure : public SDAG::Closure {
      

      calculateMarkSmoothLocal_92_closure() {
        init();
      }
      calculateMarkSmoothLocal_92_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~calculateMarkSmoothLocal_92_closure() {
      }
      PUPable_decl(SINGLE_ARG(calculateMarkSmoothLocal_92_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::finishWalk_93_closure : public SDAG::Closure {
      

      finishWalk_93_closure() {
        init();
      }
      finishWalk_93_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishWalk_93_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishWalk_93_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::finishSmoothWalk_94_closure : public SDAG::Closure {
      

      finishSmoothWalk_94_closure() {
        init();
      }
      finishSmoothWalk_94_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishSmoothWalk_94_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishSmoothWalk_94_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::startlb_102_closure : public SDAG::Closure {
      CkCallback cb;
      int activeRung;


      startlb_102_closure() {
        init();
      }
      startlb_102_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      int & getP1() { return activeRung;}
      void pup(PUP::er& __p) {
        __p | cb;
        __p | activeRung;
        packClosure(__p);
      }
      virtual ~startlb_102_closure() {
      }
      PUPable_decl(SINGLE_ARG(startlb_102_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::ResumeFromSync_103_closure : public SDAG::Closure {
      

      ResumeFromSync_103_closure() {
        init();
      }
      ResumeFromSync_103_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeFromSync_103_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeFromSync_103_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::getParticleInfoForLB_104_closure : public SDAG::Closure {
      int64_t active_part;
      int64_t total_part;


      getParticleInfoForLB_104_closure() {
        init();
      }
      getParticleInfoForLB_104_closure(CkMigrateMessage*) {
        init();
      }
      int64_t & getP0() { return active_part;}
      int64_t & getP1() { return total_part;}
      void pup(PUP::er& __p) {
        __p | active_part;
        __p | total_part;
        packClosure(__p);
      }
      virtual ~getParticleInfoForLB_104_closure() {
      }
      PUPable_decl(SINGLE_ARG(getParticleInfoForLB_104_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::doAtSync_105_closure : public SDAG::Closure {
      

      doAtSync_105_closure() {
        init();
      }
      doAtSync_105_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doAtSync_105_closure() {
      }
      PUPable_decl(SINGLE_ARG(doAtSync_105_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::outputAccelerations_106_closure : public SDAG::Closure {
      OrientedBox<double > accelerationBox;
      std::string suffix;
      CkCallback cb;


      outputAccelerations_106_closure() {
        init();
      }
      outputAccelerations_106_closure(CkMigrateMessage*) {
        init();
      }
      OrientedBox<double > & getP0() { return accelerationBox;}
      std::string & getP1() { return suffix;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | accelerationBox;
        __p | suffix;
        __p | cb;
        packClosure(__p);
      }
      virtual ~outputAccelerations_106_closure() {
      }
      PUPable_decl(SINGLE_ARG(outputAccelerations_106_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::outputASCII_107_closure : public SDAG::Closure {
      CkReference<OutputParams > impl_noname_5;
      int bParaWrite;
      CkCallback cb;


      outputASCII_107_closure() {
        init();
      }
      outputASCII_107_closure(CkMigrateMessage*) {
        init();
      }
      CkReference<OutputParams > & getP0() { return impl_noname_5;}
      int & getP1() { return bParaWrite;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_5;
        __p | bParaWrite;
        __p | cb;
        packClosure(__p);
      }
      virtual ~outputASCII_107_closure() {
      }
      PUPable_decl(SINGLE_ARG(outputASCII_107_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::oneNodeOutVec_108_closure : public SDAG::Closure {
      CkReference<OutputParams > impl_noname_6;
      Vector3D<double > *avOut;
      int nPart;
      int iIndex;
      int bDone;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      oneNodeOutVec_108_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      oneNodeOutVec_108_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      CkReference<OutputParams > & getP0() { return impl_noname_6;}
      Vector3D<double > *& getP1() { return avOut;}
      int & getP2() { return nPart;}
      int & getP3() { return iIndex;}
      int & getP4() { return bDone;}
      CkCallback & getP5() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_6;
        __p | nPart;
        __p | iIndex;
        __p | bDone;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_6; implP|impl_noname_6;
  int impl_off_avOut, impl_cnt_avOut; 
  implP|impl_off_avOut;
  implP|impl_cnt_avOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        avOut = (Vector3D<double > *)(impl_buf+impl_off_avOut);
        }
      }
      virtual ~oneNodeOutVec_108_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(oneNodeOutVec_108_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::oneNodeOutArr_109_closure : public SDAG::Closure {
      CkReference<OutputParams > impl_noname_7;
      double *adOut;
      int nPart;
      int iIndex;
      int bDone;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      oneNodeOutArr_109_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      oneNodeOutArr_109_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      CkReference<OutputParams > & getP0() { return impl_noname_7;}
      double *& getP1() { return adOut;}
      int & getP2() { return nPart;}
      int & getP3() { return iIndex;}
      int & getP4() { return bDone;}
      CkCallback & getP5() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_7;
        __p | nPart;
        __p | iIndex;
        __p | bDone;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_7; implP|impl_noname_7;
  int impl_off_adOut, impl_cnt_adOut; 
  implP|impl_off_adOut;
  implP|impl_cnt_adOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        adOut = (double *)(impl_buf+impl_off_adOut);
        }
      }
      virtual ~oneNodeOutArr_109_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(oneNodeOutArr_109_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::outputBinary_110_closure : public SDAG::Closure {
      Ck::IO::Session impl_noname_8;
      CkReference<OutputParams > impl_noname_9;


      outputBinary_110_closure() {
        init();
      }
      outputBinary_110_closure(CkMigrateMessage*) {
        init();
      }
      Ck::IO::Session & getP0() { return impl_noname_8;}
      CkReference<OutputParams > & getP1() { return impl_noname_9;}
      void pup(PUP::er& __p) {
        __p | impl_noname_8;
        __p | impl_noname_9;
        packClosure(__p);
      }
      virtual ~outputBinary_110_closure() {
      }
      PUPable_decl(SINGLE_ARG(outputBinary_110_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::minmaxNCOut_111_closure : public SDAG::Closure {
      CkReference<OutputParams > params;
      CkCallback cb;


      minmaxNCOut_111_closure() {
        init();
      }
      minmaxNCOut_111_closure(CkMigrateMessage*) {
        init();
      }
      CkReference<OutputParams > & getP0() { return params;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | params;
        __p | cb;
        packClosure(__p);
      }
      virtual ~minmaxNCOut_111_closure() {
      }
      PUPable_decl(SINGLE_ARG(minmaxNCOut_111_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::outputBinaryStart_112_closure : public SDAG::Closure {
      CkReference<OutputParams > params;
      int64_t nStart;
      CkCallback cb;


      outputBinaryStart_112_closure() {
        init();
      }
      outputBinaryStart_112_closure(CkMigrateMessage*) {
        init();
      }
      CkReference<OutputParams > & getP0() { return params;}
      int64_t & getP1() { return nStart;}
      CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | params;
        __p | nStart;
        __p | cb;
        packClosure(__p);
      }
      virtual ~outputBinaryStart_112_closure() {
      }
      PUPable_decl(SINGLE_ARG(outputBinaryStart_112_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::oneNodeOutIntArr_113_closure : public SDAG::Closure {
      CkReference<OutputParams > impl_noname_a;
      int *aiOut;
      int nPart;
      int iIndex;
      CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      oneNodeOutIntArr_113_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      oneNodeOutIntArr_113_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      CkReference<OutputParams > & getP0() { return impl_noname_a;}
      int *& getP1() { return aiOut;}
      int & getP2() { return nPart;}
      int & getP3() { return iIndex;}
      CkCallback & getP4() { return cb;}
      void pup(PUP::er& __p) {
        __p | impl_noname_a;
        __p | nPart;
        __p | iIndex;
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_a; implP|impl_noname_a;
  int impl_off_aiOut, impl_cnt_aiOut; 
  implP|impl_off_aiOut;
  implP|impl_cnt_aiOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  CkCallback cb; implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
        aiOut = (int *)(impl_buf+impl_off_aiOut);
        }
      }
      virtual ~oneNodeOutIntArr_113_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(oneNodeOutIntArr_113_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::outputStatistics_114_closure : public SDAG::Closure {
      CkCallback cb;


      outputStatistics_114_closure() {
        init();
      }
      outputStatistics_114_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~outputStatistics_114_closure() {
      }
      PUPable_decl(SINGLE_ARG(outputStatistics_114_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::collectStatistics_115_closure : public SDAG::Closure {
      CkCallback cb;


      collectStatistics_115_closure() {
        init();
      }
      collectStatistics_115_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~collectStatistics_115_closure() {
      }
      PUPable_decl(SINGLE_ARG(collectStatistics_115_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::continueStartRemoteChunk_116_closure : public SDAG::Closure {
      int chunk;


      continueStartRemoteChunk_116_closure() {
        init();
      }
      continueStartRemoteChunk_116_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return chunk;}
      void pup(PUP::er& __p) {
        __p | chunk;
        packClosure(__p);
      }
      virtual ~continueStartRemoteChunk_116_closure() {
      }
      PUPable_decl(SINGLE_ARG(continueStartRemoteChunk_116_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::continueWrapUp_117_closure : public SDAG::Closure {
      

      continueWrapUp_117_closure() {
        init();
      }
      continueWrapUp_117_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~continueWrapUp_117_closure() {
      }
      PUPable_decl(SINGLE_ARG(continueWrapUp_117_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TreePiece::balanceBeforeInitialForces_118_closure : public SDAG::Closure {
      CkCallback cb;


      balanceBeforeInitialForces_118_closure() {
        init();
      }
      balanceBeforeInitialForces_118_closure(CkMigrateMessage*) {
        init();
      }
      CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~balanceBeforeInitialForces_118_closure() {
      }
      PUPable_decl(SINGLE_ARG(balanceBeforeInitialForces_118_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DumpFrameData::clearFrame_2_closure : public SDAG::Closure {
      InDumpFrame in;
      CkCallback cb;


      clearFrame_2_closure() {
        init();
      }
      clearFrame_2_closure(CkMigrateMessage*) {
        init();
      }
      InDumpFrame & getP0() { return in;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | in;
        __p | cb;
        packClosure(__p);
      }
      virtual ~clearFrame_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(clearFrame_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DumpFrameData::combineFrame_3_closure : public SDAG::Closure {
      InDumpFrame in;
      CkCallback cb;


      combineFrame_3_closure() {
        init();
      }
      combineFrame_3_closure(CkMigrateMessage*) {
        init();
      }
      InDumpFrame & getP0() { return in;}
      CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | in;
        __p | cb;
        packClosure(__p);
      }
      virtual ~combineFrame_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(combineFrame_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */





/* DEFS: readonly CProxy_Main mainChare;
 */
extern CProxy_Main mainChare;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainChare(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainChare;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int verbosity;
 */
extern int verbosity;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_verbosity(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|verbosity;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_TreePiece treeProxy;
 */
extern CProxy_TreePiece treeProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_treeProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|treeProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_ReductionHelper reductionHelperProxy;
 */
extern CProxy_ReductionHelper reductionHelperProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_reductionHelperProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|reductionHelperProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_LvArray lvProxy;
 */
extern CProxy_LvArray lvProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_lvProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|lvProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_LvArray smoothProxy;
 */
extern CProxy_LvArray smoothProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_smoothProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|smoothProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_LvArray gravityProxy;
 */
extern CProxy_LvArray gravityProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_gravityProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|gravityProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_TreePiece streamingProxy;
 */
extern CProxy_TreePiece streamingProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_streamingProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|streamingProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_CkCacheManager<KeyType > cacheNode;
 */
extern CProxy_CkCacheManager<KeyType > cacheNode;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_cacheNode(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|cacheNode;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_CkCacheManager<KeyType > cacheGravPart;
 */
extern CProxy_CkCacheManager<KeyType > cacheGravPart;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_cacheGravPart(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|cacheGravPart;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_CkCacheManager<KeyType > cacheSmoothPart;
 */
extern CProxy_CkCacheManager<KeyType > cacheSmoothPart;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_cacheSmoothPart(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|cacheSmoothPart;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_DataManager dMProxy;
 */
extern CProxy_DataManager dMProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dMProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dMProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_PETreeMerger peTreeMergerProxy;
 */
extern CProxy_PETreeMerger peTreeMergerProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_peTreeMergerProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|peTreeMergerProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_DumpFrameData dfDataProxy;
 */
extern CProxy_DumpFrameData dfDataProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dfDataProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dfDataProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_IntraNodeLBManager nodeLBMgrProxy;
 */
extern CProxy_IntraNodeLBManager nodeLBMgrProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_nodeLBMgrProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|nodeLBMgrProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool _cache;
 */
extern bool _cache;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__cache(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_cache;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int _nocache;
 */
extern int _nocache;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__nocache(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_nocache;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int _cacheLineDepth;
 */
extern int _cacheLineDepth;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__cacheLineDepth(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_cacheLineDepth;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly unsigned int _yieldPeriod;
 */
extern unsigned int _yieldPeriod;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__yieldPeriod(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_yieldPeriod;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly DomainsDec domainDecomposition;
 */
extern DomainsDec domainDecomposition;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_domainDecomposition(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|domainDecomposition;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double dExtraStore;
 */
extern double dExtraStore;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dExtraStore(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dExtraStore;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double dMaxBalance;
 */
extern double dMaxBalance;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dMaxBalance(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dMaxBalance;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double dFracLoadBalance;
 */
extern double dFracLoadBalance;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dFracLoadBalance(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dFracLoadBalance;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int bUseCkLoopPar;
 */
extern int bUseCkLoopPar;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_bUseCkLoopPar(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|bUseCkLoopPar;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int peanoKey;
 */
extern int peanoKey;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_peanoKey(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|peanoKey;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly GenericTrees useTree;
 */
extern GenericTrees useTree;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_useTree(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|useTree;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int _prefetch;
 */
extern int _prefetch;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__prefetch(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_prefetch;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int _randChunks;
 */
extern int _randChunks;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__randChunks(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_randChunks;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int _numChunks;
 */
extern int _numChunks;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__numChunks(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_numChunks;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkArrayID treePieceID;
 */
extern CkArrayID treePieceID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_treePieceID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|treePieceID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID dataManagerID;
 */
extern CkGroupID dataManagerID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_dataManagerID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|dataManagerID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly unsigned int numTreePieces;
 */
extern unsigned int numTreePieces;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_numTreePieces(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|numTreePieces;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly unsigned int particlesPerChare;
 */
extern unsigned int particlesPerChare;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_particlesPerChare(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|particlesPerChare;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly unsigned int bucketSize;
 */
extern unsigned int bucketSize;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_bucketSize(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|bucketSize;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int nIOProcessor;
 */
extern int nIOProcessor;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_nIOProcessor(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|nIOProcessor;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int lbcomm_cutoff_msgs;
 */
extern int lbcomm_cutoff_msgs;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_lbcomm_cutoff_msgs(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|lbcomm_cutoff_msgs;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int localNodesPerReq;
 */
extern int localNodesPerReq;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_localNodesPerReq(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|localNodesPerReq;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int remoteNodesPerReq;
 */
extern int remoteNodesPerReq;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_remoteNodesPerReq(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|remoteNodesPerReq;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int remoteResumeNodesPerReq;
 */
extern int remoteResumeNodesPerReq;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_remoteResumeNodesPerReq(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|remoteResumeNodesPerReq;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int localPartsPerReq;
 */
extern int localPartsPerReq;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_localPartsPerReq(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|localPartsPerReq;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int remotePartsPerReq;
 */
extern int remotePartsPerReq;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_remotePartsPerReq(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|remotePartsPerReq;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int remoteResumePartsPerReq;
 */
extern int remoteResumePartsPerReq;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_remoteResumePartsPerReq(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|remoteResumePartsPerReq;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double largePhaseThreshold;
 */
extern double largePhaseThreshold;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_largePhaseThreshold(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|largePhaseThreshold;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int boundaryEvaluationUE;
 */
extern int boundaryEvaluationUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_boundaryEvaluationUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|boundaryEvaluationUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int weightBalanceUE;
 */
extern int weightBalanceUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_weightBalanceUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|weightBalanceUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int networkProgressUE;
 */
extern int networkProgressUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_networkProgressUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|networkProgressUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int nodeForceUE;
 */
extern int nodeForceUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_nodeForceUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|nodeForceUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int partForceUE;
 */
extern int partForceUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_partForceUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|partForceUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int tbRecursiveUE;
 */
extern int tbRecursiveUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_tbRecursiveUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|tbRecursiveUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int tbFlushRequestsUE;
 */
extern int tbFlushRequestsUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_tbFlushRequestsUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|tbFlushRequestsUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int prefetchDoneUE;
 */
extern int prefetchDoneUE;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_prefetchDoneUE(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|prefetchDoneUE;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_ProjectionsControl prjgrp;
 */
extern CProxy_ProjectionsControl prjgrp;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_prjgrp(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|prjgrp;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int numInitDecompBins;
 */
extern int numInitDecompBins;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_numInitDecompBins(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|numInitDecompBins;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int octRefineLevel;
 */
extern int octRefineLevel;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_octRefineLevel(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|octRefineLevel;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool doDumpLB;
 */
extern bool doDumpLB;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_doDumpLB(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|doDumpLB;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int lbDumpIteration;
 */
extern int lbDumpIteration;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_lbDumpIteration(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|lbDumpIteration;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool doSimulateLB;
 */
extern bool doSimulateLB;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_doSimulateLB(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|doSimulateLB;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message dummyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_dummyMsg::operator new(size_t s){
  return dummyMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_dummyMsg::operator new(size_t s, int* sz){
  return dummyMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_dummyMsg::operator new(size_t s, int* sz,const int pb){
  return dummyMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_dummyMsg::operator new(size_t s, const int p) {
  return dummyMsg::alloc(__idx, s, 0, p);
}
void* CMessage_dummyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_dummyMsg::CMessage_dummyMsg() {
dummyMsg *newmsg = (dummyMsg *)this;
}
void CMessage_dummyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_dummyMsg::pack(dummyMsg *msg) {
  return (void *) msg;
}
dummyMsg* CMessage_dummyMsg::unpack(void* buf) {
  dummyMsg *msg = (dummyMsg *) buf;
  return msg;
}
int CMessage_dummyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeChunkMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeChunkMsg::operator new(size_t s){
  return ComputeChunkMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeChunkMsg::operator new(size_t s, int* sz){
  return ComputeChunkMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeChunkMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeChunkMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeChunkMsg::operator new(size_t s, const int p) {
  return ComputeChunkMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ComputeChunkMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ComputeChunkMsg::CMessage_ComputeChunkMsg() {
ComputeChunkMsg *newmsg = (ComputeChunkMsg *)this;
}
void CMessage_ComputeChunkMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeChunkMsg::pack(ComputeChunkMsg *msg) {
  return (void *) msg;
}
ComputeChunkMsg* CMessage_ComputeChunkMsg::unpack(void* buf) {
  ComputeChunkMsg *msg = (ComputeChunkMsg *) buf;
  return msg;
}
int CMessage_ComputeChunkMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ORBSplittersMsg{
double pos[];
char dim[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ORBSplittersMsg::operator new(size_t s){
  return ORBSplittersMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ORBSplittersMsg::operator new(size_t s, int* sz){
  return ORBSplittersMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ORBSplittersMsg::operator new(size_t s, int* sz,const int pb){
  return ORBSplittersMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ORBSplittersMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ORBSplittersMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ORBSplittersMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ORBSplittersMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ORBSplittersMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(double)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(char)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_ORBSplittersMsg::CMessage_ORBSplittersMsg() {
ORBSplittersMsg *newmsg = (ORBSplittersMsg *)this;
  newmsg->pos = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->dim = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_ORBSplittersMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ORBSplittersMsg::pack(ORBSplittersMsg *msg) {
  msg->pos = (double *) ((char *)msg->pos - (char *)msg);
  msg->dim = (char *) ((char *)msg->dim - (char *)msg);
  return (void *) msg;
}
ORBSplittersMsg* CMessage_ORBSplittersMsg::unpack(void* buf) {
  ORBSplittersMsg *msg = (ORBSplittersMsg *) buf;
  msg->pos = (double *) ((size_t)msg->pos + (char *)msg);
  msg->dim = (char *) ((size_t)msg->dim + (char *)msg);
  return msg;
}
int CMessage_ORBSplittersMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ParticleShuffleMsg{
double loads[];
unsigned int parts_per_phase[];
GravityParticle particles[];
extraSPHData pGas[];
extraStarData pStar[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ParticleShuffleMsg::operator new(size_t s){
  return ParticleShuffleMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ParticleShuffleMsg::operator new(size_t s, int* sz){
  return ParticleShuffleMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ParticleShuffleMsg::operator new(size_t s, int* sz,const int pb){
  return ParticleShuffleMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ParticleShuffleMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4) {
  int sizes[5];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  return ParticleShuffleMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ParticleShuffleMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, const int p) {
  int sizes[5];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  return ParticleShuffleMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ParticleShuffleMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(double)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(unsigned int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(GravityParticle)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN_DEFAULT(sizeof(extraSPHData)*sizes[3]);
  if(sizes==0)
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[4] + ALIGN_DEFAULT(sizeof(extraStarData)*sizes[4]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[5], pb);
}
CMessage_ParticleShuffleMsg::CMessage_ParticleShuffleMsg() {
ParticleShuffleMsg *newmsg = (ParticleShuffleMsg *)this;
  newmsg->loads = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->parts_per_phase = (unsigned int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->particles = (GravityParticle *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->pGas = (extraSPHData *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
  newmsg->pStar = (extraStarData *) ((char *)newmsg + CkpvAccess(_offsets)[4]);
}
void CMessage_ParticleShuffleMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ParticleShuffleMsg::pack(ParticleShuffleMsg *msg) {
  msg->loads = (double *) ((char *)msg->loads - (char *)msg);
  msg->parts_per_phase = (unsigned int *) ((char *)msg->parts_per_phase - (char *)msg);
  msg->particles = (GravityParticle *) ((char *)msg->particles - (char *)msg);
  msg->pGas = (extraSPHData *) ((char *)msg->pGas - (char *)msg);
  msg->pStar = (extraStarData *) ((char *)msg->pStar - (char *)msg);
  return (void *) msg;
}
ParticleShuffleMsg* CMessage_ParticleShuffleMsg::unpack(void* buf) {
  ParticleShuffleMsg *msg = (ParticleShuffleMsg *) buf;
  msg->loads = (double *) ((size_t)msg->loads + (char *)msg);
  msg->parts_per_phase = (unsigned int *) ((size_t)msg->parts_per_phase + (char *)msg);
  msg->particles = (GravityParticle *) ((size_t)msg->particles + (char *)msg);
  msg->pGas = (extraSPHData *) ((size_t)msg->pGas + (char *)msg);
  msg->pStar = (extraStarData *) ((size_t)msg->pStar + (char *)msg);
  return msg;
}
int CMessage_ParticleShuffleMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DensitySmoothParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DenDvDxSmoothParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DenDvDxNeighborSmParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(MarkSmoothParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(PressureSmoothParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DistDeletedGasSmoothParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DistStellarFeedbackSmoothParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Fdbk)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(StarLog)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Chabrier)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(MillerScalo)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Kroupa93)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Kroupa01)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(MassOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(PosOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(VelOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(PotOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(GasDenOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(TempOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(AccOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DenOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(HsmOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(SoftOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(PresOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DivVOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(PDVOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(MuMaxOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(BSwOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(CsOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(EDotOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Cool0OutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Cool1OutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Cool2OutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(Cool3OutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(OxOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(FeOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(MetalsOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(MFormOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(TimeFormOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(AgeOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(coolontimeOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(ESNRateOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DtOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(KeyOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(DomainOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(RungOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(IOrderOutputParams)
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
  PUPable_def(IGasOrderOutputParams)
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void setupICs(void);
 */

void CProxy_Main::setupICs(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_setupICs_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_setupICs_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_setupICs_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_setupICs_void() {
  int epidx = CkRegisterEp("setupICs(void)",
      _call_setupICs_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_setupICs_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_setupICs_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Main::_callthr_setupICs_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Main *impl_obj = (Main *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  impl_obj->setupICs();
}
PUPable_def(SINGLE_ARG(Closure_Main::setupICs_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void initialForces(void);
 */

void CProxy_Main::initialForces(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_initialForces_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_initialForces_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_initialForces_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_initialForces_void() {
  int epidx = CkRegisterEp("initialForces(void)",
      _call_initialForces_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_initialForces_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_initialForces_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Main::_callthr_initialForces_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Main *impl_obj = (Main *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  impl_obj->initialForces();
}
PUPable_def(SINGLE_ARG(Closure_Main::initialForces_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void doSimulation(void);
 */

void CProxy_Main::doSimulation(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_doSimulation_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_doSimulation_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_doSimulation_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_doSimulation_void() {
  int epidx = CkRegisterEp("doSimulation(void)",
      _call_doSimulation_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_doSimulation_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_doSimulation_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Main::_callthr_doSimulation_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Main *impl_obj = (Main *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  impl_obj->doSimulation();
}
PUPable_def(SINGLE_ARG(Closure_Main::doSimulation_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void restart(CkCheckpointStatusMsg* impl_msg);
 */

void CProxy_Main::restart(CkCheckpointStatusMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_restart_CkCheckpointStatusMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_restart_CkCheckpointStatusMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_restart_CkCheckpointStatusMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_restart_CkCheckpointStatusMsg() {
  int epidx = CkRegisterEp("restart(CkCheckpointStatusMsg* impl_msg)",
      _call_restart_CkCheckpointStatusMsg, CMessage_CkCheckpointStatusMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCheckpointStatusMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_restart_CkCheckpointStatusMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_restart_CkCheckpointStatusMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Main::_callthr_restart_CkCheckpointStatusMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Main *impl_obj = (Main *) impl_arg->obj;
  delete impl_arg;
  impl_obj->restart((CkCheckpointStatusMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void cbOpen(Ck::IO::FileReadyMsg* impl_msg);
 */

void CProxy_Main::cbOpen(Ck::IO::FileReadyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_cbOpen_FileReadyMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_cbOpen_FileReadyMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_cbOpen_FileReadyMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_cbOpen_FileReadyMsg() {
  int epidx = CkRegisterEp("cbOpen(Ck::IO::FileReadyMsg* impl_msg)",
      _call_cbOpen_FileReadyMsg, Ck::IO::CMessage_FileReadyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::IO::FileReadyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_cbOpen_FileReadyMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_cbOpen_FileReadyMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Main::_callthr_cbOpen_FileReadyMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Main *impl_obj = (Main *) impl_arg->obj;
  delete impl_arg;
  impl_obj->cbOpen((Ck::IO::FileReadyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void cbIOReady(Ck::IO::SessionReadyMsg* impl_msg);
 */

void CProxy_Main::cbIOReady(Ck::IO::SessionReadyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_cbIOReady_SessionReadyMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_cbIOReady_SessionReadyMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_cbIOReady_SessionReadyMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_cbIOReady_SessionReadyMsg() {
  int epidx = CkRegisterEp("cbIOReady(Ck::IO::SessionReadyMsg* impl_msg)",
      _call_cbIOReady_SessionReadyMsg, Ck::IO::CMessage_SessionReadyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::IO::SessionReadyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_cbIOReady_SessionReadyMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  impl_obj->cbIOReady((Ck::IO::SessionReadyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void cbIOComplete(CkMessage* impl_msg);
 */

void CProxy_Main::cbIOComplete(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_cbIOComplete_CkMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_cbIOComplete_CkMessage(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_cbIOComplete_CkMessage(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_cbIOComplete_CkMessage() {
  int epidx = CkRegisterEp("cbIOComplete(CkMessage* impl_msg)",
      _call_cbIOComplete_CkMessage, CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_cbIOComplete_CkMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  impl_obj->cbIOComplete((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void cbIOClosed(CkMessage* impl_msg);
 */

void CProxy_Main::cbIOClosed(CkMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_cbIOClosed_CkMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_cbIOClosed_CkMessage(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_cbIOClosed_CkMessage(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_cbIOClosed_CkMessage() {
  int epidx = CkRegisterEp("cbIOClosed(CkMessage* impl_msg)",
      _call_cbIOClosed_CkMessage, CMessage_CkMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkMessage::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_cbIOClosed_CkMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_cbIOClosed_CkMessage, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Main::_callthr_cbIOClosed_CkMessage(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Main *impl_obj = (Main *) impl_arg->obj;
  delete impl_arg;
  impl_obj->cbIOClosed((CkMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void niceExit(void);
 */

void CProxy_Main::niceExit(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_niceExit_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_niceExit_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_niceExit_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_niceExit_void() {
  int epidx = CkRegisterEp("niceExit(void)",
      _call_niceExit_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_niceExit_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->niceExit();
}
PUPable_def(SINGLE_ARG(Closure_Main::niceExit_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizImagePrep(liveVizRequestMsg* impl_msg);
 */

void CProxy_Main::liveVizImagePrep(liveVizRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_liveVizImagePrep_liveVizRequestMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_liveVizImagePrep_liveVizRequestMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_liveVizImagePrep_liveVizRequestMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_liveVizImagePrep_liveVizRequestMsg() {
  int epidx = CkRegisterEp("liveVizImagePrep(liveVizRequestMsg* impl_msg)",
      _call_liveVizImagePrep_liveVizRequestMsg, CMessage_liveVizRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)liveVizRequestMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_liveVizImagePrep_liveVizRequestMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  impl_obj->liveVizImagePrep((liveVizRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Main::reg_Main_CkMigrateMessage() {
  int epidx = CkRegisterEp("Main(CkMigrateMessage* impl_msg)",
      _call_Main_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_Main_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: threaded void setupICs(void);
  idx_setupICs_void();

  // REG: threaded void initialForces(void);
  idx_initialForces_void();

  // REG: threaded void doSimulation(void);
  idx_doSimulation_void();

  // REG: threaded void restart(CkCheckpointStatusMsg* impl_msg);
  idx_restart_CkCheckpointStatusMsg();

  // REG: threaded void cbOpen(Ck::IO::FileReadyMsg* impl_msg);
  idx_cbOpen_FileReadyMsg();

  // REG: void cbIOReady(Ck::IO::SessionReadyMsg* impl_msg);
  idx_cbIOReady_SessionReadyMsg();

  // REG: void cbIOComplete(CkMessage* impl_msg);
  idx_cbIOComplete_CkMessage();

  // REG: threaded void cbIOClosed(CkMessage* impl_msg);
  idx_cbIOClosed_CkMessage();

  // REG: void niceExit(void);
  idx_niceExit_void();

  // REG: void liveVizImagePrep(liveVizRequestMsg* impl_msg);
  idx_liveVizImagePrep_liveVizRequestMsg();

  // REG: Main(CkMigrateMessage* impl_msg);
  idx_Main_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Main_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ProjectionsControl: IrrGroup{
ProjectionsControl(void);
void on(const CkCallback &impl_noname_0);
void off(const CkCallback &impl_noname_1);
ProjectionsControl(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ProjectionsControl::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ProjectionsControl(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void on(const CkCallback &impl_noname_0);
 */

void CProxyElement_ProjectionsControl::on(const CkCallback &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void off(const CkCallback &impl_noname_1);
 */

void CProxyElement_ProjectionsControl::off(const CkCallback &impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ProjectionsControl(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ProjectionsControl(void);
 */

CkGroupID CProxy_ProjectionsControl::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  return CkCreateGroup(CkIndex_ProjectionsControl::__idx, CkIndex_ProjectionsControl::idx_ProjectionsControl_void(), impl_msg);
}

// Entry point registration function

int CkIndex_ProjectionsControl::reg_ProjectionsControl_void() {
  int epidx = CkRegisterEp("ProjectionsControl(void)",
      _call_ProjectionsControl_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_ProjectionsControl::_call_ProjectionsControl_void(void* impl_msg, void* impl_obj_void)
{
  ProjectionsControl* impl_obj = static_cast<ProjectionsControl *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ProjectionsControl();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void on(const CkCallback &impl_noname_0);
 */

void CProxy_ProjectionsControl::on(const CkCallback &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID(),0);
}

void CProxy_ProjectionsControl::on(const CkCallback &impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_ProjectionsControl::on(const CkCallback &impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_ProjectionsControl::reg_on_marshall2() {
  int epidx = CkRegisterEp("on(const CkCallback &impl_noname_0)",
      _call_on_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_on_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_on_marshall2);

  return epidx;
}


void CkIndex_ProjectionsControl::_call_on_marshall2(void* impl_msg, void* impl_obj_void)
{
  ProjectionsControl* impl_obj = static_cast<ProjectionsControl *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkCallback impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->on(impl_noname_0);
}

int CkIndex_ProjectionsControl::_callmarshall_on_marshall2(char* impl_buf, void* impl_obj_void) {
  ProjectionsControl* impl_obj = static_cast< ProjectionsControl *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkCallback impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->on(impl_noname_0);
  return implP.size();
}

void CkIndex_ProjectionsControl::_marshallmessagepup_on_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  CkCallback impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_ProjectionsControl::on_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void off(const CkCallback &impl_noname_1);
 */

void CProxy_ProjectionsControl::off(const CkCallback &impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID(),0);
}

void CProxy_ProjectionsControl::off(const CkCallback &impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
  }
  CkSendMsgBranchMulti(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_ProjectionsControl::off(const CkCallback &impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
  }
  CkSendMsgBranchGroup(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_ProjectionsControl::reg_off_marshall3() {
  int epidx = CkRegisterEp("off(const CkCallback &impl_noname_1)",
      _call_off_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_off_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_off_marshall3);

  return epidx;
}


void CkIndex_ProjectionsControl::_call_off_marshall3(void* impl_msg, void* impl_obj_void)
{
  ProjectionsControl* impl_obj = static_cast<ProjectionsControl *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  CkCallback impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->off(impl_noname_1);
}

int CkIndex_ProjectionsControl::_callmarshall_off_marshall3(char* impl_buf, void* impl_obj_void) {
  ProjectionsControl* impl_obj = static_cast< ProjectionsControl *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  CkCallback impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->off(impl_noname_1);
  return implP.size();
}

void CkIndex_ProjectionsControl::_marshallmessagepup_off_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  CkCallback impl_noname_1; implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_ProjectionsControl::off_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ProjectionsControl(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_ProjectionsControl::reg_ProjectionsControl_CkMigrateMessage() {
  int epidx = CkRegisterEp("ProjectionsControl(CkMigrateMessage* impl_msg)",
      _call_ProjectionsControl_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_ProjectionsControl::_call_ProjectionsControl_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  ProjectionsControl* impl_obj = static_cast<ProjectionsControl *>(impl_obj_void);
  new (impl_obj) ProjectionsControl((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ProjectionsControl(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void on(const CkCallback &impl_noname_0);
 */

void CProxySection_ProjectionsControl::on(const CkCallback &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProjectionsControl::idx_on_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void off(const CkCallback &impl_noname_1);
 */

void CProxySection_ProjectionsControl::off(const CkCallback &impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProjectionsControl::idx_off_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ProjectionsControl(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ProjectionsControl::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ProjectionsControl::isIrreducible());
  // REG: ProjectionsControl(void);
  idx_ProjectionsControl_void();
  CkRegisterDefaultCtor(__idx, idx_ProjectionsControl_void());

  // REG: void on(const CkCallback &impl_noname_0);
  idx_on_marshall2();

  // REG: void off(const CkCallback &impl_noname_1);
  idx_off_marshall3();

  // REG: ProjectionsControl(CkMigrateMessage* impl_msg);
  idx_ProjectionsControl_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ProjectionsControl_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ReductionHelper: IrrGroup{
ReductionHelper(void);
void countTreePieces(const CkCallback &cb);
void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
ReductionHelper(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ReductionHelper::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionHelper(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void countTreePieces(const CkCallback &cb);
 */

void CProxyElement_ReductionHelper::countTreePieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */

void CProxyElement_ReductionHelper::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
 */

void CProxyElement_ReductionHelper::evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkBitVector &binsToSplit, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionHelper(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionHelper(void);
 */

CkGroupID CProxy_ReductionHelper::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  return CkCreateGroup(CkIndex_ReductionHelper::__idx, CkIndex_ReductionHelper::idx_ReductionHelper_void(), impl_msg);
}

// Entry point registration function

int CkIndex_ReductionHelper::reg_ReductionHelper_void() {
  int epidx = CkRegisterEp("ReductionHelper(void)",
      _call_ReductionHelper_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_ReductionHelper::_call_ReductionHelper_void(void* impl_msg, void* impl_obj_void)
{
  ReductionHelper* impl_obj = static_cast<ReductionHelper *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ReductionHelper();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void countTreePieces(const CkCallback &cb);
 */

void CProxy_ReductionHelper::countTreePieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID(),0);
}

void CProxy_ReductionHelper::countTreePieces(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_ReductionHelper::countTreePieces(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_ReductionHelper::reg_countTreePieces_marshall2() {
  int epidx = CkRegisterEp("countTreePieces(const CkCallback &cb)",
      _call_countTreePieces_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_countTreePieces_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_countTreePieces_marshall2);

  return epidx;
}


void CkIndex_ReductionHelper::_call_countTreePieces_marshall2(void* impl_msg, void* impl_obj_void)
{
  ReductionHelper* impl_obj = static_cast<ReductionHelper *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->countTreePieces(cb);
}

int CkIndex_ReductionHelper::_callmarshall_countTreePieces_marshall2(char* impl_buf, void* impl_obj_void) {
  ReductionHelper* impl_obj = static_cast< ReductionHelper *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->countTreePieces(cb);
  return implP.size();
}

void CkIndex_ReductionHelper::_marshallmessagepup_countTreePieces_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_ReductionHelper::countTreePieces_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */

void CProxy_ReductionHelper::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID(),0);
}

void CProxy_ReductionHelper::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  CkSendMsgBranchMulti(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_ReductionHelper::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  CkSendMsgBranchGroup(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_ReductionHelper::reg_evaluateBoundaries_marshall3() {
  int epidx = CkRegisterEp("evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb)",
      _call_evaluateBoundaries_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_evaluateBoundaries_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_evaluateBoundaries_marshall3);

  return epidx;
}


void CkIndex_ReductionHelper::_call_evaluateBoundaries_marshall3(void* impl_msg, void* impl_obj_void)
{
  ReductionHelper* impl_obj = static_cast<ReductionHelper *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  impl_obj->evaluateBoundaries(keys, n, isRefine, cb);
}

int CkIndex_ReductionHelper::_callmarshall_evaluateBoundaries_marshall3(char* impl_buf, void* impl_obj_void) {
  ReductionHelper* impl_obj = static_cast< ReductionHelper *>(impl_obj_void);
  /*Unmarshall pup'd fields: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  impl_obj->evaluateBoundaries(keys, n, isRefine, cb);
  return implP.size();
}

void CkIndex_ReductionHelper::_marshallmessagepup_evaluateBoundaries_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  if (implDestP.hasComments()) implDestP.comment("keys");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*keys))<impl_cnt_keys;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|keys[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("isRefine");
  implDestP|isRefine;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_ReductionHelper::evaluateBoundaries_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
 */

void CProxy_ReductionHelper::evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkBitVector &binsToSplit, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID(),0);
}

void CProxy_ReductionHelper::evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkBitVector &binsToSplit, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_ReductionHelper::evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkBitVector &binsToSplit, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_ReductionHelper::reg_evaluateBoundaries_marshall4() {
  int epidx = CkRegisterEp("evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb)",
      _call_evaluateBoundaries_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_evaluateBoundaries_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_evaluateBoundaries_marshall4);

  return epidx;
}


void CkIndex_ReductionHelper::_call_evaluateBoundaries_marshall4(void* impl_msg, void* impl_obj_void)
{
  ReductionHelper* impl_obj = static_cast<ReductionHelper *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkBitVector &binsToSplit, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkBitVector binsToSplit; implP|binsToSplit;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->evaluateBoundaries(binsToSplit, cb);
}

int CkIndex_ReductionHelper::_callmarshall_evaluateBoundaries_marshall4(char* impl_buf, void* impl_obj_void) {
  ReductionHelper* impl_obj = static_cast< ReductionHelper *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkBitVector &binsToSplit, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkBitVector binsToSplit; implP|binsToSplit;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->evaluateBoundaries(binsToSplit, cb);
  return implP.size();
}

void CkIndex_ReductionHelper::_marshallmessagepup_evaluateBoundaries_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkBitVector &binsToSplit, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkBitVector binsToSplit; implP|binsToSplit;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("binsToSplit");
  implDestP|binsToSplit;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_ReductionHelper::evaluateBoundaries_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionHelper(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_ReductionHelper::reg_ReductionHelper_CkMigrateMessage() {
  int epidx = CkRegisterEp("ReductionHelper(CkMigrateMessage* impl_msg)",
      _call_ReductionHelper_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_ReductionHelper::_call_ReductionHelper_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  ReductionHelper* impl_obj = static_cast<ReductionHelper *>(impl_obj_void);
  new (impl_obj) ReductionHelper((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionHelper(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void countTreePieces(const CkCallback &cb);
 */

void CProxySection_ReductionHelper::countTreePieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionHelper::idx_countTreePieces_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */

void CProxySection_ReductionHelper::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
 */

void CProxySection_ReductionHelper::evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkBitVector &binsToSplit, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkBitVector &)binsToSplit;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionHelper::idx_evaluateBoundaries_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionHelper(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ReductionHelper::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ReductionHelper::isIrreducible());
  // REG: ReductionHelper(void);
  idx_ReductionHelper_void();
  CkRegisterDefaultCtor(__idx, idx_ReductionHelper_void());

  // REG: void countTreePieces(const CkCallback &cb);
  idx_countTreePieces_marshall2();

  // REG: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
  idx_evaluateBoundaries_marshall3();

  // REG: void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
  idx_evaluateBoundaries_marshall4();

  // REG: ReductionHelper(CkMigrateMessage* impl_msg);
  idx_ReductionHelper_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ReductionHelper_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare Sorter: Chare{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Sorter::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Sorter(void);
 */

CkChareID CProxy_Sorter::ckNew(int impl_onPE)
{
  void *impl_msg = CkAllocSysMsg();
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Sorter::__idx, CkIndex_Sorter::idx_Sorter_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Sorter::ckNew(CkChareID* pcid, int impl_onPE)
{
  void *impl_msg = CkAllocSysMsg();
  CkCreateChare(CkIndex_Sorter::__idx, CkIndex_Sorter::idx_Sorter_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function

int CkIndex_Sorter::reg_Sorter_void() {
  int epidx = CkRegisterEp("Sorter(void)",
      _call_Sorter_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Sorter::_call_Sorter_void(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Sorter();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose);
 */

void CProxy_Sorter::startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)dataManagerID;
    implP|toler;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)decompose;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)dataManagerID;
    implP|toler;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)decompose;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Sorter::idx_startSorting_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Sorter::idx_startSorting_marshall2(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Sorter::idx_startSorting_marshall2(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Sorter::reg_startSorting_marshall2() {
  int epidx = CkRegisterEp("startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose)",
      _call_startSorting_marshall2, CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startSorting_marshall2);

  return epidx;
}


void CkIndex_Sorter::_call_startSorting_marshall2(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_startSorting_marshall2, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_Sorter::_callthr_startSorting_marshall2(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  Sorter *impl_obj = (Sorter *) impl_arg->obj;
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose*/
  PUP::fromMem implP(impl_buf);
  CkGroupID dataManagerID; implP|dataManagerID;
  double toler; implP|toler;
  CkCallback cb; implP|cb;
  bool decompose; implP|decompose;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startSorting(dataManagerID, toler, cb, decompose);
  delete impl_msg_typed;
}

void CkIndex_Sorter::_marshallmessagepup_startSorting_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose*/
  PUP::fromMem implP(impl_buf);
  CkGroupID dataManagerID; implP|dataManagerID;
  double toler; implP|toler;
  CkCallback cb; implP|cb;
  bool decompose; implP|decompose;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dataManagerID");
  implDestP|dataManagerID;
  if (implDestP.hasComments()) implDestP.comment("toler");
  implDestP|toler;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("decompose");
  implDestP|decompose;
}
PUPable_def(SINGLE_ARG(Closure_Sorter::startSorting_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectEvaluations(CkReductionMsg* impl_msg);
 */

void CProxy_Sorter::collectEvaluations(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Sorter::idx_collectEvaluations_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Sorter::idx_collectEvaluations_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Sorter::idx_collectEvaluations_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Sorter::reg_collectEvaluations_CkReductionMsg() {
  int epidx = CkRegisterEp("collectEvaluations(CkReductionMsg* impl_msg)",
      _call_collectEvaluations_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Sorter::_call_collectEvaluations_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  impl_obj->collectEvaluations((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectORBCounts(CkReductionMsg* impl_msg);
 */

void CProxy_Sorter::collectORBCounts(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Sorter::idx_collectORBCounts_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Sorter::idx_collectORBCounts_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Sorter::idx_collectORBCounts_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Sorter::reg_collectORBCounts_CkReductionMsg() {
  int epidx = CkRegisterEp("collectORBCounts(CkReductionMsg* impl_msg)",
      _call_collectORBCounts_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Sorter::_call_collectORBCounts_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  impl_obj->collectORBCounts((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishPhase(CkReductionMsg* impl_msg);
 */

void CProxy_Sorter::finishPhase(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Sorter::idx_finishPhase_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Sorter::idx_finishPhase_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Sorter::idx_finishPhase_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Sorter::reg_finishPhase_CkReductionMsg() {
  int epidx = CkRegisterEp("finishPhase(CkReductionMsg* impl_msg)",
      _call_finishPhase_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Sorter::_call_finishPhase_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  impl_obj->finishPhase((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doORBDecomposition(CkReductionMsg* impl_msg);
 */

void CProxy_Sorter::doORBDecomposition(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Sorter::idx_doORBDecomposition_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Sorter::idx_doORBDecomposition_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Sorter::idx_doORBDecomposition_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Sorter::reg_doORBDecomposition_CkReductionMsg() {
  int epidx = CkRegisterEp("doORBDecomposition(CkReductionMsg* impl_msg)",
      _call_doORBDecomposition_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Sorter::_call_doORBDecomposition_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  impl_obj->doORBDecomposition((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readytoSendORB(CkReductionMsg* impl_msg);
 */

void CProxy_Sorter::readytoSendORB(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Sorter::idx_readytoSendORB_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Sorter::idx_readytoSendORB_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Sorter::idx_readytoSendORB_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Sorter::reg_readytoSendORB_CkReductionMsg() {
  int epidx = CkRegisterEp("readytoSendORB(CkReductionMsg* impl_msg)",
      _call_readytoSendORB_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Sorter::_call_readytoSendORB_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  impl_obj->readytoSendORB((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Sorter(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Sorter::reg_Sorter_CkMigrateMessage() {
  int epidx = CkRegisterEp("Sorter(CkMigrateMessage* impl_msg)",
      _call_Sorter_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Sorter::_call_Sorter_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Sorter* impl_obj = static_cast<Sorter *>(impl_obj_void);
  new (impl_obj) Sorter((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Sorter::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Sorter(void);
  idx_Sorter_void();
  CkRegisterDefaultCtor(__idx, idx_Sorter_void());

  // REG: threaded void startSorting(const CkGroupID &dataManagerID, double toler, const CkCallback &cb, const bool &decompose);
  idx_startSorting_marshall2();

  // REG: void collectEvaluations(CkReductionMsg* impl_msg);
  idx_collectEvaluations_CkReductionMsg();

  // REG: void collectORBCounts(CkReductionMsg* impl_msg);
  idx_collectORBCounts_CkReductionMsg();

  // REG: void finishPhase(CkReductionMsg* impl_msg);
  idx_finishPhase_CkReductionMsg();

  // REG: void doORBDecomposition(CkReductionMsg* impl_msg);
  idx_doORBDecomposition_CkReductionMsg();

  // REG: void readytoSendORB(CkReductionMsg* impl_msg);
  idx_readytoSendORB_CkReductionMsg();

  // REG: Sorter(CkMigrateMessage* impl_msg);
  idx_Sorter_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Sorter_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup DataManager: NodeGroup{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_DataManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataManager(const CkArrayID &treePieceID);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
 */

void CProxyElement_DataManager::acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *responsible, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_responsible, impl_cnt_responsible;
  impl_off_responsible=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_responsible=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_responsible,responsible,impl_cnt_responsible);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
 */

void CProxyElement_DataManager::acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  int impl_off_responsible, impl_cnt_responsible;
  impl_off_responsible=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_responsible=sizeof(int)*(n - 1));
  int impl_off_bins, impl_cnt_bins;
  impl_off_bins=impl_off=CK_ALIGN(impl_off,sizeof(uint64_t));
  impl_off+=(impl_cnt_bins=sizeof(uint64_t)*(n - 1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|impl_off_bins;
    implP|impl_cnt_bins;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|impl_off_bins;
    implP|impl_cnt_bins;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  memcpy(impl_buf+impl_off_responsible,responsible,impl_cnt_responsible);
  memcpy(impl_buf+impl_off_bins,bins,impl_cnt_bins);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combineLocalTrees(CkReductionMsg* impl_msg);
 */

void CProxyElement_DataManager::combineLocalTrees(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clearInstrument(const CkCallback &cb);
 */

void CProxyElement_DataManager::clearInstrument(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
 */

void CProxyElement_DataManager::initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dGmPerCcUnit;
    implP|dComovingGmPerCcUnit;
    implP|dErgPerGmUnit;
    implP|dSecUnit;
    implP|dKpcUnit;
    //Have to cast away const-ness to get pup routine
    implP|(COOLPARAM &)inParam;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dGmPerCcUnit;
    implP|dComovingGmPerCcUnit;
    implP|dErgPerGmUnit;
    implP|dSecUnit;
    implP|dKpcUnit;
    //Have to cast away const-ness to get pup routine
    implP|(COOLPARAM &)inParam;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
 */

void CProxyElement_DataManager::dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *dTableData, int nData, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dTableData, impl_cnt_dTableData;
  impl_off_dTableData=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dTableData=sizeof(double)*(nData));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dTableData;
    implP|impl_cnt_dTableData;
    implP|nData;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dTableData;
    implP|impl_cnt_dTableData;
    implP|nData;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dTableData,dTableData,impl_cnt_dTableData);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
 */

void CProxyElement_DataManager::CoolingSetTime(double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double z, double dTime, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
 */

void CProxyElement_DataManager::SetStarCM(const double *dCenterOfMass, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *dCenterOfMass, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass;
  impl_off_dCenterOfMass=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dCenterOfMass=sizeof(double)*(4));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dCenterOfMass;
    implP|impl_cnt_dCenterOfMass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dCenterOfMass;
    implP|impl_cnt_dCenterOfMass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dCenterOfMass,dCenterOfMass,impl_cnt_dCenterOfMass);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void memoryStats(const CkCallback &cb);
 */

void CProxyElement_DataManager::memoryStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
 */

void CProxyElement_DataManager::resetReadOnly(const Parameters &param, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Parameters &param, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Parameters &)param;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Parameters &)param;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
 */

void CProxyElement_DataManager::initStarLog(const std::string &_fileName, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::string &_fileName, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)_fileName;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)_fileName;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataManager(const CkArrayID &treePieceID);
 */

CkGroupID CProxy_DataManager::ckNew(const CkArrayID &treePieceID, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &treePieceID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)treePieceID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)treePieceID;
  }
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  return CkCreateNodeGroup(CkIndex_DataManager::__idx, CkIndex_DataManager::idx_DataManager_marshall1(), impl_msg);
}

  CProxy_DataManager::CProxy_DataManager(const CkArrayID &treePieceID, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &treePieceID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)treePieceID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkArrayID &)treePieceID;
  }
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateNodeGroup(CkIndex_DataManager::__idx, CkIndex_DataManager::idx_DataManager_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_DataManager::reg_DataManager_marshall1() {
  int epidx = CkRegisterEp("DataManager(const CkArrayID &treePieceID)",
      _call_DataManager_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_DataManager_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_DataManager_marshall1);

  return epidx;
}


void CkIndex_DataManager::_call_DataManager_marshall1(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkArrayID &treePieceID*/
  PUP::fromMem implP(impl_buf);
  CkArrayID treePieceID; implP|treePieceID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) DataManager(treePieceID);
}

int CkIndex_DataManager::_callmarshall_DataManager_marshall1(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkArrayID &treePieceID*/
  PUP::fromMem implP(impl_buf);
  CkArrayID treePieceID; implP|treePieceID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) DataManager(treePieceID);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_DataManager_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkArrayID &treePieceID*/
  PUP::fromMem implP(impl_buf);
  CkArrayID treePieceID; implP|treePieceID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("treePieceID");
  implDestP|treePieceID;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
 */

void CProxy_DataManager::acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *responsible, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_responsible, impl_cnt_responsible;
  impl_off_responsible=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_responsible=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_responsible,responsible,impl_cnt_responsible);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_acceptResponsibleIndex_marshall2() {
  int epidx = CkRegisterEp("acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb)",
      _call_acceptResponsibleIndex_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptResponsibleIndex_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptResponsibleIndex_marshall2);

  return epidx;
}


void CkIndex_DataManager::_call_acceptResponsibleIndex_marshall2(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *responsible, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *responsible=(int *)(impl_buf+impl_off_responsible);
  impl_obj->acceptResponsibleIndex(responsible, n, cb);
}

int CkIndex_DataManager::_callmarshall_acceptResponsibleIndex_marshall2(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int *responsible, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *responsible=(int *)(impl_buf+impl_off_responsible);
  impl_obj->acceptResponsibleIndex(responsible, n, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_acceptResponsibleIndex_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *responsible, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *responsible=(int *)(impl_buf+impl_off_responsible);
  if (implDestP.hasComments()) implDestP.comment("responsible");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*responsible))<impl_cnt_responsible;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|responsible[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::acceptResponsibleIndex_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
 */

void CProxy_DataManager::acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  int impl_off_responsible, impl_cnt_responsible;
  impl_off_responsible=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_responsible=sizeof(int)*(n - 1));
  int impl_off_bins, impl_cnt_bins;
  impl_off_bins=impl_off=CK_ALIGN(impl_off,sizeof(uint64_t));
  impl_off+=(impl_cnt_bins=sizeof(uint64_t)*(n - 1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|impl_off_bins;
    implP|impl_cnt_bins;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|impl_off_bins;
    implP|impl_cnt_bins;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  memcpy(impl_buf+impl_off_responsible,responsible,impl_cnt_responsible);
  memcpy(impl_buf+impl_off_bins,bins,impl_cnt_bins);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_acceptFinalKeys_marshall3() {
  int epidx = CkRegisterEp("acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb)",
      _call_acceptFinalKeys_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptFinalKeys_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptFinalKeys_marshall3);

  return epidx;
}


void CkIndex_DataManager::_call_acceptFinalKeys_marshall3(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int impl_off_bins, impl_cnt_bins; 
  implP|impl_off_bins;
  implP|impl_cnt_bins;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  int *responsible=(int *)(impl_buf+impl_off_responsible);
  uint64_t *bins=(uint64_t *)(impl_buf+impl_off_bins);
  impl_obj->acceptFinalKeys(keys, responsible, bins, n, cb);
}

int CkIndex_DataManager::_callmarshall_acceptFinalKeys_marshall3(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int impl_off_bins, impl_cnt_bins; 
  implP|impl_off_bins;
  implP|impl_cnt_bins;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  int *responsible=(int *)(impl_buf+impl_off_responsible);
  uint64_t *bins=(uint64_t *)(impl_buf+impl_off_bins);
  impl_obj->acceptFinalKeys(keys, responsible, bins, n, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_acceptFinalKeys_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int impl_off_responsible, impl_cnt_responsible; 
  implP|impl_off_responsible;
  implP|impl_cnt_responsible;
  int impl_off_bins, impl_cnt_bins; 
  implP|impl_off_bins;
  implP|impl_cnt_bins;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  int *responsible=(int *)(impl_buf+impl_off_responsible);
  uint64_t *bins=(uint64_t *)(impl_buf+impl_off_bins);
  if (implDestP.hasComments()) implDestP.comment("keys");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*keys))<impl_cnt_keys;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|keys[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("responsible");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*responsible))<impl_cnt_responsible;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|responsible[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bins");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*bins))<impl_cnt_bins;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|bins[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::acceptFinalKeys_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combineLocalTrees(CkReductionMsg* impl_msg);
 */

void CProxy_DataManager::combineLocalTrees(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_combineLocalTrees_CkReductionMsg() {
  int epidx = CkRegisterEp("combineLocalTrees(CkReductionMsg* impl_msg)",
      _call_combineLocalTrees_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_DataManager::_call_combineLocalTrees_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  impl_obj->combineLocalTrees((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clearInstrument(const CkCallback &cb);
 */

void CProxy_DataManager::clearInstrument(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_clearInstrument_marshall5() {
  int epidx = CkRegisterEp("clearInstrument(const CkCallback &cb)",
      _call_clearInstrument_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_clearInstrument_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_clearInstrument_marshall5);

  return epidx;
}


void CkIndex_DataManager::_call_clearInstrument_marshall5(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->clearInstrument(cb);
}

int CkIndex_DataManager::_callmarshall_clearInstrument_marshall5(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->clearInstrument(cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_clearInstrument_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::clearInstrument_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
 */

void CProxy_DataManager::initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dGmPerCcUnit;
    implP|dComovingGmPerCcUnit;
    implP|dErgPerGmUnit;
    implP|dSecUnit;
    implP|dKpcUnit;
    //Have to cast away const-ness to get pup routine
    implP|(COOLPARAM &)inParam;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dGmPerCcUnit;
    implP|dComovingGmPerCcUnit;
    implP|dErgPerGmUnit;
    implP|dSecUnit;
    implP|dKpcUnit;
    //Have to cast away const-ness to get pup routine
    implP|(COOLPARAM &)inParam;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_initCooling_marshall6() {
  int epidx = CkRegisterEp("initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb)",
      _call_initCooling_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initCooling_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initCooling_marshall6);

  return epidx;
}


void CkIndex_DataManager::_call_initCooling_marshall6(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dGmPerCcUnit; implP|dGmPerCcUnit;
  double dComovingGmPerCcUnit; implP|dComovingGmPerCcUnit;
  double dErgPerGmUnit; implP|dErgPerGmUnit;
  double dSecUnit; implP|dSecUnit;
  double dKpcUnit; implP|dKpcUnit;
  COOLPARAM inParam; implP|inParam;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initCooling(dGmPerCcUnit, dComovingGmPerCcUnit, dErgPerGmUnit, dSecUnit, dKpcUnit, inParam, cb);
}

int CkIndex_DataManager::_callmarshall_initCooling_marshall6(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dGmPerCcUnit; implP|dGmPerCcUnit;
  double dComovingGmPerCcUnit; implP|dComovingGmPerCcUnit;
  double dErgPerGmUnit; implP|dErgPerGmUnit;
  double dSecUnit; implP|dSecUnit;
  double dKpcUnit; implP|dKpcUnit;
  COOLPARAM inParam; implP|inParam;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initCooling(dGmPerCcUnit, dComovingGmPerCcUnit, dErgPerGmUnit, dSecUnit, dKpcUnit, inParam, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_initCooling_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dGmPerCcUnit; implP|dGmPerCcUnit;
  double dComovingGmPerCcUnit; implP|dComovingGmPerCcUnit;
  double dErgPerGmUnit; implP|dErgPerGmUnit;
  double dSecUnit; implP|dSecUnit;
  double dKpcUnit; implP|dKpcUnit;
  COOLPARAM inParam; implP|inParam;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dGmPerCcUnit");
  implDestP|dGmPerCcUnit;
  if (implDestP.hasComments()) implDestP.comment("dComovingGmPerCcUnit");
  implDestP|dComovingGmPerCcUnit;
  if (implDestP.hasComments()) implDestP.comment("dErgPerGmUnit");
  implDestP|dErgPerGmUnit;
  if (implDestP.hasComments()) implDestP.comment("dSecUnit");
  implDestP|dSecUnit;
  if (implDestP.hasComments()) implDestP.comment("dKpcUnit");
  implDestP|dKpcUnit;
  if (implDestP.hasComments()) implDestP.comment("inParam");
  implDestP|inParam;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::initCooling_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
 */

void CProxy_DataManager::dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *dTableData, int nData, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dTableData, impl_cnt_dTableData;
  impl_off_dTableData=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dTableData=sizeof(double)*(nData));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dTableData;
    implP|impl_cnt_dTableData;
    implP|nData;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dTableData;
    implP|impl_cnt_dTableData;
    implP|nData;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dTableData,dTableData,impl_cnt_dTableData);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_dmCoolTableRead_marshall7() {
  int epidx = CkRegisterEp("dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb)",
      _call_dmCoolTableRead_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_dmCoolTableRead_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_dmCoolTableRead_marshall7);

  return epidx;
}


void CkIndex_DataManager::_call_dmCoolTableRead_marshall7(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const double *dTableData, int nData, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dTableData, impl_cnt_dTableData; 
  implP|impl_off_dTableData;
  implP|impl_cnt_dTableData;
  int nData; implP|nData;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dTableData=(double *)(impl_buf+impl_off_dTableData);
  impl_obj->dmCoolTableRead(dTableData, nData, cb);
}

int CkIndex_DataManager::_callmarshall_dmCoolTableRead_marshall7(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const double *dTableData, int nData, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dTableData, impl_cnt_dTableData; 
  implP|impl_off_dTableData;
  implP|impl_cnt_dTableData;
  int nData; implP|nData;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dTableData=(double *)(impl_buf+impl_off_dTableData);
  impl_obj->dmCoolTableRead(dTableData, nData, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_dmCoolTableRead_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const double *dTableData, int nData, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dTableData, impl_cnt_dTableData; 
  implP|impl_off_dTableData;
  implP|impl_cnt_dTableData;
  int nData; implP|nData;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dTableData=(double *)(impl_buf+impl_off_dTableData);
  if (implDestP.hasComments()) implDestP.comment("dTableData");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*dTableData))<impl_cnt_dTableData;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|dTableData[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nData");
  implDestP|nData;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::dmCoolTableRead_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
 */

void CProxy_DataManager::CoolingSetTime(double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double z, double dTime, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_CoolingSetTime_marshall8() {
  int epidx = CkRegisterEp("CoolingSetTime(double z, double dTime, const CkCallback &cb)",
      _call_CoolingSetTime_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CoolingSetTime_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CoolingSetTime_marshall8);

  return epidx;
}


void CkIndex_DataManager::_call_CoolingSetTime_marshall8(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double z, double dTime, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double z; implP|z;
  double dTime; implP|dTime;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->CoolingSetTime(z, dTime, cb);
}

int CkIndex_DataManager::_callmarshall_CoolingSetTime_marshall8(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: double z, double dTime, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double z; implP|z;
  double dTime; implP|dTime;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->CoolingSetTime(z, dTime, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_CoolingSetTime_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double z, double dTime, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double z; implP|z;
  double dTime; implP|dTime;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("z");
  implDestP|z;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::CoolingSetTime_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
 */

void CProxy_DataManager::SetStarCM(const double *dCenterOfMass, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *dCenterOfMass, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass;
  impl_off_dCenterOfMass=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dCenterOfMass=sizeof(double)*(4));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dCenterOfMass;
    implP|impl_cnt_dCenterOfMass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dCenterOfMass;
    implP|impl_cnt_dCenterOfMass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dCenterOfMass,dCenterOfMass,impl_cnt_dCenterOfMass);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_SetStarCM_marshall9() {
  int epidx = CkRegisterEp("SetStarCM(const double *dCenterOfMass, const CkCallback &cb)",
      _call_SetStarCM_marshall9, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_SetStarCM_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_SetStarCM_marshall9);

  return epidx;
}


void CkIndex_DataManager::_call_SetStarCM_marshall9(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const double *dCenterOfMass, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass; 
  implP|impl_off_dCenterOfMass;
  implP|impl_cnt_dCenterOfMass;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dCenterOfMass=(double *)(impl_buf+impl_off_dCenterOfMass);
  impl_obj->SetStarCM(dCenterOfMass, cb);
}

int CkIndex_DataManager::_callmarshall_SetStarCM_marshall9(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const double *dCenterOfMass, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass; 
  implP|impl_off_dCenterOfMass;
  implP|impl_cnt_dCenterOfMass;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dCenterOfMass=(double *)(impl_buf+impl_off_dCenterOfMass);
  impl_obj->SetStarCM(dCenterOfMass, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_SetStarCM_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const double *dCenterOfMass, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass; 
  implP|impl_off_dCenterOfMass;
  implP|impl_cnt_dCenterOfMass;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dCenterOfMass=(double *)(impl_buf+impl_off_dCenterOfMass);
  if (implDestP.hasComments()) implDestP.comment("dCenterOfMass");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*dCenterOfMass))<impl_cnt_dCenterOfMass;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|dCenterOfMass[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::SetStarCM_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void memoryStats(const CkCallback &cb);
 */

void CProxy_DataManager::memoryStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_memoryStats_marshall10() {
  int epidx = CkRegisterEp("memoryStats(const CkCallback &cb)",
      _call_memoryStats_marshall10, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_memoryStats_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_memoryStats_marshall10);

  return epidx;
}


void CkIndex_DataManager::_call_memoryStats_marshall10(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->memoryStats(cb);
}

int CkIndex_DataManager::_callmarshall_memoryStats_marshall10(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->memoryStats(cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_memoryStats_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::memoryStats_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
 */

void CProxy_DataManager::resetReadOnly(const Parameters &param, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Parameters &param, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Parameters &)param;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Parameters &)param;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_resetReadOnly_marshall11() {
  int epidx = CkRegisterEp("resetReadOnly(const Parameters &param, const CkCallback &cb)",
      _call_resetReadOnly_marshall11, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_resetReadOnly_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_resetReadOnly_marshall11);

  return epidx;
}


void CkIndex_DataManager::_call_resetReadOnly_marshall11(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Parameters &param, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Parameters param; implP|param;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resetReadOnly(param, cb);
}

int CkIndex_DataManager::_callmarshall_resetReadOnly_marshall11(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const Parameters &param, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Parameters param; implP|param;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resetReadOnly(param, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_resetReadOnly_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Parameters &param, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Parameters param; implP|param;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("param");
  implDestP|param;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::resetReadOnly_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
 */

void CProxy_DataManager::initStarLog(const std::string &_fileName, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::string &_fileName, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)_fileName;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)_fileName;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function

int CkIndex_DataManager::reg_initStarLog_marshall12() {
  int epidx = CkRegisterEp("initStarLog(const std::string &_fileName, const CkCallback &cb)",
      _call_initStarLog_marshall12, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initStarLog_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initStarLog_marshall12);

  return epidx;
}


void CkIndex_DataManager::_call_initStarLog_marshall12(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &_fileName, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string _fileName; implP|_fileName;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initStarLog(_fileName, cb);
}

int CkIndex_DataManager::_callmarshall_initStarLog_marshall12(char* impl_buf, void* impl_obj_void) {
  DataManager* impl_obj = static_cast< DataManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::string &_fileName, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string _fileName; implP|_fileName;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initStarLog(_fileName, cb);
  return implP.size();
}

void CkIndex_DataManager::_marshallmessagepup_initStarLog_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &_fileName, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string _fileName; implP|_fileName;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("_fileName");
  implDestP|_fileName;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DataManager::initStarLog_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataManager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_DataManager::reg_DataManager_CkMigrateMessage() {
  int epidx = CkRegisterEp("DataManager(CkMigrateMessage* impl_msg)",
      _call_DataManager_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_DataManager::_call_DataManager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  DataManager* impl_obj = static_cast<DataManager *>(impl_obj_void);
  new (impl_obj) DataManager((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataManager(const CkArrayID &treePieceID);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
 */

void CProxySection_DataManager::acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *responsible, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_responsible, impl_cnt_responsible;
  impl_off_responsible=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_responsible=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_responsible,responsible,impl_cnt_responsible);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_acceptResponsibleIndex_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
 */

void CProxySection_DataManager::acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  int impl_off_responsible, impl_cnt_responsible;
  impl_off_responsible=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_responsible=sizeof(int)*(n - 1));
  int impl_off_bins, impl_cnt_bins;
  impl_off_bins=impl_off=CK_ALIGN(impl_off,sizeof(uint64_t));
  impl_off+=(impl_cnt_bins=sizeof(uint64_t)*(n - 1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|impl_off_bins;
    implP|impl_cnt_bins;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|impl_off_responsible;
    implP|impl_cnt_responsible;
    implP|impl_off_bins;
    implP|impl_cnt_bins;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  memcpy(impl_buf+impl_off_responsible,responsible,impl_cnt_responsible);
  memcpy(impl_buf+impl_off_bins,bins,impl_cnt_bins);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_acceptFinalKeys_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combineLocalTrees(CkReductionMsg* impl_msg);
 */

void CProxySection_DataManager::combineLocalTrees(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_combineLocalTrees_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clearInstrument(const CkCallback &cb);
 */

void CProxySection_DataManager::clearInstrument(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_clearInstrument_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
 */

void CProxySection_DataManager::initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dGmPerCcUnit;
    implP|dComovingGmPerCcUnit;
    implP|dErgPerGmUnit;
    implP|dSecUnit;
    implP|dKpcUnit;
    //Have to cast away const-ness to get pup routine
    implP|(COOLPARAM &)inParam;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dGmPerCcUnit;
    implP|dComovingGmPerCcUnit;
    implP|dErgPerGmUnit;
    implP|dSecUnit;
    implP|dKpcUnit;
    //Have to cast away const-ness to get pup routine
    implP|(COOLPARAM &)inParam;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_initCooling_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
 */

void CProxySection_DataManager::dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *dTableData, int nData, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dTableData, impl_cnt_dTableData;
  impl_off_dTableData=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dTableData=sizeof(double)*(nData));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dTableData;
    implP|impl_cnt_dTableData;
    implP|nData;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dTableData;
    implP|impl_cnt_dTableData;
    implP|nData;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dTableData,dTableData,impl_cnt_dTableData);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_dmCoolTableRead_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
 */

void CProxySection_DataManager::CoolingSetTime(double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double z, double dTime, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_CoolingSetTime_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
 */

void CProxySection_DataManager::SetStarCM(const double *dCenterOfMass, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *dCenterOfMass, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dCenterOfMass, impl_cnt_dCenterOfMass;
  impl_off_dCenterOfMass=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dCenterOfMass=sizeof(double)*(4));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_dCenterOfMass;
    implP|impl_cnt_dCenterOfMass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_dCenterOfMass;
    implP|impl_cnt_dCenterOfMass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dCenterOfMass,dCenterOfMass,impl_cnt_dCenterOfMass);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_SetStarCM_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void memoryStats(const CkCallback &cb);
 */

void CProxySection_DataManager::memoryStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_memoryStats_marshall10(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetReadOnly(const Parameters &param, const CkCallback &cb);
 */

void CProxySection_DataManager::resetReadOnly(const Parameters &param, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Parameters &param, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Parameters &)param;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Parameters &)param;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_resetReadOnly_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initStarLog(const std::string &_fileName, const CkCallback &cb);
 */

void CProxySection_DataManager::initStarLog(const std::string &_fileName, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::string &_fileName, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)_fileName;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)_fileName;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_DataManager::idx_initStarLog_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_DataManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,DataManager::isIrreducible());
  // REG: DataManager(const CkArrayID &treePieceID);
  idx_DataManager_marshall1();

  // REG: void acceptResponsibleIndex(const int *responsible, int n, const CkCallback &cb);
  idx_acceptResponsibleIndex_marshall2();

  // REG: void acceptFinalKeys(const SFC::Key *keys, const int *responsible, const uint64_t *bins, int n, const CkCallback &cb);
  idx_acceptFinalKeys_marshall3();

  // REG: void combineLocalTrees(CkReductionMsg* impl_msg);
  idx_combineLocalTrees_CkReductionMsg();

  // REG: void clearInstrument(const CkCallback &cb);
  idx_clearInstrument_marshall5();

  // REG: void initCooling(double dGmPerCcUnit, double dComovingGmPerCcUnit, double dErgPerGmUnit, double dSecUnit, double dKpcUnit, const COOLPARAM &inParam, const CkCallback &cb);
  idx_initCooling_marshall6();

  // REG: void dmCoolTableRead(const double *dTableData, int nData, const CkCallback &cb);
  idx_dmCoolTableRead_marshall7();

  // REG: void CoolingSetTime(double z, double dTime, const CkCallback &cb);
  idx_CoolingSetTime_marshall8();

  // REG: void SetStarCM(const double *dCenterOfMass, const CkCallback &cb);
  idx_SetStarCM_marshall9();

  // REG: void memoryStats(const CkCallback &cb);
  idx_memoryStats_marshall10();

  // REG: void resetReadOnly(const Parameters &param, const CkCallback &cb);
  idx_resetReadOnly_marshall11();

  // REG: void initStarLog(const std::string &_fileName, const CkCallback &cb);
  idx_initStarLog_marshall12();

  // REG: DataManager(CkMigrateMessage* impl_msg);
  idx_DataManager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_DataManager_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array TreePiece: ArrayElement{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TreePiece::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreePiece(void);
 */

void CProxyElement_TreePiece::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_TreePiece::idx_TreePiece_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence(void);
 */

void CProxyElement_TreePiece::quiescence(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_quiescence_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void memCacheStats(const CkCallback &cb);
 */

void CProxyElement_TreePiece::memCacheStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_memCacheStats_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucket(dummyMsg* impl_msg);
 */

void CProxyElement_TreePiece::nextBucket(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucket_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketSmooth(dummyMsg* impl_msg);
 */

void CProxyElement_TreePiece::nextBucketSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucketSmooth_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketReSmooth(dummyMsg* impl_msg);
 */

void CProxyElement_TreePiece::nextBucketReSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucketReSmooth_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
 */

void CProxyElement_TreePiece::nextBucketMarkSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucketMarkSmooth_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
 */

void CProxyElement_TreePiece::setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nReplicas;
    //Have to cast away const-ness to get pup routine
    implP|(Vector3D<double > &)fPeriod;
    implP|bEwald;
    implP|fEwCut;
    implP|fEwhCut;
    implP|bPeriod;
    implP|bComove;
    implP|dRhoFac;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nReplicas;
    //Have to cast away const-ness to get pup routine
    implP|(Vector3D<double > &)fPeriod;
    implP|bEwald;
    implP|fEwCut;
    implP|fEwhCut;
    implP|bPeriod;
    implP|bComove;
    implP|dRhoFac;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setPeriodic_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldInit(void);
 */

void CProxyElement_TreePiece::EwaldInit(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_EwaldInit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCoolingData(const CkCallback &cb);
 */

void CProxyElement_TreePiece::initCoolingData(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initCoolingData_marshall10(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateEwald(dummyMsg* impl_msg);
 */

void CProxyElement_TreePiece::calculateEwald(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateEwald_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldGPUComplete(void);
 */

void CProxyElement_TreePiece::EwaldGPUComplete(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_EwaldGPUComplete_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldGPU(void);
 */

void CProxyElement_TreePiece::EwaldGPU(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_EwaldGPU_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void velScale(double dScale, const CkCallback &cb);
 */

void CProxyElement_TreePiece::velScale(double dScale, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dScale, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dScale;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dScale;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_velScale_marshall14(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
 */

void CProxyElement_TreePiece::loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::string &filename, double dTuFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_loadNChilada_marshall15(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
 */

void CProxyElement_TreePiece::readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    implP|bParaRead;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    implP|bParaRead;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_readFloatBinary_marshall16(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
 */

void CProxyElement_TreePiece::loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_loadTipsy_marshall17(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
 */

void CProxyElement_TreePiece::readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_readTipsyArray_marshall18(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetMetals(const CkCallback &cb);
 */

void CProxyElement_TreePiece::resetMetals(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_resetMetals_marshall19(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMaxIOrds(const CkCallback &cb);
 */

void CProxyElement_TreePiece::getMaxIOrds(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getMaxIOrds_marshall20(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RestartEnergy(double dTuFac, const CkCallback &cb);
 */

void CProxyElement_TreePiece::RestartEnergy(double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dTuFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_RestartEnergy_marshall21(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findTotalMass(const CkCallback &cb);
 */

void CProxyElement_TreePiece::findTotalMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_findTotalMass_marshall22(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTotalMass(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::recvTotalMass(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_recvTotalMass_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxyElement_TreePiece::setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iStage;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iStage;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setupWrite_marshall24(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
 */

void CProxyElement_TreePiece::parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iPass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iPass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_parallelWrite_marshall25(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxyElement_TreePiece::serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_serialWrite_marshall26(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxyElement_TreePiece::oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_particles, impl_cnt_particles;
  impl_off_particles=impl_off=CK_ALIGN(impl_off,sizeof(GravityParticle));
  impl_off+=(impl_cnt_particles=sizeof(GravityParticle)*(iOutParticles+2));
  int impl_off_pGas, impl_cnt_pGas;
  impl_off_pGas=impl_off=CK_ALIGN(impl_off,sizeof(extraSPHData));
  impl_off+=(impl_cnt_pGas=sizeof(extraSPHData)*(iOutSPH));
  int impl_off_pStar, impl_cnt_pStar;
  impl_off_pStar=impl_off=CK_ALIGN(impl_off,sizeof(extraStarData));
  impl_off+=(impl_cnt_pStar=sizeof(extraStarData)*(iOutStar));
  int impl_off_piSPH, impl_cnt_piSPH;
  impl_off_piSPH=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_piSPH=sizeof(int)*(iOutSPH));
  int impl_off_piStar, impl_cnt_piStar;
  impl_off_piStar=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_piStar=sizeof(int)*(iOutStar));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iIndex;
    implP|iOutParticles;
    implP|iOutSPH;
    implP|iOutStar;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|impl_off_piSPH;
    implP|impl_cnt_piSPH;
    implP|impl_off_piStar;
    implP|impl_cnt_piStar;
    implP|iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iIndex;
    implP|iOutParticles;
    implP|iOutSPH;
    implP|iOutStar;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|impl_off_piSPH;
    implP|impl_cnt_piSPH;
    implP|impl_off_piStar;
    implP|impl_cnt_piStar;
    implP|iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_particles,particles,impl_cnt_particles);
  memcpy(impl_buf+impl_off_pGas,pGas,impl_cnt_pGas);
  memcpy(impl_buf+impl_off_pStar,pStar,impl_cnt_pStar);
  memcpy(impl_buf+impl_off_piSPH,piSPH,impl_cnt_piSPH);
  memcpy(impl_buf+impl_off_piStar,piStar,impl_cnt_piStar);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeWrite_marshall27(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
 */

void CProxyElement_TreePiece::reOrder(const int64_t &nMaxOrder, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &nMaxOrder, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nMaxOrder;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nMaxOrder;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_reOrder_marshall28(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ioShuffle(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::ioShuffle(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ioShuffle_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */

void CProxyElement_TreePiece::ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ioAcceptSortedParticles_ParticleShuffleMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void assignKeys(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::assignKeys(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_assignKeys_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */

void CProxyElement_TreePiece::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_evaluateBoundaries_marshall32(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unshuffleParticles(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::unshuffleParticles(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_unshuffleParticles_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */

void CProxyElement_TreePiece::acceptSortedParticles(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_acceptSortedParticles_ParticleShuffleMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unshuffleParticlesWoDD(const CkCallback &cb);
 */

void CProxyElement_TreePiece::unshuffleParticlesWoDD(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_unshuffleParticlesWoDD_marshall35(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void shuffleAfterQD(void);
 */

void CProxyElement_TreePiece::shuffleAfterQD(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_shuffleAfterQD_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
 */

void CProxyElement_TreePiece::acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_acceptSortedParticlesFromOther_ParticleShuffleMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initORBPieces(const CkCallback &cb);
 */

void CProxyElement_TreePiece::initORBPieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initORBPieces_marshall38(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
 */

void CProxyElement_TreePiece::initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|myCount;
    implP|myCountGas;
    implP|myCountStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cback;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|myCount;
    implP|myCountGas;
    implP|myCountStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cback;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initBeforeORBSend_marshall39(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendORBParticles(void);
 */

void CProxyElement_TreePiece::sendORBParticles(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_sendORBParticles_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
 */

void CProxyElement_TreePiece::acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_particles, impl_cnt_particles;
  impl_off_particles=impl_off=CK_ALIGN(impl_off,sizeof(GravityParticle));
  impl_off+=(impl_cnt_particles=sizeof(GravityParticle)*(n));
  int impl_off_pGas, impl_cnt_pGas;
  impl_off_pGas=impl_off=CK_ALIGN(impl_off,sizeof(extraSPHData));
  impl_off+=(impl_cnt_pGas=sizeof(extraSPHData)*(nGasIn));
  int impl_off_pStar, impl_cnt_pStar;
  impl_off_pStar=impl_off=CK_ALIGN(impl_off,sizeof(extraStarData));
  impl_off+=(impl_cnt_pStar=sizeof(extraStarData)*(nStarIn));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|n;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|nGasIn;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|nStarIn;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|n;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|nGasIn;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|nStarIn;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_particles,particles,impl_cnt_particles);
  memcpy(impl_buf+impl_off_pGas,pGas,impl_cnt_pGas);
  memcpy(impl_buf+impl_off_pStar,pStar,impl_cnt_pStar);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_acceptORBParticles_marshall41(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
 */

void CProxyElement_TreePiece::finalizeBoundaries(ORBSplittersMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finalizeBoundaries_ORBSplittersMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
 */

void CProxyElement_TreePiece::evaluateParticleCounts(ORBSplittersMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_evaluateParticleCounts_ORBSplittersMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
 */

void CProxyElement_TreePiece::kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dDelta, impl_cnt_dDelta;
  impl_off_dDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dDelta=sizeof(double)*(MAXRUNG+1));
  int impl_off_duDelta, impl_cnt_duDelta;
  impl_off_duDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_duDelta=sizeof(double)*(MAXRUNG+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    implP|impl_off_dDelta;
    implP|impl_cnt_dDelta;
    implP|bClosing;
    implP|bNeedVPred;
    implP|bGasIsothermal;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    implP|impl_off_dDelta;
    implP|impl_cnt_dDelta;
    implP|bClosing;
    implP|bNeedVPred;
    implP|bGasIsothermal;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dDelta,dDelta,impl_cnt_dDelta);
  memcpy(impl_buf+impl_off_duDelta,duDelta,impl_cnt_duDelta);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_kick_marshall44(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initAccel(int iKickRung, const CkCallback &cb);
 */

void CProxyElement_TreePiece::initAccel(int iKickRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initAccel_marshall45(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
 */

void CProxyElement_TreePiece::adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    implP|bEpsAccStep;
    implP|bGravStep;
    implP|bSphStep;
    implP|bViscosityLimitdt;
    implP|dEta;
    implP|dEtaCourant;
    implP|dEtauDot;
    implP|dDelta;
    implP|dAccFac;
    implP|dCosmoFac;
    implP|dhMinOverSoft;
    implP|dResolveJeans;
    implP|bDoGas;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    implP|bEpsAccStep;
    implP|bGravStep;
    implP|bSphStep;
    implP|bViscosityLimitdt;
    implP|dEta;
    implP|dEtaCourant;
    implP|dEtauDot;
    implP|dDelta;
    implP|dAccFac;
    implP|dCosmoFac;
    implP|dhMinOverSoft;
    implP|dResolveJeans;
    implP|bDoGas;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_adjust_marshall46(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
 */

void CProxyElement_TreePiece::truncateRung(int iCurrMaxRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iCurrMaxRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iCurrMaxRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iCurrMaxRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_truncateRung_marshall47(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rungStats(const CkCallback &cb);
 */

void CProxyElement_TreePiece::rungStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_rungStats_marshall48(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void countActive(int activeRung, const CkCallback &cb);
 */

void CProxyElement_TreePiece::countActive(int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_countActive_marshall49(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void assignDomain(const CkCallback &cb);
 */

void CProxyElement_TreePiece::assignDomain(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_assignDomain_marshall50(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
 */

void CProxyElement_TreePiece::drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dDelta;
    implP|bNeedVPred;
    implP|bGasIsoThermal;
    implP|dvDelta;
    implP|duDelta;
    implP|nGrowMass;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)buildTree;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dDelta;
    implP|bNeedVPred;
    implP|bGasIsoThermal;
    implP|dvDelta;
    implP|duDelta;
    implP|nGrowMass;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)buildTree;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_drift_marshall51(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void starCenterOfMass(const CkCallback &cb);
 */

void CProxyElement_TreePiece::starCenterOfMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_starCenterOfMass_marshall52(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcEnergy(const CkCallback &cb);
 */

void CProxyElement_TreePiece::calcEnergy(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calcEnergy_marshall53(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void colNParts(const CkCallback &cb);
 */

void CProxyElement_TreePiece::colNParts(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_colNParts_marshall54(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
 */

void CProxyElement_TreePiece::newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const NewMaxOrder *nStarts, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_nStarts, impl_cnt_nStarts;
  impl_off_nStarts=impl_off=CK_ALIGN(impl_off,sizeof(NewMaxOrder));
  impl_off+=(impl_cnt_nStarts=sizeof(NewMaxOrder)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_nStarts;
    implP|impl_cnt_nStarts;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_nStarts;
    implP|impl_cnt_nStarts;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_nStarts,nStarts,impl_cnt_nStarts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_newOrder_marshall55(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
 */

void CProxyElement_TreePiece::setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalSPH;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalDark;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalSPH;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalDark;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setNParts_marshall56(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setSoft(double dSoft, const CkCallback &cb);
 */

void CProxyElement_TreePiece::setSoft(double dSoft, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dSoft, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dSoft;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dSoft;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setSoft_marshall57(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
 */

void CProxyElement_TreePiece::physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dSoftMax;
    implP|dFac;
    implP|bSoftMaxMul;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dSoftMax;
    implP|dFac;
    implP|bSoftMaxMul;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_physicalSoft_marshall58(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
 */

void CProxyElement_TreePiece::growMass(int nGrowMass, double dDeltaM, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nGrowMass, double dDeltaM, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nGrowMass;
    implP|dDeltaM;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nGrowMass;
    implP|dDeltaM;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_growMass_marshall59(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
 */

void CProxyElement_TreePiece::InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dTuFac, double z, double dTime, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dTuFac;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dTuFac;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_InitEnergy_marshall60(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
 */

void CProxyElement_TreePiece::updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_duDelta, impl_cnt_duDelta;
  impl_off_duDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_duDelta=sizeof(double)*(MAXRUNG+1));
  int impl_off_dStartTime, impl_cnt_dStartTime;
  impl_off_dStartTime=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dStartTime=sizeof(double)*(MAXRUNG+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    implP|impl_off_dStartTime;
    implP|impl_cnt_dStartTime;
    implP|bCool;
    implP|bAll;
    implP|bUpdateState;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    implP|impl_off_dStartTime;
    implP|impl_cnt_dStartTime;
    implP|bCool;
    implP|bAll;
    implP|bUpdateState;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_duDelta,duDelta,impl_cnt_duDelta);
  memcpy(impl_buf+impl_off_dStartTime,dStartTime,impl_cnt_dStartTime);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_updateuDot_marshall61(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
 */

void CProxyElement_TreePiece::ballMax(int activeRung, double dFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, double dFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|dFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|dFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ballMax_marshall62(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
 */

void CProxyElement_TreePiece::sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bOn, int activeRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bOn;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bOn;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_sphViscosityLimiter_marshall63(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
 */

void CProxyElement_TreePiece::getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double gamma, double gammam1, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gamma;
    implP|gammam1;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gamma;
    implP|gammam1;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getAdiabaticGasPressure_marshall64(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
 */

void CProxyElement_TreePiece::getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double gamma, double gammam1, double dResolveJeans, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gamma;
    implP|gammam1;
    implP|dResolveJeans;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gamma;
    implP|gammam1;
    implP|dResolveJeans;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getCoolingGasPressure_marshall65(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initRand(int iRand, const CkCallback &cb);
 */

void CProxyElement_TreePiece::initRand(int iRand, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iRand, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iRand;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iRand;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initRand_marshall66(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
 */

void CProxyElement_TreePiece::FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Stfm &)param;
    implP|dTime;
    implP|dDelta;
    implP|dCosmoFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Stfm &)param;
    implP|dTime;
    implP|dDelta;
    implP|dCosmoFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_FormStars_marshall67(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushStarLog(const CkCallback &cb);
 */

void CProxyElement_TreePiece::flushStarLog(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_flushStarLog_marshall68(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
 */

void CProxyElement_TreePiece::Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Fdbk &)fb;
    implP|dTime;
    implP|dDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Fdbk &)fb;
    implP|dTime;
    implP|dDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_Feedback_marshall69(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
 */

void CProxyElement_TreePiece::massMetalsEnergyCheck(int bPreDist, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bPreDist, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bPreDist;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bPreDist;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_massMetalsEnergyCheck_marshall70(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
 */

void CProxyElement_TreePiece::setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iSetMask, const char *file, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_file, impl_cnt_file;
  impl_off_file=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_file=sizeof(char)*(256));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iSetMask;
    implP|impl_off_file;
    implP|impl_cnt_file;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iSetMask;
    implP|impl_off_file;
    implP|impl_cnt_file;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_file,file,impl_cnt_file);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setTypeFromFile_marshall71(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCOM(const CkCallback &cb, int bLiveViz);
 */

void CProxyElement_TreePiece::getCOM(const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb, int bLiveViz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getCOM_marshall72(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
 */

void CProxyElement_TreePiece::getCOMByType(int iType, const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iType, const CkCallback &cb, int bLiveViz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iType;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iType;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getCOMByType_marshall73(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
 */

void CProxyElement_TreePiece::DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb, int liveVizDump
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|liveVizDump;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|liveVizDump;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_DumpFrame_marshall74(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
 */

void CProxyElement_TreePiece::liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_liveVizDumpFrameInit_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setProjections(int bOn);
 */

void CProxyElement_TreePiece::setProjections(int bOn, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bOn;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setProjections_marshall76(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void buildTree(int bucketSize, const CkCallback &cb);
 */

void CProxyElement_TreePiece::buildTree(int bucketSize, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bucketSize, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bucketSize;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bucketSize;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_buildTree_marshall77(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startOctTreeBuild(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::startOctTreeBuild(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startOctTreeBuild_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
 */

void CProxyElement_TreePiece::recvBoundary(const SFC::Key &key, const NborDir &dir, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const SFC::Key &key, const NborDir &dir
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(SFC::Key &)key;
    //Have to cast away const-ness to get pup routine
    implP|(NborDir &)dir;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(SFC::Key &)key;
    //Have to cast away const-ness to get pup routine
    implP|(NborDir &)dir;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_recvBoundary_marshall79(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvdBoundaries(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::recvdBoundaries(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_recvdBoundaries_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startORBTreeBuild(CkReductionMsg* impl_msg);
 */

void CProxyElement_TreePiece::startORBTreeBuild(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startORBTreeBuild_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
 */

void CProxyElement_TreePiece::startGravity(int activeRung, double myTheta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, double myTheta, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|myTheta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|myTheta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startGravity_marshall82(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
 */

void CProxyElement_TreePiece::startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_2;
    implP|iLowhFix;
    implP|nSmooth;
    implP|dfBall2OverSoft2;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_2;
    implP|iLowhFix;
    implP|nSmooth;
    implP|dfBall2OverSoft2;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startSmooth_marshall83(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
 */

void CProxyElement_TreePiece::startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startReSmooth_marshall84(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
 */

void CProxyElement_TreePiece::startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startMarkSmooth_marshall85(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishNodeCache(const CkCallback &cb);
 */

void CProxyElement_TreePiece::finishNodeCache(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finishNodeCache_marshall86(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
 */

void CProxyElement_TreePiece::requestRemoteMoments(const Tree::NodeKey &key, int sender, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Tree::NodeKey &key, int sender
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    implP|sender;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    implP|sender;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_requestRemoteMoments_marshall87(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
 */

void CProxyElement_TreePiece::receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeType &)type;
    implP|firstParticle;
    implP|numParticles;
    implP|remIdx;
    //Have to cast away const-ness to get pup routine
    implP|(MultipoleMoments &)moments;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)box;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)boxBall;
    implP|iParticleTypes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeType &)type;
    implP|firstParticle;
    implP|numParticles;
    implP|remIdx;
    //Have to cast away const-ness to get pup routine
    implP|(MultipoleMoments &)moments;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)box;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)boxBall;
    implP|iParticleTypes;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_receiveRemoteMoments_marshall88(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void commenceCalculateGravityLocal(void);
 */

void CProxyElement_TreePiece::commenceCalculateGravityLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_commenceCalculateGravityLocal_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
 */

void CProxyElement_TreePiece::calculateGravityRemote(ComputeChunkMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateGravityRemote_ComputeChunkMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateReSmoothLocal(void);
 */

void CProxyElement_TreePiece::calculateReSmoothLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateReSmoothLocal_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateMarkSmoothLocal(void);
 */

void CProxyElement_TreePiece::calculateMarkSmoothLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateMarkSmoothLocal_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishWalk(void);
 */

void CProxyElement_TreePiece::finishWalk(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finishWalk_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishSmoothWalk(void);
 */

void CProxyElement_TreePiece::finishSmoothWalk(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finishSmoothWalk_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxyElement_TreePiece::fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_fillRequestNode_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
 */

void CProxyElement_TreePiece::receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  TreePiece *obj = ckLocal();
#if CMK_ERROR_CHECKING
  if (obj==NULL) CkAbort("Trying to call a LOCAL entry method on a non-local element");
#endif
  LDObjHandle objHandle;
  int objstopped=0;
  _TRACE_BEGIN_EXECUTE_DETAILED(0,ForArrayEltMsg,(CkIndex_TreePiece::idx_receiveNodeCallback_marshall96()),CkMyPe(), 0, ((CkArrayIndex&)ckGetIndex()).getProjectionID(((CkGroupID)ckGetArrayID()).idx), obj);
#if CMK_LBDB_ON
  objHandle = obj->timingBeforeCall(&objstopped);
#endif
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_TreePiece::idx_receiveNodeCallback_marshall96(), obj, NULL);
#endif
   obj->receiveNodeCallback(impl_msg, chunk, reqID, awi, source);
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_TreePiece::idx_receiveNodeCallback_marshall96());
#endif
#if CMK_LBDB_ON
  obj->timingAfterCall(objHandle,&objstopped);
#endif
  _TRACE_END_EXECUTE();
  return;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxyElement_TreePiece::fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_fillRequestParticles_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxyElement_TreePiece::fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_fillRequestSmoothParticles_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
 */

void CProxyElement_TreePiece::flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_flushSmoothParticles_CkCacheFillMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

void CProxyElement_TreePiece::receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, Tree::NodeKey &remoteBucket, int awi, void* source, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  TreePiece *obj = ckLocal();
#if CMK_ERROR_CHECKING
  if (obj==NULL) CkAbort("Trying to call a LOCAL entry method on a non-local element");
#endif
  LDObjHandle objHandle;
  int objstopped=0;
  _TRACE_BEGIN_EXECUTE_DETAILED(0,ForArrayEltMsg,(CkIndex_TreePiece::idx_receiveParticlesCallback_marshall100()),CkMyPe(), 0, ((CkArrayIndex&)ckGetIndex()).getProjectionID(((CkGroupID)ckGetArrayID()).idx), obj);
#if CMK_LBDB_ON
  objHandle = obj->timingBeforeCall(&objstopped);
#endif
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_TreePiece::idx_receiveParticlesCallback_marshall100(), obj, NULL);
#endif
   obj->receiveParticlesCallback(impl_msg, num, chunk, reqID, remoteBucket, awi, source);
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_TreePiece::idx_receiveParticlesCallback_marshall100());
#endif
#if CMK_LBDB_ON
  obj->timingAfterCall(objHandle,&objstopped);
#endif
  _TRACE_END_EXECUTE();
  return;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

void CProxyElement_TreePiece::receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, Tree::NodeKey &remoteBucket, int awi, void* source, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  TreePiece *obj = ckLocal();
#if CMK_ERROR_CHECKING
  if (obj==NULL) CkAbort("Trying to call a LOCAL entry method on a non-local element");
#endif
  LDObjHandle objHandle;
  int objstopped=0;
  _TRACE_BEGIN_EXECUTE_DETAILED(0,ForArrayEltMsg,(CkIndex_TreePiece::idx_receiveParticlesFullCallback_marshall101()),CkMyPe(), 0, ((CkArrayIndex&)ckGetIndex()).getProjectionID(((CkGroupID)ckGetArrayID()).idx), obj);
#if CMK_LBDB_ON
  objHandle = obj->timingBeforeCall(&objstopped);
#endif
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_TreePiece::idx_receiveParticlesFullCallback_marshall101(), obj, NULL);
#endif
   obj->receiveParticlesFullCallback(impl_msg, num, chunk, reqID, remoteBucket, awi, source);
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_TreePiece::idx_receiveParticlesFullCallback_marshall101());
#endif
#if CMK_LBDB_ON
  obj->timingAfterCall(objHandle,&objstopped);
#endif
  _TRACE_END_EXECUTE();
  return;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startlb(const CkCallback &cb, int activeRung);
 */

void CProxyElement_TreePiece::startlb(const CkCallback &cb, int activeRung, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb, int activeRung
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|activeRung;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|activeRung;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startlb_marshall102(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync(void);
 */

void CProxyElement_TreePiece::ResumeFromSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ResumeFromSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
 */

void CProxyElement_TreePiece::getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &active_part, const int64_t &total_part
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)active_part;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)total_part;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)active_part;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)total_part;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getParticleInfoForLB_marshall104(),0);
}

void CkIndex_TreePiece::_call_redn_wrapper_getParticleInfoForLB_marshall104(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const int64_t &active_part, const int64_t &total_part*/
  PUP::fromMem implP(impl_buf);
  int64_t active_part; implP|active_part;
  int64_t total_part; implP|total_part;
  impl_obj->getParticleInfoForLB(active_part, total_part);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doAtSync(void);
 */

void CProxyElement_TreePiece::doAtSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_doAtSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
 */

void CProxyElement_TreePiece::outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)accelerationBox;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)suffix;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)accelerationBox;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)suffix;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputAccelerations_marshall106(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
 */

void CProxyElement_TreePiece::outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_5;
    implP|bParaWrite;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_5;
    implP|bParaWrite;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputASCII_marshall107(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */

void CProxyElement_TreePiece::oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_avOut, impl_cnt_avOut;
  impl_off_avOut=impl_off=CK_ALIGN(impl_off,sizeof(Vector3D<double >));
  impl_off+=(impl_cnt_avOut=sizeof(Vector3D<double >)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_6;
    implP|impl_off_avOut;
    implP|impl_cnt_avOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_6;
    implP|impl_off_avOut;
    implP|impl_cnt_avOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_avOut,avOut,impl_cnt_avOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutVec_marshall108(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */

void CProxyElement_TreePiece::oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_adOut, impl_cnt_adOut;
  impl_off_adOut=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_adOut=sizeof(double)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_7;
    implP|impl_off_adOut;
    implP|impl_cnt_adOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_7;
    implP|impl_off_adOut;
    implP|impl_cnt_adOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_adOut,adOut,impl_cnt_adOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutArr_marshall109(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
 */

void CProxyElement_TreePiece::outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Ck::IO::Session &)impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Ck::IO::Session &)impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_9;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputBinary_marshall110(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
 */

void CProxyElement_TreePiece::minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_minmaxNCOut_marshall111(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
 */

void CProxyElement_TreePiece::outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nStart;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nStart;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputBinaryStart_marshall112(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
 */

void CProxyElement_TreePiece::oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_aiOut, impl_cnt_aiOut;
  impl_off_aiOut=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_aiOut=sizeof(int)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_a;
    implP|impl_off_aiOut;
    implP|impl_cnt_aiOut;
    implP|nPart;
    implP|iIndex;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_a;
    implP|impl_off_aiOut;
    implP|impl_cnt_aiOut;
    implP|nPart;
    implP|iIndex;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_aiOut,aiOut,impl_cnt_aiOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutIntArr_marshall113(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputStatistics(const CkCallback &cb);
 */

void CProxyElement_TreePiece::outputStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputStatistics_marshall114(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectStatistics(const CkCallback &cb);
 */

void CProxyElement_TreePiece::collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_collectStatistics_marshall115(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void continueStartRemoteChunk(int chunk);
 */

void CProxyElement_TreePiece::continueStartRemoteChunk(int chunk, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int chunk
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|chunk;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|chunk;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_continueStartRemoteChunk_marshall116(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void continueWrapUp(void);
 */

void CProxyElement_TreePiece::continueWrapUp(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_continueWrapUp_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void balanceBeforeInitialForces(const CkCallback &cb);
 */

void CProxyElement_TreePiece::balanceBeforeInitialForces(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_balanceBeforeInitialForces_marshall118(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreePiece(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreePiece(void);
 */

CkArrayID CProxy_TreePiece::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TreePiece::idx_TreePiece_void(), opts);
}

void CProxy_TreePiece::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TreePiece::idx_TreePiece_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_TreePiece::ckNew(const int s1)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TreePiece::idx_TreePiece_void(), opts);
}

void CProxy_TreePiece::ckNew(const int s1, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TreePiece::idx_TreePiece_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_TreePiece::reg_TreePiece_void() {
  int epidx = CkRegisterEp("TreePiece(void)",
      _call_TreePiece_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_TreePiece_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) TreePiece();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence(void);
 */

void CProxy_TreePiece::quiescence(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_quiescence_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_quiescence_void() {
  int epidx = CkRegisterEp("quiescence(void)",
      _call_quiescence_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_quiescence_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->quiescence();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::quiescence_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void memCacheStats(const CkCallback &cb);
 */

void CProxy_TreePiece::memCacheStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_memCacheStats_marshall3(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_memCacheStats_marshall3() {
  int epidx = CkRegisterEp("memCacheStats(const CkCallback &cb)",
      _call_memCacheStats_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_memCacheStats_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_memCacheStats_marshall3);

  return epidx;
}


void CkIndex_TreePiece::_call_memCacheStats_marshall3(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->memCacheStats(cb);
}

int CkIndex_TreePiece::_callmarshall_memCacheStats_marshall3(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->memCacheStats(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_memCacheStats_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::memCacheStats_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucket(dummyMsg* impl_msg);
 */

void CProxy_TreePiece::nextBucket(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_nextBucket_dummyMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_nextBucket_dummyMsg() {
  int epidx = CkRegisterEp("nextBucket(dummyMsg* impl_msg)",
      _call_nextBucket_dummyMsg, CMessage_dummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)dummyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_nextBucket_dummyMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->nextBucket((dummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketSmooth(dummyMsg* impl_msg);
 */

void CProxy_TreePiece::nextBucketSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_nextBucketSmooth_dummyMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_nextBucketSmooth_dummyMsg() {
  int epidx = CkRegisterEp("nextBucketSmooth(dummyMsg* impl_msg)",
      _call_nextBucketSmooth_dummyMsg, CMessage_dummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)dummyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_nextBucketSmooth_dummyMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->nextBucketSmooth((dummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketReSmooth(dummyMsg* impl_msg);
 */

void CProxy_TreePiece::nextBucketReSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_nextBucketReSmooth_dummyMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_nextBucketReSmooth_dummyMsg() {
  int epidx = CkRegisterEp("nextBucketReSmooth(dummyMsg* impl_msg)",
      _call_nextBucketReSmooth_dummyMsg, CMessage_dummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)dummyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_nextBucketReSmooth_dummyMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->nextBucketReSmooth((dummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
 */

void CProxy_TreePiece::nextBucketMarkSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_nextBucketMarkSmooth_dummyMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_nextBucketMarkSmooth_dummyMsg() {
  int epidx = CkRegisterEp("nextBucketMarkSmooth(dummyMsg* impl_msg)",
      _call_nextBucketMarkSmooth_dummyMsg, CMessage_dummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)dummyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_nextBucketMarkSmooth_dummyMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->nextBucketMarkSmooth((dummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
 */

void CProxy_TreePiece::setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nReplicas;
    //Have to cast away const-ness to get pup routine
    implP|(Vector3D<double > &)fPeriod;
    implP|bEwald;
    implP|fEwCut;
    implP|fEwhCut;
    implP|bPeriod;
    implP|bComove;
    implP|dRhoFac;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nReplicas;
    //Have to cast away const-ness to get pup routine
    implP|(Vector3D<double > &)fPeriod;
    implP|bEwald;
    implP|fEwCut;
    implP|fEwhCut;
    implP|bPeriod;
    implP|bComove;
    implP|dRhoFac;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_setPeriodic_marshall8(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_setPeriodic_marshall8() {
  int epidx = CkRegisterEp("setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac)",
      _call_setPeriodic_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setPeriodic_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setPeriodic_marshall8);

  return epidx;
}


void CkIndex_TreePiece::_call_setPeriodic_marshall8(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac*/
  PUP::fromMem implP(impl_buf);
  int nReplicas; implP|nReplicas;
  Vector3D<double > fPeriod; implP|fPeriod;
  int bEwald; implP|bEwald;
  double fEwCut; implP|fEwCut;
  double fEwhCut; implP|fEwhCut;
  int bPeriod; implP|bPeriod;
  int bComove; implP|bComove;
  double dRhoFac; implP|dRhoFac;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setPeriodic(nReplicas, fPeriod, bEwald, fEwCut, fEwhCut, bPeriod, bComove, dRhoFac);
}

int CkIndex_TreePiece::_callmarshall_setPeriodic_marshall8(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac*/
  PUP::fromMem implP(impl_buf);
  int nReplicas; implP|nReplicas;
  Vector3D<double > fPeriod; implP|fPeriod;
  int bEwald; implP|bEwald;
  double fEwCut; implP|fEwCut;
  double fEwhCut; implP|fEwhCut;
  int bPeriod; implP|bPeriod;
  int bComove; implP|bComove;
  double dRhoFac; implP|dRhoFac;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setPeriodic(nReplicas, fPeriod, bEwald, fEwCut, fEwhCut, bPeriod, bComove, dRhoFac);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_setPeriodic_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac*/
  PUP::fromMem implP(impl_buf);
  int nReplicas; implP|nReplicas;
  Vector3D<double > fPeriod; implP|fPeriod;
  int bEwald; implP|bEwald;
  double fEwCut; implP|fEwCut;
  double fEwhCut; implP|fEwhCut;
  int bPeriod; implP|bPeriod;
  int bComove; implP|bComove;
  double dRhoFac; implP|dRhoFac;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nReplicas");
  implDestP|nReplicas;
  if (implDestP.hasComments()) implDestP.comment("fPeriod");
  implDestP|fPeriod;
  if (implDestP.hasComments()) implDestP.comment("bEwald");
  implDestP|bEwald;
  if (implDestP.hasComments()) implDestP.comment("fEwCut");
  implDestP|fEwCut;
  if (implDestP.hasComments()) implDestP.comment("fEwhCut");
  implDestP|fEwhCut;
  if (implDestP.hasComments()) implDestP.comment("bPeriod");
  implDestP|bPeriod;
  if (implDestP.hasComments()) implDestP.comment("bComove");
  implDestP|bComove;
  if (implDestP.hasComments()) implDestP.comment("dRhoFac");
  implDestP|dRhoFac;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::setPeriodic_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldInit(void);
 */

void CProxy_TreePiece::EwaldInit(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_EwaldInit_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_EwaldInit_void() {
  int epidx = CkRegisterEp("EwaldInit(void)",
      _call_EwaldInit_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_EwaldInit_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->EwaldInit();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::EwaldInit_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCoolingData(const CkCallback &cb);
 */

void CProxy_TreePiece::initCoolingData(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_initCoolingData_marshall10(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_initCoolingData_marshall10() {
  int epidx = CkRegisterEp("initCoolingData(const CkCallback &cb)",
      _call_initCoolingData_marshall10, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP+CK_EP_TRACEDISABLE);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initCoolingData_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initCoolingData_marshall10);

  return epidx;
}


void CkIndex_TreePiece::_call_initCoolingData_marshall10(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initCoolingData(cb);
}

int CkIndex_TreePiece::_callmarshall_initCoolingData_marshall10(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initCoolingData(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_initCoolingData_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::initCoolingData_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateEwald(dummyMsg* impl_msg);
 */

void CProxy_TreePiece::calculateEwald(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_calculateEwald_dummyMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_calculateEwald_dummyMsg() {
  int epidx = CkRegisterEp("calculateEwald(dummyMsg* impl_msg)",
      _call_calculateEwald_dummyMsg, CMessage_dummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)dummyMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_calculateEwald_dummyMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->calculateEwald((dummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldGPUComplete(void);
 */

void CProxy_TreePiece::EwaldGPUComplete(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_EwaldGPUComplete_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_EwaldGPUComplete_void() {
  int epidx = CkRegisterEp("EwaldGPUComplete(void)",
      _call_EwaldGPUComplete_void, 0, __idx, 0+CK_EP_TRACEDISABLE);
  return epidx;
}


void CkIndex_TreePiece::_call_EwaldGPUComplete_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->EwaldGPUComplete();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::EwaldGPUComplete_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldGPU(void);
 */

void CProxy_TreePiece::EwaldGPU(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_EwaldGPU_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_EwaldGPU_void() {
  int epidx = CkRegisterEp("EwaldGPU(void)",
      _call_EwaldGPU_void, 0, __idx, 0+CK_EP_TRACEDISABLE);
  return epidx;
}


void CkIndex_TreePiece::_call_EwaldGPU_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->EwaldGPU();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::EwaldGPU_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void velScale(double dScale, const CkCallback &cb);
 */

void CProxy_TreePiece::velScale(double dScale, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dScale, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dScale;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dScale;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_velScale_marshall14(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_velScale_marshall14() {
  int epidx = CkRegisterEp("velScale(double dScale, const CkCallback &cb)",
      _call_velScale_marshall14, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_velScale_marshall14);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_velScale_marshall14);

  return epidx;
}


void CkIndex_TreePiece::_call_velScale_marshall14(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dScale, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dScale; implP|dScale;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->velScale(dScale, cb);
}

int CkIndex_TreePiece::_callmarshall_velScale_marshall14(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dScale, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dScale; implP|dScale;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->velScale(dScale, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_velScale_marshall14(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dScale, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dScale; implP|dScale;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dScale");
  implDestP|dScale;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::velScale_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
 */

void CProxy_TreePiece::loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::string &filename, double dTuFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_loadNChilada_marshall15(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_loadNChilada_marshall15() {
  int epidx = CkRegisterEp("loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb)",
      _call_loadNChilada_marshall15, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_loadNChilada_marshall15);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_loadNChilada_marshall15);

  return epidx;
}


void CkIndex_TreePiece::_call_loadNChilada_marshall15(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &filename, double dTuFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string filename; implP|filename;
  double dTuFac; implP|dTuFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->loadNChilada(filename, dTuFac, cb);
}

int CkIndex_TreePiece::_callmarshall_loadNChilada_marshall15(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::string &filename, double dTuFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string filename; implP|filename;
  double dTuFac; implP|dTuFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->loadNChilada(filename, dTuFac, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_loadNChilada_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &filename, double dTuFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string filename; implP|filename;
  double dTuFac; implP|dTuFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("filename");
  implDestP|filename;
  if (implDestP.hasComments()) implDestP.comment("dTuFac");
  implDestP|dTuFac;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::loadNChilada_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
 */

void CProxy_TreePiece::readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    implP|bParaRead;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    implP|bParaRead;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_readFloatBinary_marshall16(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_readFloatBinary_marshall16() {
  int epidx = CkRegisterEp("readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb)",
      _call_readFloatBinary_marshall16, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_readFloatBinary_marshall16);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_readFloatBinary_marshall16);

  return epidx;
}


void CkIndex_TreePiece::_call_readFloatBinary_marshall16(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  int bParaRead; implP|bParaRead;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->readFloatBinary(params, bParaRead, cb);
}

int CkIndex_TreePiece::_callmarshall_readFloatBinary_marshall16(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  int bParaRead; implP|bParaRead;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->readFloatBinary(params, bParaRead, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_readFloatBinary_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  int bParaRead; implP|bParaRead;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("params");
  implDestP|params;
  if (implDestP.hasComments()) implDestP.comment("bParaRead");
  implDestP|bParaRead;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::readFloatBinary_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
 */

void CProxy_TreePiece::loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_loadTipsy_marshall17(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_loadTipsy_marshall17() {
  int epidx = CkRegisterEp("loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb)",
      _call_loadTipsy_marshall17, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_loadTipsy_marshall17);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_loadTipsy_marshall17);

  return epidx;
}


void CkIndex_TreePiece::_call_loadTipsy_marshall17(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string filename; implP|filename;
  double dTuFac; implP|dTuFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->loadTipsy(filename, dTuFac, bDoublePos, bDoubleVel, cb);
}

int CkIndex_TreePiece::_callmarshall_loadTipsy_marshall17(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string filename; implP|filename;
  double dTuFac; implP|dTuFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->loadTipsy(filename, dTuFac, bDoublePos, bDoubleVel, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_loadTipsy_marshall17(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  std::string filename; implP|filename;
  double dTuFac; implP|dTuFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("filename");
  implDestP|filename;
  if (implDestP.hasComments()) implDestP.comment("dTuFac");
  implDestP|dTuFac;
  if (implDestP.hasComments()) implDestP.comment("bDoublePos");
  implDestP|bDoublePos;
  if (implDestP.hasComments()) implDestP.comment("bDoubleVel");
  implDestP|bDoubleVel;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::loadTipsy_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
 */

void CProxy_TreePiece::readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_readTipsyArray_marshall18(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_readTipsyArray_marshall18() {
  int epidx = CkRegisterEp("readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb)",
      _call_readTipsyArray_marshall18, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_readTipsyArray_marshall18);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_readTipsyArray_marshall18);

  return epidx;
}


void CkIndex_TreePiece::_call_readTipsyArray_marshall18(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->readTipsyArray(params, cb);
}

int CkIndex_TreePiece::_callmarshall_readTipsyArray_marshall18(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->readTipsyArray(params, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_readTipsyArray_marshall18(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("params");
  implDestP|params;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::readTipsyArray_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetMetals(const CkCallback &cb);
 */

void CProxy_TreePiece::resetMetals(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_resetMetals_marshall19(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_resetMetals_marshall19() {
  int epidx = CkRegisterEp("resetMetals(const CkCallback &cb)",
      _call_resetMetals_marshall19, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_resetMetals_marshall19);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_resetMetals_marshall19);

  return epidx;
}


void CkIndex_TreePiece::_call_resetMetals_marshall19(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resetMetals(cb);
}

int CkIndex_TreePiece::_callmarshall_resetMetals_marshall19(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resetMetals(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_resetMetals_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::resetMetals_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMaxIOrds(const CkCallback &cb);
 */

void CProxy_TreePiece::getMaxIOrds(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_getMaxIOrds_marshall20(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_getMaxIOrds_marshall20() {
  int epidx = CkRegisterEp("getMaxIOrds(const CkCallback &cb)",
      _call_getMaxIOrds_marshall20, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getMaxIOrds_marshall20);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getMaxIOrds_marshall20);

  return epidx;
}


void CkIndex_TreePiece::_call_getMaxIOrds_marshall20(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getMaxIOrds(cb);
}

int CkIndex_TreePiece::_callmarshall_getMaxIOrds_marshall20(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getMaxIOrds(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_getMaxIOrds_marshall20(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::getMaxIOrds_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RestartEnergy(double dTuFac, const CkCallback &cb);
 */

void CProxy_TreePiece::RestartEnergy(double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dTuFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_RestartEnergy_marshall21(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_RestartEnergy_marshall21() {
  int epidx = CkRegisterEp("RestartEnergy(double dTuFac, const CkCallback &cb)",
      _call_RestartEnergy_marshall21, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_RestartEnergy_marshall21);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_RestartEnergy_marshall21);

  return epidx;
}


void CkIndex_TreePiece::_call_RestartEnergy_marshall21(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dTuFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dTuFac; implP|dTuFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->RestartEnergy(dTuFac, cb);
}

int CkIndex_TreePiece::_callmarshall_RestartEnergy_marshall21(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dTuFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dTuFac; implP|dTuFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->RestartEnergy(dTuFac, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_RestartEnergy_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dTuFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dTuFac; implP|dTuFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dTuFac");
  implDestP|dTuFac;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::RestartEnergy_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findTotalMass(const CkCallback &cb);
 */

void CProxy_TreePiece::findTotalMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_findTotalMass_marshall22(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_findTotalMass_marshall22() {
  int epidx = CkRegisterEp("findTotalMass(const CkCallback &cb)",
      _call_findTotalMass_marshall22, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_findTotalMass_marshall22);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_findTotalMass_marshall22);

  return epidx;
}


void CkIndex_TreePiece::_call_findTotalMass_marshall22(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->findTotalMass(cb);
}

int CkIndex_TreePiece::_callmarshall_findTotalMass_marshall22(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->findTotalMass(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_findTotalMass_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::findTotalMass_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTotalMass(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::recvTotalMass(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_recvTotalMass_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_recvTotalMass_CkReductionMsg() {
  int epidx = CkRegisterEp("recvTotalMass(CkReductionMsg* impl_msg)",
      _call_recvTotalMass_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_recvTotalMass_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->recvTotalMass((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxy_TreePiece::setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iStage;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iStage;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_setupWrite_marshall24(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_setupWrite_marshall24() {
  int epidx = CkRegisterEp("setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb)",
      _call_setupWrite_marshall24, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setupWrite_marshall24);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setupWrite_marshall24);

  return epidx;
}


void CkIndex_TreePiece::_call_setupWrite_marshall24(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iStage; implP|iStage;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTfac; implP|duTfac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setupWrite(iStage, iPrevOffset, filename, dTime, dvFac, duTfac, bDoublePos, bDoubleVel, bCool, cb);
}

int CkIndex_TreePiece::_callmarshall_setupWrite_marshall24(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iStage; implP|iStage;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTfac; implP|duTfac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setupWrite(iStage, iPrevOffset, filename, dTime, dvFac, duTfac, bDoublePos, bDoubleVel, bCool, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_setupWrite_marshall24(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iStage; implP|iStage;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTfac; implP|duTfac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iStage");
  implDestP|iStage;
  if (implDestP.hasComments()) implDestP.comment("iPrevOffset");
  implDestP|iPrevOffset;
  if (implDestP.hasComments()) implDestP.comment("filename");
  implDestP|filename;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("dvFac");
  implDestP|dvFac;
  if (implDestP.hasComments()) implDestP.comment("duTfac");
  implDestP|duTfac;
  if (implDestP.hasComments()) implDestP.comment("bDoublePos");
  implDestP|bDoublePos;
  if (implDestP.hasComments()) implDestP.comment("bDoubleVel");
  implDestP|bDoubleVel;
  if (implDestP.hasComments()) implDestP.comment("bCool");
  implDestP|bCool;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::setupWrite_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
 */

void CProxy_TreePiece::parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iPass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iPass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_parallelWrite_marshall25(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_parallelWrite_marshall25() {
  int epidx = CkRegisterEp("parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool)",
      _call_parallelWrite_marshall25, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_parallelWrite_marshall25);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_parallelWrite_marshall25);

  return epidx;
}


void CkIndex_TreePiece::_call_parallelWrite_marshall25(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool*/
  PUP::fromMem implP(impl_buf);
  int iPass; implP|iPass;
  CkCallback cb; implP|cb;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->parallelWrite(iPass, cb, filename, dTime, dvFac, duTFac, bDoublePos, bDoubleVel, bCool);
}

int CkIndex_TreePiece::_callmarshall_parallelWrite_marshall25(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool*/
  PUP::fromMem implP(impl_buf);
  int iPass; implP|iPass;
  CkCallback cb; implP|cb;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->parallelWrite(iPass, cb, filename, dTime, dvFac, duTFac, bDoublePos, bDoubleVel, bCool);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_parallelWrite_marshall25(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool*/
  PUP::fromMem implP(impl_buf);
  int iPass; implP|iPass;
  CkCallback cb; implP|cb;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iPass");
  implDestP|iPass;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("filename");
  implDestP|filename;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("dvFac");
  implDestP|dvFac;
  if (implDestP.hasComments()) implDestP.comment("duTFac");
  implDestP|duTFac;
  if (implDestP.hasComments()) implDestP.comment("bDoublePos");
  implDestP|bDoublePos;
  if (implDestP.hasComments()) implDestP.comment("bDoubleVel");
  implDestP|bDoubleVel;
  if (implDestP.hasComments()) implDestP.comment("bCool");
  implDestP|bCool;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::parallelWrite_25_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxy_TreePiece::serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_serialWrite_marshall26(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_serialWrite_marshall26() {
  int epidx = CkRegisterEp("serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb)",
      _call_serialWrite_marshall26, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_serialWrite_marshall26);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_serialWrite_marshall26);

  return epidx;
}


void CkIndex_TreePiece::_call_serialWrite_marshall26(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTfac; implP|duTfac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->serialWrite(iPrevOffset, filename, dTime, dvFac, duTfac, bDoublePos, bDoubleVel, bCool, cb);
}

int CkIndex_TreePiece::_callmarshall_serialWrite_marshall26(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTfac; implP|duTfac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->serialWrite(iPrevOffset, filename, dTime, dvFac, duTfac, bDoublePos, bDoubleVel, bCool, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_serialWrite_marshall26(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTfac; implP|duTfac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iPrevOffset");
  implDestP|iPrevOffset;
  if (implDestP.hasComments()) implDestP.comment("filename");
  implDestP|filename;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("dvFac");
  implDestP|dvFac;
  if (implDestP.hasComments()) implDestP.comment("duTfac");
  implDestP|duTfac;
  if (implDestP.hasComments()) implDestP.comment("bDoublePos");
  implDestP|bDoublePos;
  if (implDestP.hasComments()) implDestP.comment("bDoubleVel");
  implDestP|bDoubleVel;
  if (implDestP.hasComments()) implDestP.comment("bCool");
  implDestP|bCool;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::serialWrite_26_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxy_TreePiece::oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_particles, impl_cnt_particles;
  impl_off_particles=impl_off=CK_ALIGN(impl_off,sizeof(GravityParticle));
  impl_off+=(impl_cnt_particles=sizeof(GravityParticle)*(iOutParticles+2));
  int impl_off_pGas, impl_cnt_pGas;
  impl_off_pGas=impl_off=CK_ALIGN(impl_off,sizeof(extraSPHData));
  impl_off+=(impl_cnt_pGas=sizeof(extraSPHData)*(iOutSPH));
  int impl_off_pStar, impl_cnt_pStar;
  impl_off_pStar=impl_off=CK_ALIGN(impl_off,sizeof(extraStarData));
  impl_off+=(impl_cnt_pStar=sizeof(extraStarData)*(iOutStar));
  int impl_off_piSPH, impl_cnt_piSPH;
  impl_off_piSPH=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_piSPH=sizeof(int)*(iOutSPH));
  int impl_off_piStar, impl_cnt_piStar;
  impl_off_piStar=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_piStar=sizeof(int)*(iOutStar));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iIndex;
    implP|iOutParticles;
    implP|iOutSPH;
    implP|iOutStar;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|impl_off_piSPH;
    implP|impl_cnt_piSPH;
    implP|impl_off_piStar;
    implP|impl_cnt_piStar;
    implP|iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iIndex;
    implP|iOutParticles;
    implP|iOutSPH;
    implP|iOutStar;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|impl_off_piSPH;
    implP|impl_cnt_piSPH;
    implP|impl_off_piStar;
    implP|impl_cnt_piStar;
    implP|iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_particles,particles,impl_cnt_particles);
  memcpy(impl_buf+impl_off_pGas,pGas,impl_cnt_pGas);
  memcpy(impl_buf+impl_off_pStar,pStar,impl_cnt_pStar);
  memcpy(impl_buf+impl_off_piSPH,piSPH,impl_cnt_piSPH);
  memcpy(impl_buf+impl_off_piStar,piStar,impl_cnt_piStar);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_oneNodeWrite_marshall27(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_oneNodeWrite_marshall27() {
  int epidx = CkRegisterEp("oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb)",
      _call_oneNodeWrite_marshall27, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_oneNodeWrite_marshall27);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_oneNodeWrite_marshall27);

  return epidx;
}


void CkIndex_TreePiece::_call_oneNodeWrite_marshall27(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iIndex; implP|iIndex;
  int iOutParticles; implP|iOutParticles;
  int iOutSPH; implP|iOutSPH;
  int iOutStar; implP|iOutStar;
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int impl_off_piSPH, impl_cnt_piSPH; 
  implP|impl_off_piSPH;
  implP|impl_cnt_piSPH;
  int impl_off_piStar, impl_cnt_piStar; 
  implP|impl_off_piStar;
  implP|impl_cnt_piStar;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  GravityParticle *particles=(GravityParticle *)(impl_buf+impl_off_particles);
  extraSPHData *pGas=(extraSPHData *)(impl_buf+impl_off_pGas);
  extraStarData *pStar=(extraStarData *)(impl_buf+impl_off_pStar);
  int *piSPH=(int *)(impl_buf+impl_off_piSPH);
  int *piStar=(int *)(impl_buf+impl_off_piStar);
  impl_obj->oneNodeWrite(iIndex, iOutParticles, iOutSPH, iOutStar, particles, pGas, pStar, piSPH, piStar, iPrevOffset, filename, dTime, dvFac, duTFac, bDoublePos, bDoubleVel, bCool, cb);
}

int CkIndex_TreePiece::_callmarshall_oneNodeWrite_marshall27(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iIndex; implP|iIndex;
  int iOutParticles; implP|iOutParticles;
  int iOutSPH; implP|iOutSPH;
  int iOutStar; implP|iOutStar;
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int impl_off_piSPH, impl_cnt_piSPH; 
  implP|impl_off_piSPH;
  implP|impl_cnt_piSPH;
  int impl_off_piStar, impl_cnt_piStar; 
  implP|impl_off_piStar;
  implP|impl_cnt_piStar;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  GravityParticle *particles=(GravityParticle *)(impl_buf+impl_off_particles);
  extraSPHData *pGas=(extraSPHData *)(impl_buf+impl_off_pGas);
  extraStarData *pStar=(extraStarData *)(impl_buf+impl_off_pStar);
  int *piSPH=(int *)(impl_buf+impl_off_piSPH);
  int *piStar=(int *)(impl_buf+impl_off_piStar);
  impl_obj->oneNodeWrite(iIndex, iOutParticles, iOutSPH, iOutStar, particles, pGas, pStar, piSPH, piStar, iPrevOffset, filename, dTime, dvFac, duTFac, bDoublePos, bDoubleVel, bCool, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_oneNodeWrite_marshall27(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iIndex; implP|iIndex;
  int iOutParticles; implP|iOutParticles;
  int iOutSPH; implP|iOutSPH;
  int iOutStar; implP|iOutStar;
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int impl_off_piSPH, impl_cnt_piSPH; 
  implP|impl_off_piSPH;
  implP|impl_cnt_piSPH;
  int impl_off_piStar, impl_cnt_piStar; 
  implP|impl_off_piStar;
  implP|impl_cnt_piStar;
  u_int64_t iPrevOffset; implP|iPrevOffset;
  std::string filename; implP|filename;
  double dTime; implP|dTime;
  double dvFac; implP|dvFac;
  double duTFac; implP|duTFac;
  bool bDoublePos; implP|bDoublePos;
  bool bDoubleVel; implP|bDoubleVel;
  int bCool; implP|bCool;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  GravityParticle *particles=(GravityParticle *)(impl_buf+impl_off_particles);
  extraSPHData *pGas=(extraSPHData *)(impl_buf+impl_off_pGas);
  extraStarData *pStar=(extraStarData *)(impl_buf+impl_off_pStar);
  int *piSPH=(int *)(impl_buf+impl_off_piSPH);
  int *piStar=(int *)(impl_buf+impl_off_piStar);
  if (implDestP.hasComments()) implDestP.comment("iIndex");
  implDestP|iIndex;
  if (implDestP.hasComments()) implDestP.comment("iOutParticles");
  implDestP|iOutParticles;
  if (implDestP.hasComments()) implDestP.comment("iOutSPH");
  implDestP|iOutSPH;
  if (implDestP.hasComments()) implDestP.comment("iOutStar");
  implDestP|iOutStar;
  if (implDestP.hasComments()) implDestP.comment("particles");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*particles))<impl_cnt_particles;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|particles[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("pGas");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*pGas))<impl_cnt_pGas;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|pGas[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("pStar");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*pStar))<impl_cnt_pStar;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|pStar[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("piSPH");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*piSPH))<impl_cnt_piSPH;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|piSPH[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("piStar");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*piStar))<impl_cnt_piStar;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|piStar[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("iPrevOffset");
  implDestP|iPrevOffset;
  if (implDestP.hasComments()) implDestP.comment("filename");
  implDestP|filename;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("dvFac");
  implDestP|dvFac;
  if (implDestP.hasComments()) implDestP.comment("duTFac");
  implDestP|duTFac;
  if (implDestP.hasComments()) implDestP.comment("bDoublePos");
  implDestP|bDoublePos;
  if (implDestP.hasComments()) implDestP.comment("bDoubleVel");
  implDestP|bDoubleVel;
  if (implDestP.hasComments()) implDestP.comment("bCool");
  implDestP|bCool;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::oneNodeWrite_27_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
 */

void CProxy_TreePiece::reOrder(const int64_t &nMaxOrder, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &nMaxOrder, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nMaxOrder;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nMaxOrder;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_reOrder_marshall28(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_reOrder_marshall28() {
  int epidx = CkRegisterEp("reOrder(const int64_t &nMaxOrder, const CkCallback &cb)",
      _call_reOrder_marshall28, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reOrder_marshall28);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reOrder_marshall28);

  return epidx;
}


void CkIndex_TreePiece::_call_reOrder_marshall28(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int64_t &nMaxOrder, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int64_t nMaxOrder; implP|nMaxOrder;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reOrder(nMaxOrder, cb);
}

int CkIndex_TreePiece::_callmarshall_reOrder_marshall28(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int64_t &nMaxOrder, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int64_t nMaxOrder; implP|nMaxOrder;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reOrder(nMaxOrder, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_reOrder_marshall28(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int64_t &nMaxOrder, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int64_t nMaxOrder; implP|nMaxOrder;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nMaxOrder");
  implDestP|nMaxOrder;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::reOrder_28_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ioShuffle(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::ioShuffle(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_ioShuffle_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_ioShuffle_CkReductionMsg() {
  int epidx = CkRegisterEp("ioShuffle(CkReductionMsg* impl_msg)",
      _call_ioShuffle_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_ioShuffle_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->ioShuffle((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */

void CProxy_TreePiece::ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_ioAcceptSortedParticles_ParticleShuffleMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_ioAcceptSortedParticles_ParticleShuffleMsg() {
  int epidx = CkRegisterEp("ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg)",
      _call_ioAcceptSortedParticles_ParticleShuffleMsg, CMessage_ParticleShuffleMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ParticleShuffleMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_ioAcceptSortedParticles_ParticleShuffleMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->ioAcceptSortedParticles((ParticleShuffleMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void assignKeys(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::assignKeys(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_assignKeys_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_assignKeys_CkReductionMsg() {
  int epidx = CkRegisterEp("assignKeys(CkReductionMsg* impl_msg)",
      _call_assignKeys_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_assignKeys_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->assignKeys((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */

void CProxy_TreePiece::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_evaluateBoundaries_marshall32(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_evaluateBoundaries_marshall32() {
  int epidx = CkRegisterEp("evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb)",
      _call_evaluateBoundaries_marshall32, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_evaluateBoundaries_marshall32);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_evaluateBoundaries_marshall32);

  return epidx;
}


void CkIndex_TreePiece::_call_evaluateBoundaries_marshall32(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  impl_obj->evaluateBoundaries(keys, n, isRefine, cb);
}

int CkIndex_TreePiece::_callmarshall_evaluateBoundaries_marshall32(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  impl_obj->evaluateBoundaries(keys, n, isRefine, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_evaluateBoundaries_marshall32(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_keys, impl_cnt_keys; 
  implP|impl_off_keys;
  implP|impl_cnt_keys;
  int n; implP|n;
  int isRefine; implP|isRefine;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  SFC::Key *keys=(SFC::Key *)(impl_buf+impl_off_keys);
  if (implDestP.hasComments()) implDestP.comment("keys");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*keys))<impl_cnt_keys;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|keys[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("isRefine");
  implDestP|isRefine;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::evaluateBoundaries_32_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unshuffleParticles(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::unshuffleParticles(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_unshuffleParticles_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_unshuffleParticles_CkReductionMsg() {
  int epidx = CkRegisterEp("unshuffleParticles(CkReductionMsg* impl_msg)",
      _call_unshuffleParticles_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_unshuffleParticles_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->unshuffleParticles((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */

void CProxy_TreePiece::acceptSortedParticles(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_acceptSortedParticles_ParticleShuffleMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_acceptSortedParticles_ParticleShuffleMsg() {
  int epidx = CkRegisterEp("acceptSortedParticles(ParticleShuffleMsg* impl_msg)",
      _call_acceptSortedParticles_ParticleShuffleMsg, CMessage_ParticleShuffleMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ParticleShuffleMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_acceptSortedParticles_ParticleShuffleMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->acceptSortedParticles((ParticleShuffleMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unshuffleParticlesWoDD(const CkCallback &cb);
 */

void CProxy_TreePiece::unshuffleParticlesWoDD(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_unshuffleParticlesWoDD_marshall35(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_unshuffleParticlesWoDD_marshall35() {
  int epidx = CkRegisterEp("unshuffleParticlesWoDD(const CkCallback &cb)",
      _call_unshuffleParticlesWoDD_marshall35, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_unshuffleParticlesWoDD_marshall35);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unshuffleParticlesWoDD_marshall35);

  return epidx;
}


void CkIndex_TreePiece::_call_unshuffleParticlesWoDD_marshall35(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unshuffleParticlesWoDD(cb);
}

int CkIndex_TreePiece::_callmarshall_unshuffleParticlesWoDD_marshall35(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unshuffleParticlesWoDD(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_unshuffleParticlesWoDD_marshall35(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::unshuffleParticlesWoDD_35_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void shuffleAfterQD(void);
 */

void CProxy_TreePiece::shuffleAfterQD(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_shuffleAfterQD_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_shuffleAfterQD_void() {
  int epidx = CkRegisterEp("shuffleAfterQD(void)",
      _call_shuffleAfterQD_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_shuffleAfterQD_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->shuffleAfterQD();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::shuffleAfterQD_36_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
 */

void CProxy_TreePiece::acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_acceptSortedParticlesFromOther_ParticleShuffleMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_acceptSortedParticlesFromOther_ParticleShuffleMsg() {
  int epidx = CkRegisterEp("acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg)",
      _call_acceptSortedParticlesFromOther_ParticleShuffleMsg, CMessage_ParticleShuffleMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ParticleShuffleMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_acceptSortedParticlesFromOther_ParticleShuffleMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->acceptSortedParticlesFromOther((ParticleShuffleMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initORBPieces(const CkCallback &cb);
 */

void CProxy_TreePiece::initORBPieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_initORBPieces_marshall38(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_initORBPieces_marshall38() {
  int epidx = CkRegisterEp("initORBPieces(const CkCallback &cb)",
      _call_initORBPieces_marshall38, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initORBPieces_marshall38);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initORBPieces_marshall38);

  return epidx;
}


void CkIndex_TreePiece::_call_initORBPieces_marshall38(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initORBPieces(cb);
}

int CkIndex_TreePiece::_callmarshall_initORBPieces_marshall38(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initORBPieces(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_initORBPieces_marshall38(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::initORBPieces_38_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
 */

void CProxy_TreePiece::initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|myCount;
    implP|myCountGas;
    implP|myCountStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cback;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|myCount;
    implP|myCountGas;
    implP|myCountStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cback;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_initBeforeORBSend_marshall39(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_initBeforeORBSend_marshall39() {
  int epidx = CkRegisterEp("initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback)",
      _call_initBeforeORBSend_marshall39, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initBeforeORBSend_marshall39);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initBeforeORBSend_marshall39);

  return epidx;
}


void CkIndex_TreePiece::_call_initBeforeORBSend_marshall39(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback*/
  PUP::fromMem implP(impl_buf);
  unsigned int myCount; implP|myCount;
  unsigned int myCountGas; implP|myCountGas;
  unsigned int myCountStar; implP|myCountStar;
  CkCallback cb; implP|cb;
  CkCallback cback; implP|cback;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initBeforeORBSend(myCount, myCountGas, myCountStar, cb, cback);
}

int CkIndex_TreePiece::_callmarshall_initBeforeORBSend_marshall39(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback*/
  PUP::fromMem implP(impl_buf);
  unsigned int myCount; implP|myCount;
  unsigned int myCountGas; implP|myCountGas;
  unsigned int myCountStar; implP|myCountStar;
  CkCallback cb; implP|cb;
  CkCallback cback; implP|cback;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initBeforeORBSend(myCount, myCountGas, myCountStar, cb, cback);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_initBeforeORBSend_marshall39(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback*/
  PUP::fromMem implP(impl_buf);
  unsigned int myCount; implP|myCount;
  unsigned int myCountGas; implP|myCountGas;
  unsigned int myCountStar; implP|myCountStar;
  CkCallback cb; implP|cb;
  CkCallback cback; implP|cback;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("myCount");
  implDestP|myCount;
  if (implDestP.hasComments()) implDestP.comment("myCountGas");
  implDestP|myCountGas;
  if (implDestP.hasComments()) implDestP.comment("myCountStar");
  implDestP|myCountStar;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("cback");
  implDestP|cback;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::initBeforeORBSend_39_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendORBParticles(void);
 */

void CProxy_TreePiece::sendORBParticles(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_sendORBParticles_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_sendORBParticles_void() {
  int epidx = CkRegisterEp("sendORBParticles(void)",
      _call_sendORBParticles_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_sendORBParticles_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->sendORBParticles();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::sendORBParticles_40_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
 */

void CProxy_TreePiece::acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_particles, impl_cnt_particles;
  impl_off_particles=impl_off=CK_ALIGN(impl_off,sizeof(GravityParticle));
  impl_off+=(impl_cnt_particles=sizeof(GravityParticle)*(n));
  int impl_off_pGas, impl_cnt_pGas;
  impl_off_pGas=impl_off=CK_ALIGN(impl_off,sizeof(extraSPHData));
  impl_off+=(impl_cnt_pGas=sizeof(extraSPHData)*(nGasIn));
  int impl_off_pStar, impl_cnt_pStar;
  impl_off_pStar=impl_off=CK_ALIGN(impl_off,sizeof(extraStarData));
  impl_off+=(impl_cnt_pStar=sizeof(extraStarData)*(nStarIn));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|n;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|nGasIn;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|nStarIn;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|n;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|nGasIn;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|nStarIn;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_particles,particles,impl_cnt_particles);
  memcpy(impl_buf+impl_off_pGas,pGas,impl_cnt_pGas);
  memcpy(impl_buf+impl_off_pStar,pStar,impl_cnt_pStar);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_acceptORBParticles_marshall41(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_acceptORBParticles_marshall41() {
  int epidx = CkRegisterEp("acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn)",
      _call_acceptORBParticles_marshall41, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptORBParticles_marshall41);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptORBParticles_marshall41);

  return epidx;
}


void CkIndex_TreePiece::_call_acceptORBParticles_marshall41(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn*/
  PUP::fromMem implP(impl_buf);
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int n; implP|n;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int nGasIn; implP|nGasIn;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int nStarIn; implP|nStarIn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  GravityParticle *particles=(GravityParticle *)(impl_buf+impl_off_particles);
  extraSPHData *pGas=(extraSPHData *)(impl_buf+impl_off_pGas);
  extraStarData *pStar=(extraStarData *)(impl_buf+impl_off_pStar);
  impl_obj->acceptORBParticles(particles, n, pGas, nGasIn, pStar, nStarIn);
}

int CkIndex_TreePiece::_callmarshall_acceptORBParticles_marshall41(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn*/
  PUP::fromMem implP(impl_buf);
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int n; implP|n;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int nGasIn; implP|nGasIn;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int nStarIn; implP|nStarIn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  GravityParticle *particles=(GravityParticle *)(impl_buf+impl_off_particles);
  extraSPHData *pGas=(extraSPHData *)(impl_buf+impl_off_pGas);
  extraStarData *pStar=(extraStarData *)(impl_buf+impl_off_pStar);
  impl_obj->acceptORBParticles(particles, n, pGas, nGasIn, pStar, nStarIn);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_acceptORBParticles_marshall41(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn*/
  PUP::fromMem implP(impl_buf);
  int impl_off_particles, impl_cnt_particles; 
  implP|impl_off_particles;
  implP|impl_cnt_particles;
  int n; implP|n;
  int impl_off_pGas, impl_cnt_pGas; 
  implP|impl_off_pGas;
  implP|impl_cnt_pGas;
  int nGasIn; implP|nGasIn;
  int impl_off_pStar, impl_cnt_pStar; 
  implP|impl_off_pStar;
  implP|impl_cnt_pStar;
  int nStarIn; implP|nStarIn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  GravityParticle *particles=(GravityParticle *)(impl_buf+impl_off_particles);
  extraSPHData *pGas=(extraSPHData *)(impl_buf+impl_off_pGas);
  extraStarData *pStar=(extraStarData *)(impl_buf+impl_off_pStar);
  if (implDestP.hasComments()) implDestP.comment("particles");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*particles))<impl_cnt_particles;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|particles[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("pGas");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*pGas))<impl_cnt_pGas;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|pGas[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nGasIn");
  implDestP|nGasIn;
  if (implDestP.hasComments()) implDestP.comment("pStar");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*pStar))<impl_cnt_pStar;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|pStar[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nStarIn");
  implDestP|nStarIn;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::acceptORBParticles_41_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
 */

void CProxy_TreePiece::finalizeBoundaries(ORBSplittersMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_finalizeBoundaries_ORBSplittersMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_finalizeBoundaries_ORBSplittersMsg() {
  int epidx = CkRegisterEp("finalizeBoundaries(ORBSplittersMsg* impl_msg)",
      _call_finalizeBoundaries_ORBSplittersMsg, CMessage_ORBSplittersMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ORBSplittersMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_finalizeBoundaries_ORBSplittersMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->finalizeBoundaries((ORBSplittersMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
 */

void CProxy_TreePiece::evaluateParticleCounts(ORBSplittersMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_evaluateParticleCounts_ORBSplittersMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_evaluateParticleCounts_ORBSplittersMsg() {
  int epidx = CkRegisterEp("evaluateParticleCounts(ORBSplittersMsg* impl_msg)",
      _call_evaluateParticleCounts_ORBSplittersMsg, CMessage_ORBSplittersMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ORBSplittersMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_evaluateParticleCounts_ORBSplittersMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->evaluateParticleCounts((ORBSplittersMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
 */

void CProxy_TreePiece::kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dDelta, impl_cnt_dDelta;
  impl_off_dDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dDelta=sizeof(double)*(MAXRUNG+1));
  int impl_off_duDelta, impl_cnt_duDelta;
  impl_off_duDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_duDelta=sizeof(double)*(MAXRUNG+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    implP|impl_off_dDelta;
    implP|impl_cnt_dDelta;
    implP|bClosing;
    implP|bNeedVPred;
    implP|bGasIsothermal;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    implP|impl_off_dDelta;
    implP|impl_cnt_dDelta;
    implP|bClosing;
    implP|bNeedVPred;
    implP|bGasIsothermal;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dDelta,dDelta,impl_cnt_dDelta);
  memcpy(impl_buf+impl_off_duDelta,duDelta,impl_cnt_duDelta);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_kick_marshall44(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_kick_marshall44() {
  int epidx = CkRegisterEp("kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb)",
      _call_kick_marshall44, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_kick_marshall44);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_kick_marshall44);

  return epidx;
}


void CkIndex_TreePiece::_call_kick_marshall44(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int impl_off_dDelta, impl_cnt_dDelta; 
  implP|impl_off_dDelta;
  implP|impl_cnt_dDelta;
  int bClosing; implP|bClosing;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsothermal; implP|bGasIsothermal;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dDelta=(double *)(impl_buf+impl_off_dDelta);
  double *duDelta=(double *)(impl_buf+impl_off_duDelta);
  impl_obj->kick(iKickRung, dDelta, bClosing, bNeedVPred, bGasIsothermal, duDelta, cb);
}

int CkIndex_TreePiece::_callmarshall_kick_marshall44(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int impl_off_dDelta, impl_cnt_dDelta; 
  implP|impl_off_dDelta;
  implP|impl_cnt_dDelta;
  int bClosing; implP|bClosing;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsothermal; implP|bGasIsothermal;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dDelta=(double *)(impl_buf+impl_off_dDelta);
  double *duDelta=(double *)(impl_buf+impl_off_duDelta);
  impl_obj->kick(iKickRung, dDelta, bClosing, bNeedVPred, bGasIsothermal, duDelta, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_kick_marshall44(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int impl_off_dDelta, impl_cnt_dDelta; 
  implP|impl_off_dDelta;
  implP|impl_cnt_dDelta;
  int bClosing; implP|bClosing;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsothermal; implP|bGasIsothermal;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *dDelta=(double *)(impl_buf+impl_off_dDelta);
  double *duDelta=(double *)(impl_buf+impl_off_duDelta);
  if (implDestP.hasComments()) implDestP.comment("iKickRung");
  implDestP|iKickRung;
  if (implDestP.hasComments()) implDestP.comment("dDelta");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*dDelta))<impl_cnt_dDelta;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|dDelta[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bClosing");
  implDestP|bClosing;
  if (implDestP.hasComments()) implDestP.comment("bNeedVPred");
  implDestP|bNeedVPred;
  if (implDestP.hasComments()) implDestP.comment("bGasIsothermal");
  implDestP|bGasIsothermal;
  if (implDestP.hasComments()) implDestP.comment("duDelta");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*duDelta))<impl_cnt_duDelta;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|duDelta[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::kick_44_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initAccel(int iKickRung, const CkCallback &cb);
 */

void CProxy_TreePiece::initAccel(int iKickRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_initAccel_marshall45(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_initAccel_marshall45() {
  int epidx = CkRegisterEp("initAccel(int iKickRung, const CkCallback &cb)",
      _call_initAccel_marshall45, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initAccel_marshall45);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initAccel_marshall45);

  return epidx;
}


void CkIndex_TreePiece::_call_initAccel_marshall45(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iKickRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initAccel(iKickRung, cb);
}

int CkIndex_TreePiece::_callmarshall_initAccel_marshall45(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iKickRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initAccel(iKickRung, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_initAccel_marshall45(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iKickRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iKickRung");
  implDestP|iKickRung;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::initAccel_45_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
 */

void CProxy_TreePiece::adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    implP|bEpsAccStep;
    implP|bGravStep;
    implP|bSphStep;
    implP|bViscosityLimitdt;
    implP|dEta;
    implP|dEtaCourant;
    implP|dEtauDot;
    implP|dDelta;
    implP|dAccFac;
    implP|dCosmoFac;
    implP|dhMinOverSoft;
    implP|dResolveJeans;
    implP|bDoGas;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    implP|bEpsAccStep;
    implP|bGravStep;
    implP|bSphStep;
    implP|bViscosityLimitdt;
    implP|dEta;
    implP|dEtaCourant;
    implP|dEtauDot;
    implP|dDelta;
    implP|dAccFac;
    implP|dCosmoFac;
    implP|dhMinOverSoft;
    implP|dResolveJeans;
    implP|bDoGas;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_adjust_marshall46(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_adjust_marshall46() {
  int epidx = CkRegisterEp("adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb)",
      _call_adjust_marshall46, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_adjust_marshall46);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_adjust_marshall46);

  return epidx;
}


void CkIndex_TreePiece::_call_adjust_marshall46(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int bEpsAccStep; implP|bEpsAccStep;
  int bGravStep; implP|bGravStep;
  int bSphStep; implP|bSphStep;
  int bViscosityLimitdt; implP|bViscosityLimitdt;
  double dEta; implP|dEta;
  double dEtaCourant; implP|dEtaCourant;
  double dEtauDot; implP|dEtauDot;
  double dDelta; implP|dDelta;
  double dAccFac; implP|dAccFac;
  double dCosmoFac; implP|dCosmoFac;
  double dhMinOverSoft; implP|dhMinOverSoft;
  double dResolveJeans; implP|dResolveJeans;
  int bDoGas; implP|bDoGas;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->adjust(iKickRung, bEpsAccStep, bGravStep, bSphStep, bViscosityLimitdt, dEta, dEtaCourant, dEtauDot, dDelta, dAccFac, dCosmoFac, dhMinOverSoft, dResolveJeans, bDoGas, cb);
}

int CkIndex_TreePiece::_callmarshall_adjust_marshall46(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int bEpsAccStep; implP|bEpsAccStep;
  int bGravStep; implP|bGravStep;
  int bSphStep; implP|bSphStep;
  int bViscosityLimitdt; implP|bViscosityLimitdt;
  double dEta; implP|dEta;
  double dEtaCourant; implP|dEtaCourant;
  double dEtauDot; implP|dEtauDot;
  double dDelta; implP|dDelta;
  double dAccFac; implP|dAccFac;
  double dCosmoFac; implP|dCosmoFac;
  double dhMinOverSoft; implP|dhMinOverSoft;
  double dResolveJeans; implP|dResolveJeans;
  int bDoGas; implP|bDoGas;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->adjust(iKickRung, bEpsAccStep, bGravStep, bSphStep, bViscosityLimitdt, dEta, dEtaCourant, dEtauDot, dDelta, dAccFac, dCosmoFac, dhMinOverSoft, dResolveJeans, bDoGas, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_adjust_marshall46(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iKickRung; implP|iKickRung;
  int bEpsAccStep; implP|bEpsAccStep;
  int bGravStep; implP|bGravStep;
  int bSphStep; implP|bSphStep;
  int bViscosityLimitdt; implP|bViscosityLimitdt;
  double dEta; implP|dEta;
  double dEtaCourant; implP|dEtaCourant;
  double dEtauDot; implP|dEtauDot;
  double dDelta; implP|dDelta;
  double dAccFac; implP|dAccFac;
  double dCosmoFac; implP|dCosmoFac;
  double dhMinOverSoft; implP|dhMinOverSoft;
  double dResolveJeans; implP|dResolveJeans;
  int bDoGas; implP|bDoGas;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iKickRung");
  implDestP|iKickRung;
  if (implDestP.hasComments()) implDestP.comment("bEpsAccStep");
  implDestP|bEpsAccStep;
  if (implDestP.hasComments()) implDestP.comment("bGravStep");
  implDestP|bGravStep;
  if (implDestP.hasComments()) implDestP.comment("bSphStep");
  implDestP|bSphStep;
  if (implDestP.hasComments()) implDestP.comment("bViscosityLimitdt");
  implDestP|bViscosityLimitdt;
  if (implDestP.hasComments()) implDestP.comment("dEta");
  implDestP|dEta;
  if (implDestP.hasComments()) implDestP.comment("dEtaCourant");
  implDestP|dEtaCourant;
  if (implDestP.hasComments()) implDestP.comment("dEtauDot");
  implDestP|dEtauDot;
  if (implDestP.hasComments()) implDestP.comment("dDelta");
  implDestP|dDelta;
  if (implDestP.hasComments()) implDestP.comment("dAccFac");
  implDestP|dAccFac;
  if (implDestP.hasComments()) implDestP.comment("dCosmoFac");
  implDestP|dCosmoFac;
  if (implDestP.hasComments()) implDestP.comment("dhMinOverSoft");
  implDestP|dhMinOverSoft;
  if (implDestP.hasComments()) implDestP.comment("dResolveJeans");
  implDestP|dResolveJeans;
  if (implDestP.hasComments()) implDestP.comment("bDoGas");
  implDestP|bDoGas;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::adjust_46_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
 */

void CProxy_TreePiece::truncateRung(int iCurrMaxRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iCurrMaxRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iCurrMaxRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iCurrMaxRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_truncateRung_marshall47(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_truncateRung_marshall47() {
  int epidx = CkRegisterEp("truncateRung(int iCurrMaxRung, const CkCallback &cb)",
      _call_truncateRung_marshall47, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_truncateRung_marshall47);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_truncateRung_marshall47);

  return epidx;
}


void CkIndex_TreePiece::_call_truncateRung_marshall47(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iCurrMaxRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iCurrMaxRung; implP|iCurrMaxRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->truncateRung(iCurrMaxRung, cb);
}

int CkIndex_TreePiece::_callmarshall_truncateRung_marshall47(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iCurrMaxRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iCurrMaxRung; implP|iCurrMaxRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->truncateRung(iCurrMaxRung, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_truncateRung_marshall47(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iCurrMaxRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iCurrMaxRung; implP|iCurrMaxRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iCurrMaxRung");
  implDestP|iCurrMaxRung;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::truncateRung_47_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rungStats(const CkCallback &cb);
 */

void CProxy_TreePiece::rungStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_rungStats_marshall48(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_rungStats_marshall48() {
  int epidx = CkRegisterEp("rungStats(const CkCallback &cb)",
      _call_rungStats_marshall48, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_rungStats_marshall48);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_rungStats_marshall48);

  return epidx;
}


void CkIndex_TreePiece::_call_rungStats_marshall48(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->rungStats(cb);
}

int CkIndex_TreePiece::_callmarshall_rungStats_marshall48(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->rungStats(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_rungStats_marshall48(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::rungStats_48_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void countActive(int activeRung, const CkCallback &cb);
 */

void CProxy_TreePiece::countActive(int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_countActive_marshall49(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_countActive_marshall49() {
  int epidx = CkRegisterEp("countActive(int activeRung, const CkCallback &cb)",
      _call_countActive_marshall49, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_countActive_marshall49);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_countActive_marshall49);

  return epidx;
}


void CkIndex_TreePiece::_call_countActive_marshall49(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->countActive(activeRung, cb);
}

int CkIndex_TreePiece::_callmarshall_countActive_marshall49(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int activeRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->countActive(activeRung, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_countActive_marshall49(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("activeRung");
  implDestP|activeRung;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::countActive_49_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void assignDomain(const CkCallback &cb);
 */

void CProxy_TreePiece::assignDomain(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_assignDomain_marshall50(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_assignDomain_marshall50() {
  int epidx = CkRegisterEp("assignDomain(const CkCallback &cb)",
      _call_assignDomain_marshall50, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_assignDomain_marshall50);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_assignDomain_marshall50);

  return epidx;
}


void CkIndex_TreePiece::_call_assignDomain_marshall50(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->assignDomain(cb);
}

int CkIndex_TreePiece::_callmarshall_assignDomain_marshall50(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->assignDomain(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_assignDomain_marshall50(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::assignDomain_50_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
 */

void CProxy_TreePiece::drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dDelta;
    implP|bNeedVPred;
    implP|bGasIsoThermal;
    implP|dvDelta;
    implP|duDelta;
    implP|nGrowMass;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)buildTree;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dDelta;
    implP|bNeedVPred;
    implP|bGasIsoThermal;
    implP|dvDelta;
    implP|duDelta;
    implP|nGrowMass;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)buildTree;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_drift_marshall51(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_drift_marshall51() {
  int epidx = CkRegisterEp("drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb)",
      _call_drift_marshall51, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_drift_marshall51);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_drift_marshall51);

  return epidx;
}


void CkIndex_TreePiece::_call_drift_marshall51(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dDelta; implP|dDelta;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsoThermal; implP|bGasIsoThermal;
  double dvDelta; implP|dvDelta;
  double duDelta; implP|duDelta;
  int nGrowMass; implP|nGrowMass;
  bool buildTree; implP|buildTree;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->drift(dDelta, bNeedVPred, bGasIsoThermal, dvDelta, duDelta, nGrowMass, buildTree, cb);
}

int CkIndex_TreePiece::_callmarshall_drift_marshall51(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dDelta; implP|dDelta;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsoThermal; implP|bGasIsoThermal;
  double dvDelta; implP|dvDelta;
  double duDelta; implP|duDelta;
  int nGrowMass; implP|nGrowMass;
  bool buildTree; implP|buildTree;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->drift(dDelta, bNeedVPred, bGasIsoThermal, dvDelta, duDelta, nGrowMass, buildTree, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_drift_marshall51(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dDelta; implP|dDelta;
  int bNeedVPred; implP|bNeedVPred;
  int bGasIsoThermal; implP|bGasIsoThermal;
  double dvDelta; implP|dvDelta;
  double duDelta; implP|duDelta;
  int nGrowMass; implP|nGrowMass;
  bool buildTree; implP|buildTree;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dDelta");
  implDestP|dDelta;
  if (implDestP.hasComments()) implDestP.comment("bNeedVPred");
  implDestP|bNeedVPred;
  if (implDestP.hasComments()) implDestP.comment("bGasIsoThermal");
  implDestP|bGasIsoThermal;
  if (implDestP.hasComments()) implDestP.comment("dvDelta");
  implDestP|dvDelta;
  if (implDestP.hasComments()) implDestP.comment("duDelta");
  implDestP|duDelta;
  if (implDestP.hasComments()) implDestP.comment("nGrowMass");
  implDestP|nGrowMass;
  if (implDestP.hasComments()) implDestP.comment("buildTree");
  implDestP|buildTree;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::drift_51_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void starCenterOfMass(const CkCallback &cb);
 */

void CProxy_TreePiece::starCenterOfMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_starCenterOfMass_marshall52(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_starCenterOfMass_marshall52() {
  int epidx = CkRegisterEp("starCenterOfMass(const CkCallback &cb)",
      _call_starCenterOfMass_marshall52, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_starCenterOfMass_marshall52);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_starCenterOfMass_marshall52);

  return epidx;
}


void CkIndex_TreePiece::_call_starCenterOfMass_marshall52(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->starCenterOfMass(cb);
}

int CkIndex_TreePiece::_callmarshall_starCenterOfMass_marshall52(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->starCenterOfMass(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_starCenterOfMass_marshall52(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::starCenterOfMass_52_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcEnergy(const CkCallback &cb);
 */

void CProxy_TreePiece::calcEnergy(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_calcEnergy_marshall53(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_calcEnergy_marshall53() {
  int epidx = CkRegisterEp("calcEnergy(const CkCallback &cb)",
      _call_calcEnergy_marshall53, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_calcEnergy_marshall53);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_calcEnergy_marshall53);

  return epidx;
}


void CkIndex_TreePiece::_call_calcEnergy_marshall53(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->calcEnergy(cb);
}

int CkIndex_TreePiece::_callmarshall_calcEnergy_marshall53(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->calcEnergy(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_calcEnergy_marshall53(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::calcEnergy_53_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void colNParts(const CkCallback &cb);
 */

void CProxy_TreePiece::colNParts(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_colNParts_marshall54(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_colNParts_marshall54() {
  int epidx = CkRegisterEp("colNParts(const CkCallback &cb)",
      _call_colNParts_marshall54, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_colNParts_marshall54);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_colNParts_marshall54);

  return epidx;
}


void CkIndex_TreePiece::_call_colNParts_marshall54(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->colNParts(cb);
}

int CkIndex_TreePiece::_callmarshall_colNParts_marshall54(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->colNParts(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_colNParts_marshall54(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::colNParts_54_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
 */

void CProxy_TreePiece::newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const NewMaxOrder *nStarts, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_nStarts, impl_cnt_nStarts;
  impl_off_nStarts=impl_off=CK_ALIGN(impl_off,sizeof(NewMaxOrder));
  impl_off+=(impl_cnt_nStarts=sizeof(NewMaxOrder)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_nStarts;
    implP|impl_cnt_nStarts;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_nStarts;
    implP|impl_cnt_nStarts;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_nStarts,nStarts,impl_cnt_nStarts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_newOrder_marshall55(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_newOrder_marshall55() {
  int epidx = CkRegisterEp("newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb)",
      _call_newOrder_marshall55, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_newOrder_marshall55);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_newOrder_marshall55);

  return epidx;
}


void CkIndex_TreePiece::_call_newOrder_marshall55(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const NewMaxOrder *nStarts, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_nStarts, impl_cnt_nStarts; 
  implP|impl_off_nStarts;
  implP|impl_cnt_nStarts;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  NewMaxOrder *nStarts=(NewMaxOrder *)(impl_buf+impl_off_nStarts);
  impl_obj->newOrder(nStarts, n, cb);
}

int CkIndex_TreePiece::_callmarshall_newOrder_marshall55(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const NewMaxOrder *nStarts, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_nStarts, impl_cnt_nStarts; 
  implP|impl_off_nStarts;
  implP|impl_cnt_nStarts;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  NewMaxOrder *nStarts=(NewMaxOrder *)(impl_buf+impl_off_nStarts);
  impl_obj->newOrder(nStarts, n, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_newOrder_marshall55(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const NewMaxOrder *nStarts, int n, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_nStarts, impl_cnt_nStarts; 
  implP|impl_off_nStarts;
  implP|impl_cnt_nStarts;
  int n; implP|n;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  NewMaxOrder *nStarts=(NewMaxOrder *)(impl_buf+impl_off_nStarts);
  if (implDestP.hasComments()) implDestP.comment("nStarts");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*nStarts))<impl_cnt_nStarts;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|nStarts[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::newOrder_55_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
 */

void CProxy_TreePiece::setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalSPH;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalDark;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalSPH;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalDark;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_setNParts_marshall56(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_setNParts_marshall56() {
  int epidx = CkRegisterEp("setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb)",
      _call_setNParts_marshall56, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setNParts_marshall56);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setNParts_marshall56);

  return epidx;
}


void CkIndex_TreePiece::_call_setNParts_marshall56(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int64_t _nTotalSPH; implP|_nTotalSPH;
  int64_t _nTotalDark; implP|_nTotalDark;
  int64_t _nTotalStar; implP|_nTotalStar;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setNParts(_nTotalSPH, _nTotalDark, _nTotalStar, cb);
}

int CkIndex_TreePiece::_callmarshall_setNParts_marshall56(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int64_t _nTotalSPH; implP|_nTotalSPH;
  int64_t _nTotalDark; implP|_nTotalDark;
  int64_t _nTotalStar; implP|_nTotalStar;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setNParts(_nTotalSPH, _nTotalDark, _nTotalStar, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_setNParts_marshall56(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int64_t _nTotalSPH; implP|_nTotalSPH;
  int64_t _nTotalDark; implP|_nTotalDark;
  int64_t _nTotalStar; implP|_nTotalStar;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("_nTotalSPH");
  implDestP|_nTotalSPH;
  if (implDestP.hasComments()) implDestP.comment("_nTotalDark");
  implDestP|_nTotalDark;
  if (implDestP.hasComments()) implDestP.comment("_nTotalStar");
  implDestP|_nTotalStar;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::setNParts_56_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setSoft(double dSoft, const CkCallback &cb);
 */

void CProxy_TreePiece::setSoft(double dSoft, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dSoft, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dSoft;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dSoft;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_setSoft_marshall57(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_setSoft_marshall57() {
  int epidx = CkRegisterEp("setSoft(double dSoft, const CkCallback &cb)",
      _call_setSoft_marshall57, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setSoft_marshall57);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setSoft_marshall57);

  return epidx;
}


void CkIndex_TreePiece::_call_setSoft_marshall57(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dSoft, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dSoft; implP|dSoft;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setSoft(dSoft, cb);
}

int CkIndex_TreePiece::_callmarshall_setSoft_marshall57(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dSoft, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dSoft; implP|dSoft;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setSoft(dSoft, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_setSoft_marshall57(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dSoft, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dSoft; implP|dSoft;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dSoft");
  implDestP|dSoft;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::setSoft_57_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
 */

void CProxy_TreePiece::physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dSoftMax;
    implP|dFac;
    implP|bSoftMaxMul;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dSoftMax;
    implP|dFac;
    implP|bSoftMaxMul;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_physicalSoft_marshall58(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_physicalSoft_marshall58() {
  int epidx = CkRegisterEp("physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb)",
      _call_physicalSoft_marshall58, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_physicalSoft_marshall58);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_physicalSoft_marshall58);

  return epidx;
}


void CkIndex_TreePiece::_call_physicalSoft_marshall58(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dSoftMax; implP|dSoftMax;
  double dFac; implP|dFac;
  int bSoftMaxMul; implP|bSoftMaxMul;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->physicalSoft(dSoftMax, dFac, bSoftMaxMul, cb);
}

int CkIndex_TreePiece::_callmarshall_physicalSoft_marshall58(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dSoftMax; implP|dSoftMax;
  double dFac; implP|dFac;
  int bSoftMaxMul; implP|bSoftMaxMul;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->physicalSoft(dSoftMax, dFac, bSoftMaxMul, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_physicalSoft_marshall58(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dSoftMax; implP|dSoftMax;
  double dFac; implP|dFac;
  int bSoftMaxMul; implP|bSoftMaxMul;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dSoftMax");
  implDestP|dSoftMax;
  if (implDestP.hasComments()) implDestP.comment("dFac");
  implDestP|dFac;
  if (implDestP.hasComments()) implDestP.comment("bSoftMaxMul");
  implDestP|bSoftMaxMul;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::physicalSoft_58_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
 */

void CProxy_TreePiece::growMass(int nGrowMass, double dDeltaM, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nGrowMass, double dDeltaM, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nGrowMass;
    implP|dDeltaM;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nGrowMass;
    implP|dDeltaM;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_growMass_marshall59(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_growMass_marshall59() {
  int epidx = CkRegisterEp("growMass(int nGrowMass, double dDeltaM, const CkCallback &cb)",
      _call_growMass_marshall59, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_growMass_marshall59);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_growMass_marshall59);

  return epidx;
}


void CkIndex_TreePiece::_call_growMass_marshall59(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int nGrowMass, double dDeltaM, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int nGrowMass; implP|nGrowMass;
  double dDeltaM; implP|dDeltaM;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->growMass(nGrowMass, dDeltaM, cb);
}

int CkIndex_TreePiece::_callmarshall_growMass_marshall59(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int nGrowMass, double dDeltaM, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int nGrowMass; implP|nGrowMass;
  double dDeltaM; implP|dDeltaM;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->growMass(nGrowMass, dDeltaM, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_growMass_marshall59(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int nGrowMass, double dDeltaM, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int nGrowMass; implP|nGrowMass;
  double dDeltaM; implP|dDeltaM;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nGrowMass");
  implDestP|nGrowMass;
  if (implDestP.hasComments()) implDestP.comment("dDeltaM");
  implDestP|dDeltaM;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::growMass_59_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
 */

void CProxy_TreePiece::InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dTuFac, double z, double dTime, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dTuFac;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dTuFac;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_InitEnergy_marshall60(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_InitEnergy_marshall60() {
  int epidx = CkRegisterEp("InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb)",
      _call_InitEnergy_marshall60, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_InitEnergy_marshall60);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_InitEnergy_marshall60);

  return epidx;
}


void CkIndex_TreePiece::_call_InitEnergy_marshall60(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dTuFac, double z, double dTime, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dTuFac; implP|dTuFac;
  double z; implP|z;
  double dTime; implP|dTime;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->InitEnergy(dTuFac, z, dTime, cb);
}

int CkIndex_TreePiece::_callmarshall_InitEnergy_marshall60(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dTuFac, double z, double dTime, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dTuFac; implP|dTuFac;
  double z; implP|z;
  double dTime; implP|dTime;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->InitEnergy(dTuFac, z, dTime, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_InitEnergy_marshall60(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dTuFac, double z, double dTime, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double dTuFac; implP|dTuFac;
  double z; implP|z;
  double dTime; implP|dTime;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dTuFac");
  implDestP|dTuFac;
  if (implDestP.hasComments()) implDestP.comment("z");
  implDestP|z;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::InitEnergy_60_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
 */

void CProxy_TreePiece::updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_duDelta, impl_cnt_duDelta;
  impl_off_duDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_duDelta=sizeof(double)*(MAXRUNG+1));
  int impl_off_dStartTime, impl_cnt_dStartTime;
  impl_off_dStartTime=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dStartTime=sizeof(double)*(MAXRUNG+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    implP|impl_off_dStartTime;
    implP|impl_cnt_dStartTime;
    implP|bCool;
    implP|bAll;
    implP|bUpdateState;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    implP|impl_off_dStartTime;
    implP|impl_cnt_dStartTime;
    implP|bCool;
    implP|bAll;
    implP|bUpdateState;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_duDelta,duDelta,impl_cnt_duDelta);
  memcpy(impl_buf+impl_off_dStartTime,dStartTime,impl_cnt_dStartTime);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_updateuDot_marshall61(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_updateuDot_marshall61() {
  int epidx = CkRegisterEp("updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb)",
      _call_updateuDot_marshall61, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateuDot_marshall61);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateuDot_marshall61);

  return epidx;
}


void CkIndex_TreePiece::_call_updateuDot_marshall61(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  int impl_off_dStartTime, impl_cnt_dStartTime; 
  implP|impl_off_dStartTime;
  implP|impl_cnt_dStartTime;
  int bCool; implP|bCool;
  int bAll; implP|bAll;
  int bUpdateState; implP|bUpdateState;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *duDelta=(double *)(impl_buf+impl_off_duDelta);
  double *dStartTime=(double *)(impl_buf+impl_off_dStartTime);
  impl_obj->updateuDot(activeRung, duDelta, dStartTime, bCool, bAll, bUpdateState, cb);
}

int CkIndex_TreePiece::_callmarshall_updateuDot_marshall61(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  int impl_off_dStartTime, impl_cnt_dStartTime; 
  implP|impl_off_dStartTime;
  implP|impl_cnt_dStartTime;
  int bCool; implP|bCool;
  int bAll; implP|bAll;
  int bUpdateState; implP|bUpdateState;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *duDelta=(double *)(impl_buf+impl_off_duDelta);
  double *dStartTime=(double *)(impl_buf+impl_off_dStartTime);
  impl_obj->updateuDot(activeRung, duDelta, dStartTime, bCool, bAll, bUpdateState, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_updateuDot_marshall61(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  int impl_off_duDelta, impl_cnt_duDelta; 
  implP|impl_off_duDelta;
  implP|impl_cnt_duDelta;
  int impl_off_dStartTime, impl_cnt_dStartTime; 
  implP|impl_off_dStartTime;
  implP|impl_cnt_dStartTime;
  int bCool; implP|bCool;
  int bAll; implP|bAll;
  int bUpdateState; implP|bUpdateState;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *duDelta=(double *)(impl_buf+impl_off_duDelta);
  double *dStartTime=(double *)(impl_buf+impl_off_dStartTime);
  if (implDestP.hasComments()) implDestP.comment("activeRung");
  implDestP|activeRung;
  if (implDestP.hasComments()) implDestP.comment("duDelta");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*duDelta))<impl_cnt_duDelta;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|duDelta[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("dStartTime");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*dStartTime))<impl_cnt_dStartTime;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|dStartTime[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bCool");
  implDestP|bCool;
  if (implDestP.hasComments()) implDestP.comment("bAll");
  implDestP|bAll;
  if (implDestP.hasComments()) implDestP.comment("bUpdateState");
  implDestP|bUpdateState;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::updateuDot_61_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
 */

void CProxy_TreePiece::ballMax(int activeRung, double dFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, double dFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|dFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|dFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_ballMax_marshall62(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_ballMax_marshall62() {
  int epidx = CkRegisterEp("ballMax(int activeRung, double dFac, const CkCallback &cb)",
      _call_ballMax_marshall62, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ballMax_marshall62);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ballMax_marshall62);

  return epidx;
}


void CkIndex_TreePiece::_call_ballMax_marshall62(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, double dFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  double dFac; implP|dFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ballMax(activeRung, dFac, cb);
}

int CkIndex_TreePiece::_callmarshall_ballMax_marshall62(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int activeRung, double dFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  double dFac; implP|dFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ballMax(activeRung, dFac, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_ballMax_marshall62(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, double dFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  double dFac; implP|dFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("activeRung");
  implDestP|activeRung;
  if (implDestP.hasComments()) implDestP.comment("dFac");
  implDestP|dFac;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::ballMax_62_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
 */

void CProxy_TreePiece::sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bOn, int activeRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bOn;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bOn;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_sphViscosityLimiter_marshall63(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_sphViscosityLimiter_marshall63() {
  int epidx = CkRegisterEp("sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb)",
      _call_sphViscosityLimiter_marshall63, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sphViscosityLimiter_marshall63);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sphViscosityLimiter_marshall63);

  return epidx;
}


void CkIndex_TreePiece::_call_sphViscosityLimiter_marshall63(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bOn, int activeRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bOn; implP|bOn;
  int activeRung; implP|activeRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sphViscosityLimiter(bOn, activeRung, cb);
}

int CkIndex_TreePiece::_callmarshall_sphViscosityLimiter_marshall63(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int bOn, int activeRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bOn; implP|bOn;
  int activeRung; implP|activeRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sphViscosityLimiter(bOn, activeRung, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_sphViscosityLimiter_marshall63(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bOn, int activeRung, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bOn; implP|bOn;
  int activeRung; implP|activeRung;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("bOn");
  implDestP|bOn;
  if (implDestP.hasComments()) implDestP.comment("activeRung");
  implDestP|activeRung;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::sphViscosityLimiter_63_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
 */

void CProxy_TreePiece::getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double gamma, double gammam1, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gamma;
    implP|gammam1;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gamma;
    implP|gammam1;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_getAdiabaticGasPressure_marshall64(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_getAdiabaticGasPressure_marshall64() {
  int epidx = CkRegisterEp("getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb)",
      _call_getAdiabaticGasPressure_marshall64, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getAdiabaticGasPressure_marshall64);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getAdiabaticGasPressure_marshall64);

  return epidx;
}


void CkIndex_TreePiece::_call_getAdiabaticGasPressure_marshall64(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double gamma, double gammam1, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double gamma; implP|gamma;
  double gammam1; implP|gammam1;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getAdiabaticGasPressure(gamma, gammam1, cb);
}

int CkIndex_TreePiece::_callmarshall_getAdiabaticGasPressure_marshall64(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double gamma, double gammam1, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double gamma; implP|gamma;
  double gammam1; implP|gammam1;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getAdiabaticGasPressure(gamma, gammam1, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_getAdiabaticGasPressure_marshall64(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double gamma, double gammam1, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double gamma; implP|gamma;
  double gammam1; implP|gammam1;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gamma");
  implDestP|gamma;
  if (implDestP.hasComments()) implDestP.comment("gammam1");
  implDestP|gammam1;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::getAdiabaticGasPressure_64_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
 */

void CProxy_TreePiece::getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double gamma, double gammam1, double dResolveJeans, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gamma;
    implP|gammam1;
    implP|dResolveJeans;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gamma;
    implP|gammam1;
    implP|dResolveJeans;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_getCoolingGasPressure_marshall65(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_getCoolingGasPressure_marshall65() {
  int epidx = CkRegisterEp("getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb)",
      _call_getCoolingGasPressure_marshall65, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getCoolingGasPressure_marshall65);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getCoolingGasPressure_marshall65);

  return epidx;
}


void CkIndex_TreePiece::_call_getCoolingGasPressure_marshall65(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double gamma, double gammam1, double dResolveJeans, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double gamma; implP|gamma;
  double gammam1; implP|gammam1;
  double dResolveJeans; implP|dResolveJeans;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCoolingGasPressure(gamma, gammam1, dResolveJeans, cb);
}

int CkIndex_TreePiece::_callmarshall_getCoolingGasPressure_marshall65(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: double gamma, double gammam1, double dResolveJeans, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double gamma; implP|gamma;
  double gammam1; implP|gammam1;
  double dResolveJeans; implP|dResolveJeans;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCoolingGasPressure(gamma, gammam1, dResolveJeans, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_getCoolingGasPressure_marshall65(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double gamma, double gammam1, double dResolveJeans, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  double gamma; implP|gamma;
  double gammam1; implP|gammam1;
  double dResolveJeans; implP|dResolveJeans;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gamma");
  implDestP|gamma;
  if (implDestP.hasComments()) implDestP.comment("gammam1");
  implDestP|gammam1;
  if (implDestP.hasComments()) implDestP.comment("dResolveJeans");
  implDestP|dResolveJeans;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::getCoolingGasPressure_65_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initRand(int iRand, const CkCallback &cb);
 */

void CProxy_TreePiece::initRand(int iRand, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iRand, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iRand;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iRand;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_initRand_marshall66(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_initRand_marshall66() {
  int epidx = CkRegisterEp("initRand(int iRand, const CkCallback &cb)",
      _call_initRand_marshall66, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initRand_marshall66);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initRand_marshall66);

  return epidx;
}


void CkIndex_TreePiece::_call_initRand_marshall66(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iRand, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iRand; implP|iRand;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initRand(iRand, cb);
}

int CkIndex_TreePiece::_callmarshall_initRand_marshall66(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iRand, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iRand; implP|iRand;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initRand(iRand, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_initRand_marshall66(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iRand, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iRand; implP|iRand;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iRand");
  implDestP|iRand;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::initRand_66_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
 */

void CProxy_TreePiece::FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Stfm &)param;
    implP|dTime;
    implP|dDelta;
    implP|dCosmoFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Stfm &)param;
    implP|dTime;
    implP|dDelta;
    implP|dCosmoFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_FormStars_marshall67(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_FormStars_marshall67() {
  int epidx = CkRegisterEp("FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb)",
      _call_FormStars_marshall67, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_FormStars_marshall67);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_FormStars_marshall67);

  return epidx;
}


void CkIndex_TreePiece::_call_FormStars_marshall67(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Stfm param; implP|param;
  double dTime; implP|dTime;
  double dDelta; implP|dDelta;
  double dCosmoFac; implP|dCosmoFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->FormStars(param, dTime, dDelta, dCosmoFac, cb);
}

int CkIndex_TreePiece::_callmarshall_FormStars_marshall67(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Stfm param; implP|param;
  double dTime; implP|dTime;
  double dDelta; implP|dDelta;
  double dCosmoFac; implP|dCosmoFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->FormStars(param, dTime, dDelta, dCosmoFac, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_FormStars_marshall67(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Stfm param; implP|param;
  double dTime; implP|dTime;
  double dDelta; implP|dDelta;
  double dCosmoFac; implP|dCosmoFac;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("param");
  implDestP|param;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("dDelta");
  implDestP|dDelta;
  if (implDestP.hasComments()) implDestP.comment("dCosmoFac");
  implDestP|dCosmoFac;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::FormStars_67_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushStarLog(const CkCallback &cb);
 */

void CProxy_TreePiece::flushStarLog(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_flushStarLog_marshall68(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_flushStarLog_marshall68() {
  int epidx = CkRegisterEp("flushStarLog(const CkCallback &cb)",
      _call_flushStarLog_marshall68, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_flushStarLog_marshall68);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_flushStarLog_marshall68);

  return epidx;
}


void CkIndex_TreePiece::_call_flushStarLog_marshall68(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flushStarLog(cb);
}

int CkIndex_TreePiece::_callmarshall_flushStarLog_marshall68(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flushStarLog(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_flushStarLog_marshall68(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::flushStarLog_68_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
 */

void CProxy_TreePiece::Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Fdbk &)fb;
    implP|dTime;
    implP|dDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Fdbk &)fb;
    implP|dTime;
    implP|dDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_Feedback_marshall69(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_Feedback_marshall69() {
  int epidx = CkRegisterEp("Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb)",
      _call_Feedback_marshall69, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Feedback_marshall69);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Feedback_marshall69);

  return epidx;
}


void CkIndex_TreePiece::_call_Feedback_marshall69(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Fdbk fb; implP|fb;
  double dTime; implP|dTime;
  double dDelta; implP|dDelta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->Feedback(fb, dTime, dDelta, cb);
}

int CkIndex_TreePiece::_callmarshall_Feedback_marshall69(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Fdbk fb; implP|fb;
  double dTime; implP|dTime;
  double dDelta; implP|dDelta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->Feedback(fb, dTime, dDelta, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_Feedback_marshall69(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  Fdbk fb; implP|fb;
  double dTime; implP|dTime;
  double dDelta; implP|dDelta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("fb");
  implDestP|fb;
  if (implDestP.hasComments()) implDestP.comment("dTime");
  implDestP|dTime;
  if (implDestP.hasComments()) implDestP.comment("dDelta");
  implDestP|dDelta;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::Feedback_69_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
 */

void CProxy_TreePiece::massMetalsEnergyCheck(int bPreDist, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bPreDist, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bPreDist;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bPreDist;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_massMetalsEnergyCheck_marshall70(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_massMetalsEnergyCheck_marshall70() {
  int epidx = CkRegisterEp("massMetalsEnergyCheck(int bPreDist, const CkCallback &cb)",
      _call_massMetalsEnergyCheck_marshall70, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_massMetalsEnergyCheck_marshall70);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_massMetalsEnergyCheck_marshall70);

  return epidx;
}


void CkIndex_TreePiece::_call_massMetalsEnergyCheck_marshall70(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bPreDist, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bPreDist; implP|bPreDist;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->massMetalsEnergyCheck(bPreDist, cb);
}

int CkIndex_TreePiece::_callmarshall_massMetalsEnergyCheck_marshall70(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int bPreDist, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bPreDist; implP|bPreDist;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->massMetalsEnergyCheck(bPreDist, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_massMetalsEnergyCheck_marshall70(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bPreDist, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bPreDist; implP|bPreDist;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("bPreDist");
  implDestP|bPreDist;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::massMetalsEnergyCheck_70_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
 */

void CProxy_TreePiece::setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iSetMask, const char *file, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_file, impl_cnt_file;
  impl_off_file=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_file=sizeof(char)*(256));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iSetMask;
    implP|impl_off_file;
    implP|impl_cnt_file;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iSetMask;
    implP|impl_off_file;
    implP|impl_cnt_file;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_file,file,impl_cnt_file);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_setTypeFromFile_marshall71(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_setTypeFromFile_marshall71() {
  int epidx = CkRegisterEp("setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb)",
      _call_setTypeFromFile_marshall71, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setTypeFromFile_marshall71);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setTypeFromFile_marshall71);

  return epidx;
}


void CkIndex_TreePiece::_call_setTypeFromFile_marshall71(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iSetMask, const char *file, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iSetMask; implP|iSetMask;
  int impl_off_file, impl_cnt_file; 
  implP|impl_off_file;
  implP|impl_cnt_file;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *file=(char *)(impl_buf+impl_off_file);
  impl_obj->setTypeFromFile(iSetMask, file, cb);
}

int CkIndex_TreePiece::_callmarshall_setTypeFromFile_marshall71(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iSetMask, const char *file, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iSetMask; implP|iSetMask;
  int impl_off_file, impl_cnt_file; 
  implP|impl_off_file;
  implP|impl_cnt_file;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *file=(char *)(impl_buf+impl_off_file);
  impl_obj->setTypeFromFile(iSetMask, file, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_setTypeFromFile_marshall71(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iSetMask, const char *file, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int iSetMask; implP|iSetMask;
  int impl_off_file, impl_cnt_file; 
  implP|impl_off_file;
  implP|impl_cnt_file;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *file=(char *)(impl_buf+impl_off_file);
  if (implDestP.hasComments()) implDestP.comment("iSetMask");
  implDestP|iSetMask;
  if (implDestP.hasComments()) implDestP.comment("file");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*file))<impl_cnt_file;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|file[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::setTypeFromFile_71_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCOM(const CkCallback &cb, int bLiveViz);
 */

void CProxy_TreePiece::getCOM(const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb, int bLiveViz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_getCOM_marshall72(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_getCOM_marshall72() {
  int epidx = CkRegisterEp("getCOM(const CkCallback &cb, int bLiveViz)",
      _call_getCOM_marshall72, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getCOM_marshall72);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getCOM_marshall72);

  return epidx;
}


void CkIndex_TreePiece::_call_getCOM_marshall72(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb, int bLiveViz*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  int bLiveViz; implP|bLiveViz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCOM(cb, bLiveViz);
}

int CkIndex_TreePiece::_callmarshall_getCOM_marshall72(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb, int bLiveViz*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  int bLiveViz; implP|bLiveViz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCOM(cb, bLiveViz);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_getCOM_marshall72(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb, int bLiveViz*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  int bLiveViz; implP|bLiveViz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("bLiveViz");
  implDestP|bLiveViz;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::getCOM_72_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
 */

void CProxy_TreePiece::getCOMByType(int iType, const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iType, const CkCallback &cb, int bLiveViz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iType;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iType;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_getCOMByType_marshall73(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_getCOMByType_marshall73() {
  int epidx = CkRegisterEp("getCOMByType(int iType, const CkCallback &cb, int bLiveViz)",
      _call_getCOMByType_marshall73, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getCOMByType_marshall73);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getCOMByType_marshall73);

  return epidx;
}


void CkIndex_TreePiece::_call_getCOMByType_marshall73(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iType, const CkCallback &cb, int bLiveViz*/
  PUP::fromMem implP(impl_buf);
  int iType; implP|iType;
  CkCallback cb; implP|cb;
  int bLiveViz; implP|bLiveViz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCOMByType(iType, cb, bLiveViz);
}

int CkIndex_TreePiece::_callmarshall_getCOMByType_marshall73(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iType, const CkCallback &cb, int bLiveViz*/
  PUP::fromMem implP(impl_buf);
  int iType; implP|iType;
  CkCallback cb; implP|cb;
  int bLiveViz; implP|bLiveViz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCOMByType(iType, cb, bLiveViz);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_getCOMByType_marshall73(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iType, const CkCallback &cb, int bLiveViz*/
  PUP::fromMem implP(impl_buf);
  int iType; implP|iType;
  CkCallback cb; implP|cb;
  int bLiveViz; implP|bLiveViz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iType");
  implDestP|iType;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("bLiveViz");
  implDestP|bLiveViz;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::getCOMByType_73_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
 */

void CProxy_TreePiece::DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb, int liveVizDump
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|liveVizDump;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|liveVizDump;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_DumpFrame_marshall74(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_DumpFrame_marshall74() {
  int epidx = CkRegisterEp("DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump)",
      _call_DumpFrame_marshall74, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_DumpFrame_marshall74);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_DumpFrame_marshall74);

  return epidx;
}


void CkIndex_TreePiece::_call_DumpFrame_marshall74(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb, int liveVizDump*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  int liveVizDump; implP|liveVizDump;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->DumpFrame(in, cb, liveVizDump);
}

int CkIndex_TreePiece::_callmarshall_DumpFrame_marshall74(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb, int liveVizDump*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  int liveVizDump; implP|liveVizDump;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->DumpFrame(in, cb, liveVizDump);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_DumpFrame_marshall74(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb, int liveVizDump*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  int liveVizDump; implP|liveVizDump;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("in");
  implDestP|in;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("liveVizDump");
  implDestP|liveVizDump;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::DumpFrame_74_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
 */

void CProxy_TreePiece::liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_liveVizDumpFrameInit_liveVizRequestMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_liveVizDumpFrameInit_liveVizRequestMsg() {
  int epidx = CkRegisterEp("liveVizDumpFrameInit(liveVizRequestMsg* impl_msg)",
      _call_liveVizDumpFrameInit_liveVizRequestMsg, CMessage_liveVizRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)liveVizRequestMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_liveVizDumpFrameInit_liveVizRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->liveVizDumpFrameInit((liveVizRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setProjections(int bOn);
 */

void CProxy_TreePiece::setProjections(int bOn, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bOn;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_setProjections_marshall76(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_setProjections_marshall76() {
  int epidx = CkRegisterEp("setProjections(int bOn)",
      _call_setProjections_marshall76, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setProjections_marshall76);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setProjections_marshall76);

  return epidx;
}


void CkIndex_TreePiece::_call_setProjections_marshall76(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bOn*/
  PUP::fromMem implP(impl_buf);
  int bOn; implP|bOn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setProjections(bOn);
}

int CkIndex_TreePiece::_callmarshall_setProjections_marshall76(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int bOn*/
  PUP::fromMem implP(impl_buf);
  int bOn; implP|bOn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setProjections(bOn);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_setProjections_marshall76(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bOn*/
  PUP::fromMem implP(impl_buf);
  int bOn; implP|bOn;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("bOn");
  implDestP|bOn;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::setProjections_76_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void buildTree(int bucketSize, const CkCallback &cb);
 */

void CProxy_TreePiece::buildTree(int bucketSize, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bucketSize, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bucketSize;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bucketSize;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_buildTree_marshall77(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_buildTree_marshall77() {
  int epidx = CkRegisterEp("buildTree(int bucketSize, const CkCallback &cb)",
      _call_buildTree_marshall77, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_buildTree_marshall77);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_buildTree_marshall77);

  return epidx;
}


void CkIndex_TreePiece::_call_buildTree_marshall77(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bucketSize, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bucketSize; implP|bucketSize;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->buildTree(bucketSize, cb);
}

int CkIndex_TreePiece::_callmarshall_buildTree_marshall77(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int bucketSize, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bucketSize; implP|bucketSize;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->buildTree(bucketSize, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_buildTree_marshall77(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int bucketSize, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int bucketSize; implP|bucketSize;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("bucketSize");
  implDestP|bucketSize;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::buildTree_77_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startOctTreeBuild(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::startOctTreeBuild(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startOctTreeBuild_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startOctTreeBuild_CkReductionMsg() {
  int epidx = CkRegisterEp("startOctTreeBuild(CkReductionMsg* impl_msg)",
      _call_startOctTreeBuild_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_startOctTreeBuild_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->startOctTreeBuild((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
 */

void CProxy_TreePiece::recvBoundary(const SFC::Key &key, const NborDir &dir, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const SFC::Key &key, const NborDir &dir
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(SFC::Key &)key;
    //Have to cast away const-ness to get pup routine
    implP|(NborDir &)dir;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(SFC::Key &)key;
    //Have to cast away const-ness to get pup routine
    implP|(NborDir &)dir;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_recvBoundary_marshall79(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_recvBoundary_marshall79() {
  int epidx = CkRegisterEp("recvBoundary(const SFC::Key &key, const NborDir &dir)",
      _call_recvBoundary_marshall79, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvBoundary_marshall79);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvBoundary_marshall79);

  return epidx;
}


void CkIndex_TreePiece::_call_recvBoundary_marshall79(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key &key, const NborDir &dir*/
  PUP::fromMem implP(impl_buf);
  SFC::Key key; implP|key;
  NborDir dir; implP|dir;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvBoundary(key, dir);
}

int CkIndex_TreePiece::_callmarshall_recvBoundary_marshall79(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const SFC::Key &key, const NborDir &dir*/
  PUP::fromMem implP(impl_buf);
  SFC::Key key; implP|key;
  NborDir dir; implP|dir;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvBoundary(key, dir);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_recvBoundary_marshall79(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const SFC::Key &key, const NborDir &dir*/
  PUP::fromMem implP(impl_buf);
  SFC::Key key; implP|key;
  NborDir dir; implP|dir;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("key");
  implDestP|key;
  if (implDestP.hasComments()) implDestP.comment("dir");
  implDestP|dir;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::recvBoundary_79_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvdBoundaries(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::recvdBoundaries(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_recvdBoundaries_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_recvdBoundaries_CkReductionMsg() {
  int epidx = CkRegisterEp("recvdBoundaries(CkReductionMsg* impl_msg)",
      _call_recvdBoundaries_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_recvdBoundaries_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->recvdBoundaries((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startORBTreeBuild(CkReductionMsg* impl_msg);
 */

void CProxy_TreePiece::startORBTreeBuild(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startORBTreeBuild_CkReductionMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startORBTreeBuild_CkReductionMsg() {
  int epidx = CkRegisterEp("startORBTreeBuild(CkReductionMsg* impl_msg)",
      _call_startORBTreeBuild_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_startORBTreeBuild_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->startORBTreeBuild((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
 */

void CProxy_TreePiece::startGravity(int activeRung, double myTheta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, double myTheta, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|myTheta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|myTheta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startGravity_marshall82(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startGravity_marshall82() {
  int epidx = CkRegisterEp("startGravity(int activeRung, double myTheta, const CkCallback &cb)",
      _call_startGravity_marshall82, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startGravity_marshall82);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startGravity_marshall82);

  return epidx;
}


void CkIndex_TreePiece::_call_startGravity_marshall82(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, double myTheta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  double myTheta; implP|myTheta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startGravity(activeRung, myTheta, cb);
}

int CkIndex_TreePiece::_callmarshall_startGravity_marshall82(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int activeRung, double myTheta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  double myTheta; implP|myTheta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startGravity(activeRung, myTheta, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_startGravity_marshall82(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int activeRung, double myTheta, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int activeRung; implP|activeRung;
  double myTheta; implP|myTheta;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("activeRung");
  implDestP|activeRung;
  if (implDestP.hasComments()) implDestP.comment("myTheta");
  implDestP|myTheta;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::startGravity_82_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
 */

void CProxy_TreePiece::startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_2;
    implP|iLowhFix;
    implP|nSmooth;
    implP|dfBall2OverSoft2;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_2;
    implP|iLowhFix;
    implP|nSmooth;
    implP|dfBall2OverSoft2;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startSmooth_marshall83(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startSmooth_marshall83() {
  int epidx = CkRegisterEp("startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb)",
      _call_startSmooth_marshall83, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startSmooth_marshall83);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startSmooth_marshall83);

  return epidx;
}


void CkIndex_TreePiece::_call_startSmooth_marshall83(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_2; implP|impl_noname_2;
  int iLowhFix; implP|iLowhFix;
  int nSmooth; implP|nSmooth;
  double dfBall2OverSoft2; implP|dfBall2OverSoft2;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startSmooth(impl_noname_2, iLowhFix, nSmooth, dfBall2OverSoft2, cb);
}

int CkIndex_TreePiece::_callmarshall_startSmooth_marshall83(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_2; implP|impl_noname_2;
  int iLowhFix; implP|iLowhFix;
  int nSmooth; implP|nSmooth;
  double dfBall2OverSoft2; implP|dfBall2OverSoft2;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startSmooth(impl_noname_2, iLowhFix, nSmooth, dfBall2OverSoft2, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_startSmooth_marshall83(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_2; implP|impl_noname_2;
  int iLowhFix; implP|iLowhFix;
  int nSmooth; implP|nSmooth;
  double dfBall2OverSoft2; implP|dfBall2OverSoft2;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
  if (implDestP.hasComments()) implDestP.comment("iLowhFix");
  implDestP|iLowhFix;
  if (implDestP.hasComments()) implDestP.comment("nSmooth");
  implDestP|nSmooth;
  if (implDestP.hasComments()) implDestP.comment("dfBall2OverSoft2");
  implDestP|dfBall2OverSoft2;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::startSmooth_83_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
 */

void CProxy_TreePiece::startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startReSmooth_marshall84(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startReSmooth_marshall84() {
  int epidx = CkRegisterEp("startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb)",
      _call_startReSmooth_marshall84, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startReSmooth_marshall84);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startReSmooth_marshall84);

  return epidx;
}


void CkIndex_TreePiece::_call_startReSmooth_marshall84(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_3; implP|impl_noname_3;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startReSmooth(impl_noname_3, cb);
}

int CkIndex_TreePiece::_callmarshall_startReSmooth_marshall84(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_3; implP|impl_noname_3;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startReSmooth(impl_noname_3, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_startReSmooth_marshall84(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_3; implP|impl_noname_3;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::startReSmooth_84_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
 */

void CProxy_TreePiece::startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startMarkSmooth_marshall85(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startMarkSmooth_marshall85() {
  int epidx = CkRegisterEp("startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb)",
      _call_startMarkSmooth_marshall85, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startMarkSmooth_marshall85);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startMarkSmooth_marshall85);

  return epidx;
}


void CkIndex_TreePiece::_call_startMarkSmooth_marshall85(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_4; implP|impl_noname_4;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startMarkSmooth(impl_noname_4, cb);
}

int CkIndex_TreePiece::_callmarshall_startMarkSmooth_marshall85(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_4; implP|impl_noname_4;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startMarkSmooth(impl_noname_4, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_startMarkSmooth_marshall85(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkPointer<SmoothParams > impl_noname_4; implP|impl_noname_4;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::startMarkSmooth_85_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishNodeCache(const CkCallback &cb);
 */

void CProxy_TreePiece::finishNodeCache(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_finishNodeCache_marshall86(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_finishNodeCache_marshall86() {
  int epidx = CkRegisterEp("finishNodeCache(const CkCallback &cb)",
      _call_finishNodeCache_marshall86, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_finishNodeCache_marshall86);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_finishNodeCache_marshall86);

  return epidx;
}


void CkIndex_TreePiece::_call_finishNodeCache_marshall86(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->finishNodeCache(cb);
}

int CkIndex_TreePiece::_callmarshall_finishNodeCache_marshall86(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->finishNodeCache(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_finishNodeCache_marshall86(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::finishNodeCache_86_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
 */

void CProxy_TreePiece::requestRemoteMoments(const Tree::NodeKey &key, int sender, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Tree::NodeKey &key, int sender
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    implP|sender;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    implP|sender;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_requestRemoteMoments_marshall87(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_requestRemoteMoments_marshall87() {
  int epidx = CkRegisterEp("requestRemoteMoments(const Tree::NodeKey &key, int sender)",
      _call_requestRemoteMoments_marshall87, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestRemoteMoments_marshall87);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestRemoteMoments_marshall87);

  return epidx;
}


void CkIndex_TreePiece::_call_requestRemoteMoments_marshall87(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Tree::NodeKey &key, int sender*/
  PUP::fromMem implP(impl_buf);
  Tree::NodeKey key; implP|key;
  int sender; implP|sender;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestRemoteMoments(key, sender);
}

int CkIndex_TreePiece::_callmarshall_requestRemoteMoments_marshall87(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const Tree::NodeKey &key, int sender*/
  PUP::fromMem implP(impl_buf);
  Tree::NodeKey key; implP|key;
  int sender; implP|sender;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestRemoteMoments(key, sender);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_requestRemoteMoments_marshall87(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Tree::NodeKey &key, int sender*/
  PUP::fromMem implP(impl_buf);
  Tree::NodeKey key; implP|key;
  int sender; implP|sender;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("key");
  implDestP|key;
  if (implDestP.hasComments()) implDestP.comment("sender");
  implDestP|sender;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::requestRemoteMoments_87_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
 */

void CProxy_TreePiece::receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeType &)type;
    implP|firstParticle;
    implP|numParticles;
    implP|remIdx;
    //Have to cast away const-ness to get pup routine
    implP|(MultipoleMoments &)moments;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)box;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)boxBall;
    implP|iParticleTypes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeType &)type;
    implP|firstParticle;
    implP|numParticles;
    implP|remIdx;
    //Have to cast away const-ness to get pup routine
    implP|(MultipoleMoments &)moments;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)box;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)boxBall;
    implP|iParticleTypes;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_receiveRemoteMoments_marshall88(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_receiveRemoteMoments_marshall88() {
  int epidx = CkRegisterEp("receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes)",
      _call_receiveRemoteMoments_marshall88, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveRemoteMoments_marshall88);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveRemoteMoments_marshall88);

  return epidx;
}


void CkIndex_TreePiece::_call_receiveRemoteMoments_marshall88(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes*/
  PUP::fromMem implP(impl_buf);
  Tree::NodeKey key; implP|key;
  Tree::NodeType type; implP|type;
  int firstParticle; implP|firstParticle;
  int numParticles; implP|numParticles;
  int remIdx; implP|remIdx;
  MultipoleMoments moments; implP|moments;
  OrientedBox<double > box; implP|box;
  OrientedBox<double > boxBall; implP|boxBall;
  unsigned int iParticleTypes; implP|iParticleTypes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveRemoteMoments(key, type, firstParticle, numParticles, remIdx, moments, box, boxBall, iParticleTypes);
}

int CkIndex_TreePiece::_callmarshall_receiveRemoteMoments_marshall88(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes*/
  PUP::fromMem implP(impl_buf);
  Tree::NodeKey key; implP|key;
  Tree::NodeType type; implP|type;
  int firstParticle; implP|firstParticle;
  int numParticles; implP|numParticles;
  int remIdx; implP|remIdx;
  MultipoleMoments moments; implP|moments;
  OrientedBox<double > box; implP|box;
  OrientedBox<double > boxBall; implP|boxBall;
  unsigned int iParticleTypes; implP|iParticleTypes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveRemoteMoments(key, type, firstParticle, numParticles, remIdx, moments, box, boxBall, iParticleTypes);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_receiveRemoteMoments_marshall88(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes*/
  PUP::fromMem implP(impl_buf);
  Tree::NodeKey key; implP|key;
  Tree::NodeType type; implP|type;
  int firstParticle; implP|firstParticle;
  int numParticles; implP|numParticles;
  int remIdx; implP|remIdx;
  MultipoleMoments moments; implP|moments;
  OrientedBox<double > box; implP|box;
  OrientedBox<double > boxBall; implP|boxBall;
  unsigned int iParticleTypes; implP|iParticleTypes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("key");
  implDestP|key;
  if (implDestP.hasComments()) implDestP.comment("type");
  implDestP|type;
  if (implDestP.hasComments()) implDestP.comment("firstParticle");
  implDestP|firstParticle;
  if (implDestP.hasComments()) implDestP.comment("numParticles");
  implDestP|numParticles;
  if (implDestP.hasComments()) implDestP.comment("remIdx");
  implDestP|remIdx;
  if (implDestP.hasComments()) implDestP.comment("moments");
  implDestP|moments;
  if (implDestP.hasComments()) implDestP.comment("box");
  implDestP|box;
  if (implDestP.hasComments()) implDestP.comment("boxBall");
  implDestP|boxBall;
  if (implDestP.hasComments()) implDestP.comment("iParticleTypes");
  implDestP|iParticleTypes;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::receiveRemoteMoments_88_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void commenceCalculateGravityLocal(void);
 */

void CProxy_TreePiece::commenceCalculateGravityLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_commenceCalculateGravityLocal_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_commenceCalculateGravityLocal_void() {
  int epidx = CkRegisterEp("commenceCalculateGravityLocal(void)",
      _call_commenceCalculateGravityLocal_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_commenceCalculateGravityLocal_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->commenceCalculateGravityLocal();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::commenceCalculateGravityLocal_89_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
 */

void CProxy_TreePiece::calculateGravityRemote(ComputeChunkMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_calculateGravityRemote_ComputeChunkMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_calculateGravityRemote_ComputeChunkMsg() {
  int epidx = CkRegisterEp("calculateGravityRemote(ComputeChunkMsg* impl_msg)",
      _call_calculateGravityRemote_ComputeChunkMsg, CMessage_ComputeChunkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeChunkMsg::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_calculateGravityRemote_ComputeChunkMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->calculateGravityRemote((ComputeChunkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateReSmoothLocal(void);
 */

void CProxy_TreePiece::calculateReSmoothLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_calculateReSmoothLocal_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_calculateReSmoothLocal_void() {
  int epidx = CkRegisterEp("calculateReSmoothLocal(void)",
      _call_calculateReSmoothLocal_void, 0, __idx, 0+CK_EP_TRACEDISABLE);
  return epidx;
}


void CkIndex_TreePiece::_call_calculateReSmoothLocal_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->calculateReSmoothLocal();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::calculateReSmoothLocal_91_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateMarkSmoothLocal(void);
 */

void CProxy_TreePiece::calculateMarkSmoothLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_calculateMarkSmoothLocal_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_calculateMarkSmoothLocal_void() {
  int epidx = CkRegisterEp("calculateMarkSmoothLocal(void)",
      _call_calculateMarkSmoothLocal_void, 0, __idx, 0+CK_EP_TRACEDISABLE);
  return epidx;
}


void CkIndex_TreePiece::_call_calculateMarkSmoothLocal_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->calculateMarkSmoothLocal();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::calculateMarkSmoothLocal_92_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishWalk(void);
 */

void CProxy_TreePiece::finishWalk(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_finishWalk_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_finishWalk_void() {
  int epidx = CkRegisterEp("finishWalk(void)",
      _call_finishWalk_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_finishWalk_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->finishWalk();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::finishWalk_93_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishSmoothWalk(void);
 */

void CProxy_TreePiece::finishSmoothWalk(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_finishSmoothWalk_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_finishSmoothWalk_void() {
  int epidx = CkRegisterEp("finishSmoothWalk(void)",
      _call_finishSmoothWalk_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_finishSmoothWalk_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->finishSmoothWalk();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::finishSmoothWalk_94_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxy_TreePiece::fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_fillRequestNode_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_TreePiece::reg_fillRequestNode_CkCacheRequestMsg() {
  int epidx = CkRegisterEp("fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg)",
      _call_fillRequestNode_CkCacheRequestMsg, CMessage_CkCacheRequestMsg<KeyType >::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCacheRequestMsg<KeyType >::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_fillRequestNode_CkCacheRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->fillRequestNode((CkCacheRequestMsg<KeyType >*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
 */

// Entry point registration function

int CkIndex_TreePiece::reg_receiveNodeCallback_marshall96() {
  int epidx = CkRegisterEp("receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source)",
      _call_receiveNodeCallback_marshall96, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveNodeCallback_marshall96);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveNodeCallback_marshall96);

  return epidx;
}


void CkIndex_TreePiece::_call_receiveNodeCallback_marshall96(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}

int CkIndex_TreePiece::_callmarshall_receiveNodeCallback_marshall96(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
  return 0;
}

void CkIndex_TreePiece::_marshallmessagepup_receiveNodeCallback_marshall96(PUP::er &implDestP,void *impl_msg) {
  /*Fake pupping since we don't really have a message */
  int n=0;
  if (implDestP.hasComments()) implDestP.comment("LOCAL message");
  implDestP|n;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxy_TreePiece::fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_fillRequestParticles_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_TreePiece::reg_fillRequestParticles_CkCacheRequestMsg() {
  int epidx = CkRegisterEp("fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg)",
      _call_fillRequestParticles_CkCacheRequestMsg, CMessage_CkCacheRequestMsg<KeyType >::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCacheRequestMsg<KeyType >::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_fillRequestParticles_CkCacheRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->fillRequestParticles((CkCacheRequestMsg<KeyType >*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxy_TreePiece::fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_fillRequestSmoothParticles_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function

int CkIndex_TreePiece::reg_fillRequestSmoothParticles_CkCacheRequestMsg() {
  int epidx = CkRegisterEp("fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg)",
      _call_fillRequestSmoothParticles_CkCacheRequestMsg, CMessage_CkCacheRequestMsg<KeyType >::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCacheRequestMsg<KeyType >::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_fillRequestSmoothParticles_CkCacheRequestMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->fillRequestSmoothParticles((CkCacheRequestMsg<KeyType >*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
 */

void CProxy_TreePiece::flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_flushSmoothParticles_CkCacheFillMsg(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_flushSmoothParticles_CkCacheFillMsg() {
  int epidx = CkRegisterEp("flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg)",
      _call_flushSmoothParticles_CkCacheFillMsg, CMessage_CkCacheFillMsg<KeyType >::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCacheFillMsg<KeyType >::ckDebugPup);
  return epidx;
}


void CkIndex_TreePiece::_call_flushSmoothParticles_CkCacheFillMsg(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  impl_obj->flushSmoothParticles((CkCacheFillMsg<KeyType >*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

// Entry point registration function

int CkIndex_TreePiece::reg_receiveParticlesCallback_marshall100() {
  int epidx = CkRegisterEp("receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source)",
      _call_receiveParticlesCallback_marshall100, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveParticlesCallback_marshall100);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveParticlesCallback_marshall100);

  return epidx;
}


void CkIndex_TreePiece::_call_receiveParticlesCallback_marshall100(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}

int CkIndex_TreePiece::_callmarshall_receiveParticlesCallback_marshall100(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
  return 0;
}

void CkIndex_TreePiece::_marshallmessagepup_receiveParticlesCallback_marshall100(PUP::er &implDestP,void *impl_msg) {
  /*Fake pupping since we don't really have a message */
  int n=0;
  if (implDestP.hasComments()) implDestP.comment("LOCAL message");
  implDestP|n;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */

// Entry point registration function

int CkIndex_TreePiece::reg_receiveParticlesFullCallback_marshall101() {
  int epidx = CkRegisterEp("receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source)",
      _call_receiveParticlesFullCallback_marshall101, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveParticlesFullCallback_marshall101);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveParticlesFullCallback_marshall101);

  return epidx;
}


void CkIndex_TreePiece::_call_receiveParticlesFullCallback_marshall101(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}

int CkIndex_TreePiece::_callmarshall_receiveParticlesFullCallback_marshall101(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
  return 0;
}

void CkIndex_TreePiece::_marshallmessagepup_receiveParticlesFullCallback_marshall101(PUP::er &implDestP,void *impl_msg) {
  /*Fake pupping since we don't really have a message */
  int n=0;
  if (implDestP.hasComments()) implDestP.comment("LOCAL message");
  implDestP|n;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startlb(const CkCallback &cb, int activeRung);
 */

void CProxy_TreePiece::startlb(const CkCallback &cb, int activeRung, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb, int activeRung
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|activeRung;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|activeRung;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_startlb_marshall102(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_startlb_marshall102() {
  int epidx = CkRegisterEp("startlb(const CkCallback &cb, int activeRung)",
      _call_startlb_marshall102, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startlb_marshall102);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startlb_marshall102);

  return epidx;
}


void CkIndex_TreePiece::_call_startlb_marshall102(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb, int activeRung*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  int activeRung; implP|activeRung;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startlb(cb, activeRung);
}

int CkIndex_TreePiece::_callmarshall_startlb_marshall102(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb, int activeRung*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  int activeRung; implP|activeRung;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startlb(cb, activeRung);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_startlb_marshall102(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb, int activeRung*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  int activeRung; implP|activeRung;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
  if (implDestP.hasComments()) implDestP.comment("activeRung");
  implDestP|activeRung;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::startlb_102_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync(void);
 */

void CProxy_TreePiece::ResumeFromSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_ResumeFromSync_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_ResumeFromSync_void() {
  int epidx = CkRegisterEp("ResumeFromSync(void)",
      _call_ResumeFromSync_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_ResumeFromSync_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->ResumeFromSync();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::ResumeFromSync_103_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
 */

void CProxy_TreePiece::getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &active_part, const int64_t &total_part
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)active_part;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)total_part;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)active_part;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)total_part;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_getParticleInfoForLB_marshall104(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_getParticleInfoForLB_marshall104() {
  int epidx = CkRegisterEp("getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part)",
      _call_getParticleInfoForLB_marshall104, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getParticleInfoForLB_marshall104);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getParticleInfoForLB_marshall104);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_TreePiece::reg_redn_wrapper_getParticleInfoForLB_marshall104() {
  return CkRegisterEp("redn_wrapper_getParticleInfoForLB(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_getParticleInfoForLB_marshall104, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_TreePiece::_call_getParticleInfoForLB_marshall104(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int64_t &active_part, const int64_t &total_part*/
  PUP::fromMem implP(impl_buf);
  int64_t active_part; implP|active_part;
  int64_t total_part; implP|total_part;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getParticleInfoForLB(active_part, total_part);
}

int CkIndex_TreePiece::_callmarshall_getParticleInfoForLB_marshall104(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int64_t &active_part, const int64_t &total_part*/
  PUP::fromMem implP(impl_buf);
  int64_t active_part; implP|active_part;
  int64_t total_part; implP|total_part;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getParticleInfoForLB(active_part, total_part);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_getParticleInfoForLB_marshall104(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int64_t &active_part, const int64_t &total_part*/
  PUP::fromMem implP(impl_buf);
  int64_t active_part; implP|active_part;
  int64_t total_part; implP|total_part;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("active_part");
  implDestP|active_part;
  if (implDestP.hasComments()) implDestP.comment("total_part");
  implDestP|total_part;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::getParticleInfoForLB_104_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doAtSync(void);
 */

void CProxy_TreePiece::doAtSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_doAtSync_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_doAtSync_void() {
  int epidx = CkRegisterEp("doAtSync(void)",
      _call_doAtSync_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_doAtSync_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doAtSync();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::doAtSync_105_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
 */

void CProxy_TreePiece::outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)accelerationBox;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)suffix;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)accelerationBox;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)suffix;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_outputAccelerations_marshall106(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_outputAccelerations_marshall106() {
  int epidx = CkRegisterEp("outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb)",
      _call_outputAccelerations_marshall106, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_outputAccelerations_marshall106);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_outputAccelerations_marshall106);

  return epidx;
}


void CkIndex_TreePiece::_call_outputAccelerations_marshall106(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  OrientedBox<double > accelerationBox; implP|accelerationBox;
  std::string suffix; implP|suffix;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputAccelerations(accelerationBox, suffix, cb);
}

int CkIndex_TreePiece::_callmarshall_outputAccelerations_marshall106(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  OrientedBox<double > accelerationBox; implP|accelerationBox;
  std::string suffix; implP|suffix;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputAccelerations(accelerationBox, suffix, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_outputAccelerations_marshall106(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  OrientedBox<double > accelerationBox; implP|accelerationBox;
  std::string suffix; implP|suffix;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("accelerationBox");
  implDestP|accelerationBox;
  if (implDestP.hasComments()) implDestP.comment("suffix");
  implDestP|suffix;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::outputAccelerations_106_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
 */

void CProxy_TreePiece::outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_5;
    implP|bParaWrite;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_5;
    implP|bParaWrite;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_outputASCII_marshall107(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_outputASCII_marshall107() {
  int epidx = CkRegisterEp("outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb)",
      _call_outputASCII_marshall107, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_outputASCII_marshall107);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_outputASCII_marshall107);

  return epidx;
}


void CkIndex_TreePiece::_call_outputASCII_marshall107(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_5; implP|impl_noname_5;
  int bParaWrite; implP|bParaWrite;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputASCII(impl_noname_5, bParaWrite, cb);
}

int CkIndex_TreePiece::_callmarshall_outputASCII_marshall107(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_5; implP|impl_noname_5;
  int bParaWrite; implP|bParaWrite;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputASCII(impl_noname_5, bParaWrite, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_outputASCII_marshall107(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_5; implP|impl_noname_5;
  int bParaWrite; implP|bParaWrite;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
  if (implDestP.hasComments()) implDestP.comment("bParaWrite");
  implDestP|bParaWrite;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::outputASCII_107_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */

void CProxy_TreePiece::oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_avOut, impl_cnt_avOut;
  impl_off_avOut=impl_off=CK_ALIGN(impl_off,sizeof(Vector3D<double >));
  impl_off+=(impl_cnt_avOut=sizeof(Vector3D<double >)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_6;
    implP|impl_off_avOut;
    implP|impl_cnt_avOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_6;
    implP|impl_off_avOut;
    implP|impl_cnt_avOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_avOut,avOut,impl_cnt_avOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutVec_marshall108(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_oneNodeOutVec_marshall108() {
  int epidx = CkRegisterEp("oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb)",
      _call_oneNodeOutVec_marshall108, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_oneNodeOutVec_marshall108);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_oneNodeOutVec_marshall108);

  return epidx;
}


void CkIndex_TreePiece::_call_oneNodeOutVec_marshall108(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_6; implP|impl_noname_6;
  int impl_off_avOut, impl_cnt_avOut; 
  implP|impl_off_avOut;
  implP|impl_cnt_avOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Vector3D<double > *avOut=(Vector3D<double > *)(impl_buf+impl_off_avOut);
  impl_obj->oneNodeOutVec(impl_noname_6, avOut, nPart, iIndex, bDone, cb);
}

int CkIndex_TreePiece::_callmarshall_oneNodeOutVec_marshall108(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_6; implP|impl_noname_6;
  int impl_off_avOut, impl_cnt_avOut; 
  implP|impl_off_avOut;
  implP|impl_cnt_avOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Vector3D<double > *avOut=(Vector3D<double > *)(impl_buf+impl_off_avOut);
  impl_obj->oneNodeOutVec(impl_noname_6, avOut, nPart, iIndex, bDone, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_oneNodeOutVec_marshall108(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_6; implP|impl_noname_6;
  int impl_off_avOut, impl_cnt_avOut; 
  implP|impl_off_avOut;
  implP|impl_cnt_avOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  Vector3D<double > *avOut=(Vector3D<double > *)(impl_buf+impl_off_avOut);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
  if (implDestP.hasComments()) implDestP.comment("avOut");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*avOut))<impl_cnt_avOut;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|avOut[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nPart");
  implDestP|nPart;
  if (implDestP.hasComments()) implDestP.comment("iIndex");
  implDestP|iIndex;
  if (implDestP.hasComments()) implDestP.comment("bDone");
  implDestP|bDone;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::oneNodeOutVec_108_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */

void CProxy_TreePiece::oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_adOut, impl_cnt_adOut;
  impl_off_adOut=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_adOut=sizeof(double)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_7;
    implP|impl_off_adOut;
    implP|impl_cnt_adOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_7;
    implP|impl_off_adOut;
    implP|impl_cnt_adOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_adOut,adOut,impl_cnt_adOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutArr_marshall109(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_oneNodeOutArr_marshall109() {
  int epidx = CkRegisterEp("oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb)",
      _call_oneNodeOutArr_marshall109, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_oneNodeOutArr_marshall109);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_oneNodeOutArr_marshall109);

  return epidx;
}


void CkIndex_TreePiece::_call_oneNodeOutArr_marshall109(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_7; implP|impl_noname_7;
  int impl_off_adOut, impl_cnt_adOut; 
  implP|impl_off_adOut;
  implP|impl_cnt_adOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *adOut=(double *)(impl_buf+impl_off_adOut);
  impl_obj->oneNodeOutArr(impl_noname_7, adOut, nPart, iIndex, bDone, cb);
}

int CkIndex_TreePiece::_callmarshall_oneNodeOutArr_marshall109(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_7; implP|impl_noname_7;
  int impl_off_adOut, impl_cnt_adOut; 
  implP|impl_off_adOut;
  implP|impl_cnt_adOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *adOut=(double *)(impl_buf+impl_off_adOut);
  impl_obj->oneNodeOutArr(impl_noname_7, adOut, nPart, iIndex, bDone, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_oneNodeOutArr_marshall109(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_7; implP|impl_noname_7;
  int impl_off_adOut, impl_cnt_adOut; 
  implP|impl_off_adOut;
  implP|impl_cnt_adOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  int bDone; implP|bDone;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *adOut=(double *)(impl_buf+impl_off_adOut);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
  if (implDestP.hasComments()) implDestP.comment("adOut");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*adOut))<impl_cnt_adOut;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|adOut[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nPart");
  implDestP|nPart;
  if (implDestP.hasComments()) implDestP.comment("iIndex");
  implDestP|iIndex;
  if (implDestP.hasComments()) implDestP.comment("bDone");
  implDestP|bDone;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::oneNodeOutArr_109_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
 */

void CProxy_TreePiece::outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Ck::IO::Session &)impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Ck::IO::Session &)impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_9;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_outputBinary_marshall110(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_outputBinary_marshall110() {
  int epidx = CkRegisterEp("outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9)",
      _call_outputBinary_marshall110, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_outputBinary_marshall110);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_outputBinary_marshall110);

  return epidx;
}


void CkIndex_TreePiece::_call_outputBinary_marshall110(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  Ck::IO::Session impl_noname_8; implP|impl_noname_8;
  CkReference<OutputParams > impl_noname_9; implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputBinary(impl_noname_8, impl_noname_9);
}

int CkIndex_TreePiece::_callmarshall_outputBinary_marshall110(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  Ck::IO::Session impl_noname_8; implP|impl_noname_8;
  CkReference<OutputParams > impl_noname_9; implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputBinary(impl_noname_8, impl_noname_9);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_outputBinary_marshall110(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  Ck::IO::Session impl_noname_8; implP|impl_noname_8;
  CkReference<OutputParams > impl_noname_9; implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_8");
  implDestP|impl_noname_8;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_9");
  implDestP|impl_noname_9;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::outputBinary_110_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
 */

void CProxy_TreePiece::minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_minmaxNCOut_marshall111(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_minmaxNCOut_marshall111() {
  int epidx = CkRegisterEp("minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb)",
      _call_minmaxNCOut_marshall111, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_minmaxNCOut_marshall111);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_minmaxNCOut_marshall111);

  return epidx;
}


void CkIndex_TreePiece::_call_minmaxNCOut_marshall111(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->minmaxNCOut(params, cb);
}

int CkIndex_TreePiece::_callmarshall_minmaxNCOut_marshall111(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->minmaxNCOut(params, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_minmaxNCOut_marshall111(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("params");
  implDestP|params;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::minmaxNCOut_111_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
 */

void CProxy_TreePiece::outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nStart;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nStart;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_outputBinaryStart_marshall112(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_outputBinaryStart_marshall112() {
  int epidx = CkRegisterEp("outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb)",
      _call_outputBinaryStart_marshall112, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_outputBinaryStart_marshall112);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_outputBinaryStart_marshall112);

  return epidx;
}


void CkIndex_TreePiece::_call_outputBinaryStart_marshall112(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  int64_t nStart; implP|nStart;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputBinaryStart(params, nStart, cb);
}

int CkIndex_TreePiece::_callmarshall_outputBinaryStart_marshall112(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  int64_t nStart; implP|nStart;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputBinaryStart(params, nStart, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_outputBinaryStart_marshall112(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > params; implP|params;
  int64_t nStart; implP|nStart;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("params");
  implDestP|params;
  if (implDestP.hasComments()) implDestP.comment("nStart");
  implDestP|nStart;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::outputBinaryStart_112_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
 */

void CProxy_TreePiece::oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_aiOut, impl_cnt_aiOut;
  impl_off_aiOut=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_aiOut=sizeof(int)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_a;
    implP|impl_off_aiOut;
    implP|impl_cnt_aiOut;
    implP|nPart;
    implP|iIndex;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_a;
    implP|impl_off_aiOut;
    implP|impl_cnt_aiOut;
    implP|nPart;
    implP|iIndex;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_aiOut,aiOut,impl_cnt_aiOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutIntArr_marshall113(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_oneNodeOutIntArr_marshall113() {
  int epidx = CkRegisterEp("oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb)",
      _call_oneNodeOutIntArr_marshall113, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_oneNodeOutIntArr_marshall113);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_oneNodeOutIntArr_marshall113);

  return epidx;
}


void CkIndex_TreePiece::_call_oneNodeOutIntArr_marshall113(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_a; implP|impl_noname_a;
  int impl_off_aiOut, impl_cnt_aiOut; 
  implP|impl_off_aiOut;
  implP|impl_cnt_aiOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *aiOut=(int *)(impl_buf+impl_off_aiOut);
  impl_obj->oneNodeOutIntArr(impl_noname_a, aiOut, nPart, iIndex, cb);
}

int CkIndex_TreePiece::_callmarshall_oneNodeOutIntArr_marshall113(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_a; implP|impl_noname_a;
  int impl_off_aiOut, impl_cnt_aiOut; 
  implP|impl_off_aiOut;
  implP|impl_cnt_aiOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *aiOut=(int *)(impl_buf+impl_off_aiOut);
  impl_obj->oneNodeOutIntArr(impl_noname_a, aiOut, nPart, iIndex, cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_oneNodeOutIntArr_marshall113(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkReference<OutputParams > impl_noname_a; implP|impl_noname_a;
  int impl_off_aiOut, impl_cnt_aiOut; 
  implP|impl_off_aiOut;
  implP|impl_cnt_aiOut;
  int nPart; implP|nPart;
  int iIndex; implP|iIndex;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *aiOut=(int *)(impl_buf+impl_off_aiOut);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_a");
  implDestP|impl_noname_a;
  if (implDestP.hasComments()) implDestP.comment("aiOut");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*aiOut))<impl_cnt_aiOut;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|aiOut[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nPart");
  implDestP|nPart;
  if (implDestP.hasComments()) implDestP.comment("iIndex");
  implDestP|iIndex;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::oneNodeOutIntArr_113_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputStatistics(const CkCallback &cb);
 */

void CProxy_TreePiece::outputStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_outputStatistics_marshall114(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_outputStatistics_marshall114() {
  int epidx = CkRegisterEp("outputStatistics(const CkCallback &cb)",
      _call_outputStatistics_marshall114, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_outputStatistics_marshall114);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_outputStatistics_marshall114);

  return epidx;
}


void CkIndex_TreePiece::_call_outputStatistics_marshall114(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputStatistics(cb);
}

int CkIndex_TreePiece::_callmarshall_outputStatistics_marshall114(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->outputStatistics(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_outputStatistics_marshall114(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::outputStatistics_114_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectStatistics(const CkCallback &cb);
 */

void CProxy_TreePiece::collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_collectStatistics_marshall115(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_collectStatistics_marshall115() {
  int epidx = CkRegisterEp("collectStatistics(const CkCallback &cb)",
      _call_collectStatistics_marshall115, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_collectStatistics_marshall115);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_collectStatistics_marshall115);

  return epidx;
}


void CkIndex_TreePiece::_call_collectStatistics_marshall115(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectStatistics(cb);
}

int CkIndex_TreePiece::_callmarshall_collectStatistics_marshall115(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectStatistics(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_collectStatistics_marshall115(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::collectStatistics_115_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void continueStartRemoteChunk(int chunk);
 */

void CProxy_TreePiece::continueStartRemoteChunk(int chunk, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int chunk
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|chunk;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|chunk;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_continueStartRemoteChunk_marshall116(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_continueStartRemoteChunk_marshall116() {
  int epidx = CkRegisterEp("continueStartRemoteChunk(int chunk)",
      _call_continueStartRemoteChunk_marshall116, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_continueStartRemoteChunk_marshall116);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_continueStartRemoteChunk_marshall116);

  return epidx;
}


void CkIndex_TreePiece::_call_continueStartRemoteChunk_marshall116(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int chunk*/
  PUP::fromMem implP(impl_buf);
  int chunk; implP|chunk;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->continueStartRemoteChunk(chunk);
}

int CkIndex_TreePiece::_callmarshall_continueStartRemoteChunk_marshall116(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: int chunk*/
  PUP::fromMem implP(impl_buf);
  int chunk; implP|chunk;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->continueStartRemoteChunk(chunk);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_continueStartRemoteChunk_marshall116(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int chunk*/
  PUP::fromMem implP(impl_buf);
  int chunk; implP|chunk;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("chunk");
  implDestP|chunk;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::continueStartRemoteChunk_116_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void continueWrapUp(void);
 */

void CProxy_TreePiece::continueWrapUp(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_continueWrapUp_void(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_continueWrapUp_void() {
  int epidx = CkRegisterEp("continueWrapUp(void)",
      _call_continueWrapUp_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_continueWrapUp_void(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->continueWrapUp();
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::continueWrapUp_117_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void balanceBeforeInitialForces(const CkCallback &cb);
 */

void CProxy_TreePiece::balanceBeforeInitialForces(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TreePiece::idx_balanceBeforeInitialForces_marshall118(),0);
}

// Entry point registration function

int CkIndex_TreePiece::reg_balanceBeforeInitialForces_marshall118() {
  int epidx = CkRegisterEp("balanceBeforeInitialForces(const CkCallback &cb)",
      _call_balanceBeforeInitialForces_marshall118, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_balanceBeforeInitialForces_marshall118);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_balanceBeforeInitialForces_marshall118);

  return epidx;
}


void CkIndex_TreePiece::_call_balanceBeforeInitialForces_marshall118(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->balanceBeforeInitialForces(cb);
}

int CkIndex_TreePiece::_callmarshall_balanceBeforeInitialForces_marshall118(char* impl_buf, void* impl_obj_void) {
  TreePiece* impl_obj = static_cast< TreePiece *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->balanceBeforeInitialForces(cb);
  return implP.size();
}

void CkIndex_TreePiece::_marshallmessagepup_balanceBeforeInitialForces_marshall118(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TreePiece::balanceBeforeInitialForces_118_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreePiece(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_TreePiece::reg_TreePiece_CkMigrateMessage() {
  int epidx = CkRegisterEp("TreePiece(CkMigrateMessage* impl_msg)",
      _call_TreePiece_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_TreePiece::_call_TreePiece_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  TreePiece* impl_obj = static_cast<TreePiece *>(impl_obj_void);
  new (impl_obj) TreePiece((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreePiece(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence(void);
 */

void CProxySection_TreePiece::quiescence(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_quiescence_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void memCacheStats(const CkCallback &cb);
 */

void CProxySection_TreePiece::memCacheStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_memCacheStats_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucket(dummyMsg* impl_msg);
 */

void CProxySection_TreePiece::nextBucket(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucket_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketSmooth(dummyMsg* impl_msg);
 */

void CProxySection_TreePiece::nextBucketSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucketSmooth_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketReSmooth(dummyMsg* impl_msg);
 */

void CProxySection_TreePiece::nextBucketReSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucketReSmooth_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nextBucketMarkSmooth(dummyMsg* impl_msg);
 */

void CProxySection_TreePiece::nextBucketMarkSmooth(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_nextBucketMarkSmooth_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
 */

void CProxySection_TreePiece::setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nReplicas;
    //Have to cast away const-ness to get pup routine
    implP|(Vector3D<double > &)fPeriod;
    implP|bEwald;
    implP|fEwCut;
    implP|fEwhCut;
    implP|bPeriod;
    implP|bComove;
    implP|dRhoFac;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nReplicas;
    //Have to cast away const-ness to get pup routine
    implP|(Vector3D<double > &)fPeriod;
    implP|bEwald;
    implP|fEwCut;
    implP|fEwhCut;
    implP|bPeriod;
    implP|bComove;
    implP|dRhoFac;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setPeriodic_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldInit(void);
 */

void CProxySection_TreePiece::EwaldInit(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_EwaldInit_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initCoolingData(const CkCallback &cb);
 */

void CProxySection_TreePiece::initCoolingData(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initCoolingData_marshall10(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateEwald(dummyMsg* impl_msg);
 */

void CProxySection_TreePiece::calculateEwald(dummyMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateEwald_dummyMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldGPUComplete(void);
 */

void CProxySection_TreePiece::EwaldGPUComplete(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_EwaldGPUComplete_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void EwaldGPU(void);
 */

void CProxySection_TreePiece::EwaldGPU(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_EwaldGPU_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void velScale(double dScale, const CkCallback &cb);
 */

void CProxySection_TreePiece::velScale(double dScale, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dScale, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dScale;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dScale;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_velScale_marshall14(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
 */

void CProxySection_TreePiece::loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::string &filename, double dTuFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_loadNChilada_marshall15(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
 */

void CProxySection_TreePiece::readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    implP|bParaRead;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    implP|bParaRead;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_readFloatBinary_marshall16(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
 */

void CProxySection_TreePiece::loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTuFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_loadTipsy_marshall17(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
 */

void CProxySection_TreePiece::readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_readTipsyArray_marshall18(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resetMetals(const CkCallback &cb);
 */

void CProxySection_TreePiece::resetMetals(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_resetMetals_marshall19(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMaxIOrds(const CkCallback &cb);
 */

void CProxySection_TreePiece::getMaxIOrds(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getMaxIOrds_marshall20(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RestartEnergy(double dTuFac, const CkCallback &cb);
 */

void CProxySection_TreePiece::RestartEnergy(double dTuFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dTuFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dTuFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_RestartEnergy_marshall21(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findTotalMass(const CkCallback &cb);
 */

void CProxySection_TreePiece::findTotalMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_findTotalMass_marshall22(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTotalMass(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::recvTotalMass(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_recvTotalMass_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxySection_TreePiece::setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iStage;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iStage;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setupWrite_marshall24(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
 */

void CProxySection_TreePiece::parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iPass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iPass;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_parallelWrite_marshall25(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxySection_TreePiece::serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(u_int64_t &)iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTfac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_serialWrite_marshall26(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
 */

void CProxySection_TreePiece::oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_particles, impl_cnt_particles;
  impl_off_particles=impl_off=CK_ALIGN(impl_off,sizeof(GravityParticle));
  impl_off+=(impl_cnt_particles=sizeof(GravityParticle)*(iOutParticles+2));
  int impl_off_pGas, impl_cnt_pGas;
  impl_off_pGas=impl_off=CK_ALIGN(impl_off,sizeof(extraSPHData));
  impl_off+=(impl_cnt_pGas=sizeof(extraSPHData)*(iOutSPH));
  int impl_off_pStar, impl_cnt_pStar;
  impl_off_pStar=impl_off=CK_ALIGN(impl_off,sizeof(extraStarData));
  impl_off+=(impl_cnt_pStar=sizeof(extraStarData)*(iOutStar));
  int impl_off_piSPH, impl_cnt_piSPH;
  impl_off_piSPH=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_piSPH=sizeof(int)*(iOutSPH));
  int impl_off_piStar, impl_cnt_piStar;
  impl_off_piStar=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_piStar=sizeof(int)*(iOutStar));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iIndex;
    implP|iOutParticles;
    implP|iOutSPH;
    implP|iOutStar;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|impl_off_piSPH;
    implP|impl_cnt_piSPH;
    implP|impl_off_piStar;
    implP|impl_cnt_piStar;
    implP|iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iIndex;
    implP|iOutParticles;
    implP|iOutSPH;
    implP|iOutStar;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|impl_off_piSPH;
    implP|impl_cnt_piSPH;
    implP|impl_off_piStar;
    implP|impl_cnt_piStar;
    implP|iPrevOffset;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)filename;
    implP|dTime;
    implP|dvFac;
    implP|duTFac;
    implP|bDoublePos;
    implP|bDoubleVel;
    implP|bCool;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_particles,particles,impl_cnt_particles);
  memcpy(impl_buf+impl_off_pGas,pGas,impl_cnt_pGas);
  memcpy(impl_buf+impl_off_pStar,pStar,impl_cnt_pStar);
  memcpy(impl_buf+impl_off_piSPH,piSPH,impl_cnt_piSPH);
  memcpy(impl_buf+impl_off_piStar,piStar,impl_cnt_piStar);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeWrite_marshall27(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
 */

void CProxySection_TreePiece::reOrder(const int64_t &nMaxOrder, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &nMaxOrder, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nMaxOrder;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nMaxOrder;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_reOrder_marshall28(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ioShuffle(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::ioShuffle(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ioShuffle_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */

void CProxySection_TreePiece::ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ioAcceptSortedParticles_ParticleShuffleMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void assignKeys(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::assignKeys(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_assignKeys_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
 */

void CProxySection_TreePiece::evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const SFC::Key *keys, int n, int isRefine, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_keys, impl_cnt_keys;
  impl_off_keys=impl_off=CK_ALIGN(impl_off,sizeof(SFC::Key));
  impl_off+=(impl_cnt_keys=sizeof(SFC::Key)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_keys;
    implP|impl_cnt_keys;
    implP|n;
    implP|isRefine;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_keys,keys,impl_cnt_keys);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_evaluateBoundaries_marshall32(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unshuffleParticles(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::unshuffleParticles(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_unshuffleParticles_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
 */

void CProxySection_TreePiece::acceptSortedParticles(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_acceptSortedParticles_ParticleShuffleMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unshuffleParticlesWoDD(const CkCallback &cb);
 */

void CProxySection_TreePiece::unshuffleParticlesWoDD(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_unshuffleParticlesWoDD_marshall35(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void shuffleAfterQD(void);
 */

void CProxySection_TreePiece::shuffleAfterQD(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_shuffleAfterQD_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
 */

void CProxySection_TreePiece::acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_acceptSortedParticlesFromOther_ParticleShuffleMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initORBPieces(const CkCallback &cb);
 */

void CProxySection_TreePiece::initORBPieces(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initORBPieces_marshall38(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
 */

void CProxySection_TreePiece::initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|myCount;
    implP|myCountGas;
    implP|myCountStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cback;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|myCount;
    implP|myCountGas;
    implP|myCountStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cback;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initBeforeORBSend_marshall39(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendORBParticles(void);
 */

void CProxySection_TreePiece::sendORBParticles(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_sendORBParticles_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
 */

void CProxySection_TreePiece::acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_particles, impl_cnt_particles;
  impl_off_particles=impl_off=CK_ALIGN(impl_off,sizeof(GravityParticle));
  impl_off+=(impl_cnt_particles=sizeof(GravityParticle)*(n));
  int impl_off_pGas, impl_cnt_pGas;
  impl_off_pGas=impl_off=CK_ALIGN(impl_off,sizeof(extraSPHData));
  impl_off+=(impl_cnt_pGas=sizeof(extraSPHData)*(nGasIn));
  int impl_off_pStar, impl_cnt_pStar;
  impl_off_pStar=impl_off=CK_ALIGN(impl_off,sizeof(extraStarData));
  impl_off+=(impl_cnt_pStar=sizeof(extraStarData)*(nStarIn));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|n;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|nGasIn;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|nStarIn;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_particles;
    implP|impl_cnt_particles;
    implP|n;
    implP|impl_off_pGas;
    implP|impl_cnt_pGas;
    implP|nGasIn;
    implP|impl_off_pStar;
    implP|impl_cnt_pStar;
    implP|nStarIn;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_particles,particles,impl_cnt_particles);
  memcpy(impl_buf+impl_off_pGas,pGas,impl_cnt_pGas);
  memcpy(impl_buf+impl_off_pStar,pStar,impl_cnt_pStar);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_acceptORBParticles_marshall41(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
 */

void CProxySection_TreePiece::finalizeBoundaries(ORBSplittersMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finalizeBoundaries_ORBSplittersMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
 */

void CProxySection_TreePiece::evaluateParticleCounts(ORBSplittersMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_evaluateParticleCounts_ORBSplittersMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
 */

void CProxySection_TreePiece::kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dDelta, impl_cnt_dDelta;
  impl_off_dDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dDelta=sizeof(double)*(MAXRUNG+1));
  int impl_off_duDelta, impl_cnt_duDelta;
  impl_off_duDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_duDelta=sizeof(double)*(MAXRUNG+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    implP|impl_off_dDelta;
    implP|impl_cnt_dDelta;
    implP|bClosing;
    implP|bNeedVPred;
    implP|bGasIsothermal;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    implP|impl_off_dDelta;
    implP|impl_cnt_dDelta;
    implP|bClosing;
    implP|bNeedVPred;
    implP|bGasIsothermal;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dDelta,dDelta,impl_cnt_dDelta);
  memcpy(impl_buf+impl_off_duDelta,duDelta,impl_cnt_duDelta);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_kick_marshall44(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initAccel(int iKickRung, const CkCallback &cb);
 */

void CProxySection_TreePiece::initAccel(int iKickRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initAccel_marshall45(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
 */

void CProxySection_TreePiece::adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iKickRung;
    implP|bEpsAccStep;
    implP|bGravStep;
    implP|bSphStep;
    implP|bViscosityLimitdt;
    implP|dEta;
    implP|dEtaCourant;
    implP|dEtauDot;
    implP|dDelta;
    implP|dAccFac;
    implP|dCosmoFac;
    implP|dhMinOverSoft;
    implP|dResolveJeans;
    implP|bDoGas;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iKickRung;
    implP|bEpsAccStep;
    implP|bGravStep;
    implP|bSphStep;
    implP|bViscosityLimitdt;
    implP|dEta;
    implP|dEtaCourant;
    implP|dEtauDot;
    implP|dDelta;
    implP|dAccFac;
    implP|dCosmoFac;
    implP|dhMinOverSoft;
    implP|dResolveJeans;
    implP|bDoGas;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_adjust_marshall46(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
 */

void CProxySection_TreePiece::truncateRung(int iCurrMaxRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iCurrMaxRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iCurrMaxRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iCurrMaxRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_truncateRung_marshall47(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rungStats(const CkCallback &cb);
 */

void CProxySection_TreePiece::rungStats(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_rungStats_marshall48(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void countActive(int activeRung, const CkCallback &cb);
 */

void CProxySection_TreePiece::countActive(int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_countActive_marshall49(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void assignDomain(const CkCallback &cb);
 */

void CProxySection_TreePiece::assignDomain(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_assignDomain_marshall50(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
 */

void CProxySection_TreePiece::drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dDelta;
    implP|bNeedVPred;
    implP|bGasIsoThermal;
    implP|dvDelta;
    implP|duDelta;
    implP|nGrowMass;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)buildTree;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dDelta;
    implP|bNeedVPred;
    implP|bGasIsoThermal;
    implP|dvDelta;
    implP|duDelta;
    implP|nGrowMass;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)buildTree;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_drift_marshall51(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void starCenterOfMass(const CkCallback &cb);
 */

void CProxySection_TreePiece::starCenterOfMass(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_starCenterOfMass_marshall52(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcEnergy(const CkCallback &cb);
 */

void CProxySection_TreePiece::calcEnergy(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calcEnergy_marshall53(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void colNParts(const CkCallback &cb);
 */

void CProxySection_TreePiece::colNParts(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_colNParts_marshall54(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
 */

void CProxySection_TreePiece::newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const NewMaxOrder *nStarts, int n, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_nStarts, impl_cnt_nStarts;
  impl_off_nStarts=impl_off=CK_ALIGN(impl_off,sizeof(NewMaxOrder));
  impl_off+=(impl_cnt_nStarts=sizeof(NewMaxOrder)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_nStarts;
    implP|impl_cnt_nStarts;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_nStarts;
    implP|impl_cnt_nStarts;
    implP|n;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_nStarts,nStarts,impl_cnt_nStarts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_newOrder_marshall55(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
 */

void CProxySection_TreePiece::setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalSPH;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalDark;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalSPH;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalDark;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)_nTotalStar;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setNParts_marshall56(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setSoft(double dSoft, const CkCallback &cb);
 */

void CProxySection_TreePiece::setSoft(double dSoft, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dSoft, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dSoft;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dSoft;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setSoft_marshall57(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
 */

void CProxySection_TreePiece::physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dSoftMax;
    implP|dFac;
    implP|bSoftMaxMul;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dSoftMax;
    implP|dFac;
    implP|bSoftMaxMul;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_physicalSoft_marshall58(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
 */

void CProxySection_TreePiece::growMass(int nGrowMass, double dDeltaM, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int nGrowMass, double dDeltaM, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nGrowMass;
    implP|dDeltaM;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nGrowMass;
    implP|dDeltaM;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_growMass_marshall59(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
 */

void CProxySection_TreePiece::InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dTuFac, double z, double dTime, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dTuFac;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dTuFac;
    implP|z;
    implP|dTime;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_InitEnergy_marshall60(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
 */

void CProxySection_TreePiece::updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_duDelta, impl_cnt_duDelta;
  impl_off_duDelta=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_duDelta=sizeof(double)*(MAXRUNG+1));
  int impl_off_dStartTime, impl_cnt_dStartTime;
  impl_off_dStartTime=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_dStartTime=sizeof(double)*(MAXRUNG+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    implP|impl_off_dStartTime;
    implP|impl_cnt_dStartTime;
    implP|bCool;
    implP|bAll;
    implP|bUpdateState;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|impl_off_duDelta;
    implP|impl_cnt_duDelta;
    implP|impl_off_dStartTime;
    implP|impl_cnt_dStartTime;
    implP|bCool;
    implP|bAll;
    implP|bUpdateState;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_duDelta,duDelta,impl_cnt_duDelta);
  memcpy(impl_buf+impl_off_dStartTime,dStartTime,impl_cnt_dStartTime);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_updateuDot_marshall61(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ballMax(int activeRung, double dFac, const CkCallback &cb);
 */

void CProxySection_TreePiece::ballMax(int activeRung, double dFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, double dFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|dFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|dFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ballMax_marshall62(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
 */

void CProxySection_TreePiece::sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bOn, int activeRung, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bOn;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bOn;
    implP|activeRung;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_sphViscosityLimiter_marshall63(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
 */

void CProxySection_TreePiece::getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double gamma, double gammam1, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gamma;
    implP|gammam1;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gamma;
    implP|gammam1;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getAdiabaticGasPressure_marshall64(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
 */

void CProxySection_TreePiece::getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double gamma, double gammam1, double dResolveJeans, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gamma;
    implP|gammam1;
    implP|dResolveJeans;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gamma;
    implP|gammam1;
    implP|dResolveJeans;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getCoolingGasPressure_marshall65(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initRand(int iRand, const CkCallback &cb);
 */

void CProxySection_TreePiece::initRand(int iRand, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iRand, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iRand;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iRand;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_initRand_marshall66(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
 */

void CProxySection_TreePiece::FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Stfm &)param;
    implP|dTime;
    implP|dDelta;
    implP|dCosmoFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Stfm &)param;
    implP|dTime;
    implP|dDelta;
    implP|dCosmoFac;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_FormStars_marshall67(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushStarLog(const CkCallback &cb);
 */

void CProxySection_TreePiece::flushStarLog(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_flushStarLog_marshall68(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
 */

void CProxySection_TreePiece::Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Fdbk &)fb;
    implP|dTime;
    implP|dDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Fdbk &)fb;
    implP|dTime;
    implP|dDelta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_Feedback_marshall69(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
 */

void CProxySection_TreePiece::massMetalsEnergyCheck(int bPreDist, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bPreDist, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bPreDist;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bPreDist;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_massMetalsEnergyCheck_marshall70(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
 */

void CProxySection_TreePiece::setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iSetMask, const char *file, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_file, impl_cnt_file;
  impl_off_file=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_file=sizeof(char)*(256));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iSetMask;
    implP|impl_off_file;
    implP|impl_cnt_file;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iSetMask;
    implP|impl_off_file;
    implP|impl_cnt_file;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_file,file,impl_cnt_file);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setTypeFromFile_marshall71(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCOM(const CkCallback &cb, int bLiveViz);
 */

void CProxySection_TreePiece::getCOM(const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb, int bLiveViz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getCOM_marshall72(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
 */

void CProxySection_TreePiece::getCOMByType(int iType, const CkCallback &cb, int bLiveViz, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iType, const CkCallback &cb, int bLiveViz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iType;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iType;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|bLiveViz;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getCOMByType_marshall73(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
 */

void CProxySection_TreePiece::DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb, int liveVizDump
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|liveVizDump;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|liveVizDump;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_DumpFrame_marshall74(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
 */

void CProxySection_TreePiece::liveVizDumpFrameInit(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_liveVizDumpFrameInit_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setProjections(int bOn);
 */

void CProxySection_TreePiece::setProjections(int bOn, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bOn
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bOn;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bOn;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_setProjections_marshall76(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void buildTree(int bucketSize, const CkCallback &cb);
 */

void CProxySection_TreePiece::buildTree(int bucketSize, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int bucketSize, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|bucketSize;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|bucketSize;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_buildTree_marshall77(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startOctTreeBuild(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::startOctTreeBuild(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startOctTreeBuild_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBoundary(const SFC::Key &key, const NborDir &dir);
 */

void CProxySection_TreePiece::recvBoundary(const SFC::Key &key, const NborDir &dir, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const SFC::Key &key, const NborDir &dir
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(SFC::Key &)key;
    //Have to cast away const-ness to get pup routine
    implP|(NborDir &)dir;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(SFC::Key &)key;
    //Have to cast away const-ness to get pup routine
    implP|(NborDir &)dir;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_recvBoundary_marshall79(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvdBoundaries(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::recvdBoundaries(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_recvdBoundaries_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startORBTreeBuild(CkReductionMsg* impl_msg);
 */

void CProxySection_TreePiece::startORBTreeBuild(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startORBTreeBuild_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
 */

void CProxySection_TreePiece::startGravity(int activeRung, double myTheta, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int activeRung, double myTheta, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|activeRung;
    implP|myTheta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|activeRung;
    implP|myTheta;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startGravity_marshall82(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
 */

void CProxySection_TreePiece::startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_2;
    implP|iLowhFix;
    implP|nSmooth;
    implP|dfBall2OverSoft2;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_2;
    implP|iLowhFix;
    implP|nSmooth;
    implP|dfBall2OverSoft2;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startSmooth_marshall83(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
 */

void CProxySection_TreePiece::startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startReSmooth_marshall84(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
 */

void CProxySection_TreePiece::startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkPointer<SmoothParams > &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startMarkSmooth_marshall85(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishNodeCache(const CkCallback &cb);
 */

void CProxySection_TreePiece::finishNodeCache(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finishNodeCache_marshall86(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
 */

void CProxySection_TreePiece::requestRemoteMoments(const Tree::NodeKey &key, int sender, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Tree::NodeKey &key, int sender
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    implP|sender;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    implP|sender;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_requestRemoteMoments_marshall87(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
 */

void CProxySection_TreePiece::receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeType &)type;
    implP|firstParticle;
    implP|numParticles;
    implP|remIdx;
    //Have to cast away const-ness to get pup routine
    implP|(MultipoleMoments &)moments;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)box;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)boxBall;
    implP|iParticleTypes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeKey &)key;
    //Have to cast away const-ness to get pup routine
    implP|(Tree::NodeType &)type;
    implP|firstParticle;
    implP|numParticles;
    implP|remIdx;
    //Have to cast away const-ness to get pup routine
    implP|(MultipoleMoments &)moments;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)box;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)boxBall;
    implP|iParticleTypes;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_receiveRemoteMoments_marshall88(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void commenceCalculateGravityLocal(void);
 */

void CProxySection_TreePiece::commenceCalculateGravityLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_commenceCalculateGravityLocal_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
 */

void CProxySection_TreePiece::calculateGravityRemote(ComputeChunkMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateGravityRemote_ComputeChunkMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateReSmoothLocal(void);
 */

void CProxySection_TreePiece::calculateReSmoothLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateReSmoothLocal_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateMarkSmoothLocal(void);
 */

void CProxySection_TreePiece::calculateMarkSmoothLocal(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_calculateMarkSmoothLocal_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishWalk(void);
 */

void CProxySection_TreePiece::finishWalk(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finishWalk_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishSmoothWalk(void);
 */

void CProxySection_TreePiece::finishSmoothWalk(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_finishSmoothWalk_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxySection_TreePiece::fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_fillRequestNode_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxySection_TreePiece::fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_fillRequestParticles_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
 */

void CProxySection_TreePiece::fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_fillRequestSmoothParticles_CkCacheRequestMsg(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
 */

void CProxySection_TreePiece::flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_flushSmoothParticles_CkCacheFillMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startlb(const CkCallback &cb, int activeRung);
 */

void CProxySection_TreePiece::startlb(const CkCallback &cb, int activeRung, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb, int activeRung
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|activeRung;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    implP|activeRung;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_startlb_marshall102(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync(void);
 */

void CProxySection_TreePiece::ResumeFromSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_ResumeFromSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
 */

void CProxySection_TreePiece::getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int64_t &active_part, const int64_t &total_part
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)active_part;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)total_part;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)active_part;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)total_part;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_getParticleInfoForLB_marshall104(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doAtSync(void);
 */

void CProxySection_TreePiece::doAtSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_doAtSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
 */

void CProxySection_TreePiece::outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)accelerationBox;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)suffix;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(OrientedBox<double > &)accelerationBox;
    //Have to cast away const-ness to get pup routine
    implP|(std::string &)suffix;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputAccelerations_marshall106(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
 */

void CProxySection_TreePiece::outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_5;
    implP|bParaWrite;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_5;
    implP|bParaWrite;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputASCII_marshall107(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */

void CProxySection_TreePiece::oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_avOut, impl_cnt_avOut;
  impl_off_avOut=impl_off=CK_ALIGN(impl_off,sizeof(Vector3D<double >));
  impl_off+=(impl_cnt_avOut=sizeof(Vector3D<double >)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_6;
    implP|impl_off_avOut;
    implP|impl_cnt_avOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_6;
    implP|impl_off_avOut;
    implP|impl_cnt_avOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_avOut,avOut,impl_cnt_avOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutVec_marshall108(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
 */

void CProxySection_TreePiece::oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_adOut, impl_cnt_adOut;
  impl_off_adOut=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_adOut=sizeof(double)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_7;
    implP|impl_off_adOut;
    implP|impl_cnt_adOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_7;
    implP|impl_off_adOut;
    implP|impl_cnt_adOut;
    implP|nPart;
    implP|iIndex;
    implP|bDone;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_adOut,adOut,impl_cnt_adOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutArr_marshall109(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
 */

void CProxySection_TreePiece::outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Ck::IO::Session &)impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Ck::IO::Session &)impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_9;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputBinary_marshall110(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
 */

void CProxySection_TreePiece::minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_minmaxNCOut_marshall111(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
 */

void CProxySection_TreePiece::outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nStart;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)params;
    //Have to cast away const-ness to get pup routine
    implP|(int64_t &)nStart;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputBinaryStart_marshall112(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
 */

void CProxySection_TreePiece::oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_aiOut, impl_cnt_aiOut;
  impl_off_aiOut=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_aiOut=sizeof(int)*(nPart));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_a;
    implP|impl_off_aiOut;
    implP|impl_cnt_aiOut;
    implP|nPart;
    implP|iIndex;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkReference<OutputParams > &)impl_noname_a;
    implP|impl_off_aiOut;
    implP|impl_cnt_aiOut;
    implP|nPart;
    implP|iIndex;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_aiOut,aiOut,impl_cnt_aiOut);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_oneNodeOutIntArr_marshall113(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void outputStatistics(const CkCallback &cb);
 */

void CProxySection_TreePiece::outputStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_outputStatistics_marshall114(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectStatistics(const CkCallback &cb);
 */

void CProxySection_TreePiece::collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_collectStatistics_marshall115(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void continueStartRemoteChunk(int chunk);
 */

void CProxySection_TreePiece::continueStartRemoteChunk(int chunk, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int chunk
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|chunk;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|chunk;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_continueStartRemoteChunk_marshall116(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void continueWrapUp(void);
 */

void CProxySection_TreePiece::continueWrapUp(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_continueWrapUp_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void balanceBeforeInitialForces(const CkCallback &cb);
 */

void CProxySection_TreePiece::balanceBeforeInitialForces(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TreePiece::idx_balanceBeforeInitialForces_marshall118(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TreePiece(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TreePiece::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: TreePiece(void);
  idx_TreePiece_void();
  CkRegisterDefaultCtor(__idx, idx_TreePiece_void());

  // REG: void quiescence(void);
  idx_quiescence_void();

  // REG: void memCacheStats(const CkCallback &cb);
  idx_memCacheStats_marshall3();

  // REG: void nextBucket(dummyMsg* impl_msg);
  idx_nextBucket_dummyMsg();

  // REG: void nextBucketSmooth(dummyMsg* impl_msg);
  idx_nextBucketSmooth_dummyMsg();

  // REG: void nextBucketReSmooth(dummyMsg* impl_msg);
  idx_nextBucketReSmooth_dummyMsg();

  // REG: void nextBucketMarkSmooth(dummyMsg* impl_msg);
  idx_nextBucketMarkSmooth_dummyMsg();

  // REG: void setPeriodic(int nReplicas, const Vector3D<double > &fPeriod, int bEwald, double fEwCut, double fEwhCut, int bPeriod, int bComove, double dRhoFac);
  idx_setPeriodic_marshall8();

  // REG: void EwaldInit(void);
  idx_EwaldInit_void();

  // REG: void initCoolingData(const CkCallback &cb);
  idx_initCoolingData_marshall10();

  // REG: void calculateEwald(dummyMsg* impl_msg);
  idx_calculateEwald_dummyMsg();

  // REG: void EwaldGPUComplete(void);
  idx_EwaldGPUComplete_void();

  // REG: void EwaldGPU(void);
  idx_EwaldGPU_void();

  // REG: void velScale(double dScale, const CkCallback &cb);
  idx_velScale_marshall14();

  // REG: void loadNChilada(const std::string &filename, double dTuFac, const CkCallback &cb);
  idx_loadNChilada_marshall15();

  // REG: void readFloatBinary(const CkReference<OutputParams > &params, int bParaRead, const CkCallback &cb);
  idx_readFloatBinary_marshall16();

  // REG: void loadTipsy(const std::string &filename, double dTuFac, bool bDoublePos, bool bDoubleVel, const CkCallback &cb);
  idx_loadTipsy_marshall17();

  // REG: void readTipsyArray(const CkReference<OutputParams > &params, const CkCallback &cb);
  idx_readTipsyArray_marshall18();

  // REG: void resetMetals(const CkCallback &cb);
  idx_resetMetals_marshall19();

  // REG: void getMaxIOrds(const CkCallback &cb);
  idx_getMaxIOrds_marshall20();

  // REG: void RestartEnergy(double dTuFac, const CkCallback &cb);
  idx_RestartEnergy_marshall21();

  // REG: void findTotalMass(const CkCallback &cb);
  idx_findTotalMass_marshall22();

  // REG: void recvTotalMass(CkReductionMsg* impl_msg);
  idx_recvTotalMass_CkReductionMsg();

  // REG: void setupWrite(int iStage, const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
  idx_setupWrite_marshall24();

  // REG: void parallelWrite(int iPass, const CkCallback &cb, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool);
  idx_parallelWrite_marshall25();

  // REG: void serialWrite(const u_int64_t &iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTfac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
  idx_serialWrite_marshall26();

  // REG: void oneNodeWrite(int iIndex, int iOutParticles, int iOutSPH, int iOutStar, const GravityParticle *particles, const extraSPHData *pGas, const extraStarData *pStar, const int *piSPH, const int *piStar, u_int64_t iPrevOffset, const std::string &filename, double dTime, double dvFac, double duTFac, bool bDoublePos, bool bDoubleVel, int bCool, const CkCallback &cb);
  idx_oneNodeWrite_marshall27();

  // REG: void reOrder(const int64_t &nMaxOrder, const CkCallback &cb);
  idx_reOrder_marshall28();

  // REG: void ioShuffle(CkReductionMsg* impl_msg);
  idx_ioShuffle_CkReductionMsg();

  // REG: void ioAcceptSortedParticles(ParticleShuffleMsg* impl_msg);
  idx_ioAcceptSortedParticles_ParticleShuffleMsg();

  // REG: void assignKeys(CkReductionMsg* impl_msg);
  idx_assignKeys_CkReductionMsg();

  // REG: void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
  idx_evaluateBoundaries_marshall32();

  // REG: void unshuffleParticles(CkReductionMsg* impl_msg);
  idx_unshuffleParticles_CkReductionMsg();

  // REG: void acceptSortedParticles(ParticleShuffleMsg* impl_msg);
  idx_acceptSortedParticles_ParticleShuffleMsg();

  // REG: void unshuffleParticlesWoDD(const CkCallback &cb);
  idx_unshuffleParticlesWoDD_marshall35();

  // REG: void shuffleAfterQD(void);
  idx_shuffleAfterQD_void();

  // REG: void acceptSortedParticlesFromOther(ParticleShuffleMsg* impl_msg);
  idx_acceptSortedParticlesFromOther_ParticleShuffleMsg();

  // REG: void initORBPieces(const CkCallback &cb);
  idx_initORBPieces_marshall38();

  // REG: void initBeforeORBSend(unsigned int myCount, unsigned int myCountGas, unsigned int myCountStar, const CkCallback &cb, const CkCallback &cback);
  idx_initBeforeORBSend_marshall39();

  // REG: void sendORBParticles(void);
  idx_sendORBParticles_void();

  // REG: void acceptORBParticles(const GravityParticle *particles, int n, const extraSPHData *pGas, int nGasIn, const extraStarData *pStar, int nStarIn);
  idx_acceptORBParticles_marshall41();

  // REG: void finalizeBoundaries(ORBSplittersMsg* impl_msg);
  idx_finalizeBoundaries_ORBSplittersMsg();

  // REG: void evaluateParticleCounts(ORBSplittersMsg* impl_msg);
  idx_evaluateParticleCounts_ORBSplittersMsg();

  // REG: void kick(int iKickRung, const double *dDelta, int bClosing, int bNeedVPred, int bGasIsothermal, const double *duDelta, const CkCallback &cb);
  idx_kick_marshall44();

  // REG: void initAccel(int iKickRung, const CkCallback &cb);
  idx_initAccel_marshall45();

  // REG: void adjust(int iKickRung, int bEpsAccStep, int bGravStep, int bSphStep, int bViscosityLimitdt, double dEta, double dEtaCourant, double dEtauDot, double dDelta, double dAccFac, double dCosmoFac, double dhMinOverSoft, double dResolveJeans, int bDoGas, const CkCallback &cb);
  idx_adjust_marshall46();

  // REG: void truncateRung(int iCurrMaxRung, const CkCallback &cb);
  idx_truncateRung_marshall47();

  // REG: void rungStats(const CkCallback &cb);
  idx_rungStats_marshall48();

  // REG: void countActive(int activeRung, const CkCallback &cb);
  idx_countActive_marshall49();

  // REG: void assignDomain(const CkCallback &cb);
  idx_assignDomain_marshall50();

  // REG: void drift(double dDelta, int bNeedVPred, int bGasIsoThermal, double dvDelta, double duDelta, int nGrowMass, const bool &buildTree, const CkCallback &cb);
  idx_drift_marshall51();

  // REG: void starCenterOfMass(const CkCallback &cb);
  idx_starCenterOfMass_marshall52();

  // REG: void calcEnergy(const CkCallback &cb);
  idx_calcEnergy_marshall53();

  // REG: void colNParts(const CkCallback &cb);
  idx_colNParts_marshall54();

  // REG: void newOrder(const NewMaxOrder *nStarts, int n, const CkCallback &cb);
  idx_newOrder_marshall55();

  // REG: void setNParts(const int64_t &_nTotalSPH, const int64_t &_nTotalDark, const int64_t &_nTotalStar, const CkCallback &cb);
  idx_setNParts_marshall56();

  // REG: void setSoft(double dSoft, const CkCallback &cb);
  idx_setSoft_marshall57();

  // REG: void physicalSoft(double dSoftMax, double dFac, int bSoftMaxMul, const CkCallback &cb);
  idx_physicalSoft_marshall58();

  // REG: void growMass(int nGrowMass, double dDeltaM, const CkCallback &cb);
  idx_growMass_marshall59();

  // REG: void InitEnergy(double dTuFac, double z, double dTime, const CkCallback &cb);
  idx_InitEnergy_marshall60();

  // REG: void updateuDot(int activeRung, const double *duDelta, const double *dStartTime, int bCool, int bAll, int bUpdateState, const CkCallback &cb);
  idx_updateuDot_marshall61();

  // REG: void ballMax(int activeRung, double dFac, const CkCallback &cb);
  idx_ballMax_marshall62();

  // REG: void sphViscosityLimiter(int bOn, int activeRung, const CkCallback &cb);
  idx_sphViscosityLimiter_marshall63();

  // REG: void getAdiabaticGasPressure(double gamma, double gammam1, const CkCallback &cb);
  idx_getAdiabaticGasPressure_marshall64();

  // REG: void getCoolingGasPressure(double gamma, double gammam1, double dResolveJeans, const CkCallback &cb);
  idx_getCoolingGasPressure_marshall65();

  // REG: void initRand(int iRand, const CkCallback &cb);
  idx_initRand_marshall66();

  // REG: void FormStars(const Stfm &param, double dTime, double dDelta, double dCosmoFac, const CkCallback &cb);
  idx_FormStars_marshall67();

  // REG: void flushStarLog(const CkCallback &cb);
  idx_flushStarLog_marshall68();

  // REG: void Feedback(const Fdbk &fb, double dTime, double dDelta, const CkCallback &cb);
  idx_Feedback_marshall69();

  // REG: void massMetalsEnergyCheck(int bPreDist, const CkCallback &cb);
  idx_massMetalsEnergyCheck_marshall70();

  // REG: void setTypeFromFile(int iSetMask, const char *file, const CkCallback &cb);
  idx_setTypeFromFile_marshall71();

  // REG: void getCOM(const CkCallback &cb, int bLiveViz);
  idx_getCOM_marshall72();

  // REG: void getCOMByType(int iType, const CkCallback &cb, int bLiveViz);
  idx_getCOMByType_marshall73();

  // REG: void DumpFrame(const InDumpFrame &in, const CkCallback &cb, int liveVizDump);
  idx_DumpFrame_marshall74();

  // REG: void liveVizDumpFrameInit(liveVizRequestMsg* impl_msg);
  idx_liveVizDumpFrameInit_liveVizRequestMsg();

  // REG: void setProjections(int bOn);
  idx_setProjections_marshall76();

  // REG: void buildTree(int bucketSize, const CkCallback &cb);
  idx_buildTree_marshall77();

  // REG: void startOctTreeBuild(CkReductionMsg* impl_msg);
  idx_startOctTreeBuild_CkReductionMsg();

  // REG: void recvBoundary(const SFC::Key &key, const NborDir &dir);
  idx_recvBoundary_marshall79();

  // REG: void recvdBoundaries(CkReductionMsg* impl_msg);
  idx_recvdBoundaries_CkReductionMsg();

  // REG: void startORBTreeBuild(CkReductionMsg* impl_msg);
  idx_startORBTreeBuild_CkReductionMsg();

  // REG: void startGravity(int activeRung, double myTheta, const CkCallback &cb);
  idx_startGravity_marshall82();

  // REG: void startSmooth(const CkPointer<SmoothParams > &impl_noname_2, int iLowhFix, int nSmooth, double dfBall2OverSoft2, const CkCallback &cb);
  idx_startSmooth_marshall83();

  // REG: void startReSmooth(const CkPointer<SmoothParams > &impl_noname_3, const CkCallback &cb);
  idx_startReSmooth_marshall84();

  // REG: void startMarkSmooth(const CkPointer<SmoothParams > &impl_noname_4, const CkCallback &cb);
  idx_startMarkSmooth_marshall85();

  // REG: void finishNodeCache(const CkCallback &cb);
  idx_finishNodeCache_marshall86();

  // REG: void requestRemoteMoments(const Tree::NodeKey &key, int sender);
  idx_requestRemoteMoments_marshall87();

  // REG: void receiveRemoteMoments(const Tree::NodeKey &key, const Tree::NodeType &type, int firstParticle, int numParticles, int remIdx, const MultipoleMoments &moments, const OrientedBox<double > &box, const OrientedBox<double > &boxBall, unsigned int iParticleTypes);
  idx_receiveRemoteMoments_marshall88();

  // REG: void commenceCalculateGravityLocal(void);
  idx_commenceCalculateGravityLocal_void();

  // REG: void calculateGravityRemote(ComputeChunkMsg* impl_msg);
  idx_calculateGravityRemote_ComputeChunkMsg();

  // REG: void calculateReSmoothLocal(void);
  idx_calculateReSmoothLocal_void();

  // REG: void calculateMarkSmoothLocal(void);
  idx_calculateMarkSmoothLocal_void();

  // REG: void finishWalk(void);
  idx_finishWalk_void();

  // REG: void finishSmoothWalk(void);
  idx_finishSmoothWalk_void();

  // REG: void fillRequestNode(CkCacheRequestMsg<KeyType >* impl_msg);
  idx_fillRequestNode_CkCacheRequestMsg();

  // REG: void receiveNodeCallback(GenericTreeNode* impl_msg, int chunk, int reqID, int awi, void* source);
  idx_receiveNodeCallback_marshall96();

  // REG: void fillRequestParticles(CkCacheRequestMsg<KeyType >* impl_msg);
  idx_fillRequestParticles_CkCacheRequestMsg();

  // REG: void fillRequestSmoothParticles(CkCacheRequestMsg<KeyType >* impl_msg);
  idx_fillRequestSmoothParticles_CkCacheRequestMsg();

  // REG: void flushSmoothParticles(CkCacheFillMsg<KeyType >* impl_msg);
  idx_flushSmoothParticles_CkCacheFillMsg();

  // REG: void receiveParticlesCallback(ExternalGravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
  idx_receiveParticlesCallback_marshall100();

  // REG: void receiveParticlesFullCallback(GravityParticle* impl_msg, int num, int chunk, int reqID, const Tree::NodeKey &remoteBucket, int awi, void* source);
  idx_receiveParticlesFullCallback_marshall101();

  // REG: void startlb(const CkCallback &cb, int activeRung);
  idx_startlb_marshall102();

  // REG: void ResumeFromSync(void);
  idx_ResumeFromSync_void();

  // REG: void getParticleInfoForLB(const int64_t &active_part, const int64_t &total_part);
  idx_getParticleInfoForLB_marshall104();
  idx_redn_wrapper_getParticleInfoForLB_marshall104();

  // REG: void doAtSync(void);
  idx_doAtSync_void();

  // REG: void outputAccelerations(const OrientedBox<double > &accelerationBox, const std::string &suffix, const CkCallback &cb);
  idx_outputAccelerations_marshall106();

  // REG: void outputASCII(const CkReference<OutputParams > &impl_noname_5, int bParaWrite, const CkCallback &cb);
  idx_outputASCII_marshall107();

  // REG: void oneNodeOutVec(const CkReference<OutputParams > &impl_noname_6, const Vector3D<double > *avOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
  idx_oneNodeOutVec_marshall108();

  // REG: void oneNodeOutArr(const CkReference<OutputParams > &impl_noname_7, const double *adOut, int nPart, int iIndex, int bDone, const CkCallback &cb);
  idx_oneNodeOutArr_marshall109();

  // REG: void outputBinary(const Ck::IO::Session &impl_noname_8, const CkReference<OutputParams > &impl_noname_9);
  idx_outputBinary_marshall110();

  // REG: void minmaxNCOut(const CkReference<OutputParams > &params, const CkCallback &cb);
  idx_minmaxNCOut_marshall111();

  // REG: void outputBinaryStart(const CkReference<OutputParams > &params, const int64_t &nStart, const CkCallback &cb);
  idx_outputBinaryStart_marshall112();

  // REG: void oneNodeOutIntArr(const CkReference<OutputParams > &impl_noname_a, const int *aiOut, int nPart, int iIndex, const CkCallback &cb);
  idx_oneNodeOutIntArr_marshall113();

  // REG: void outputStatistics(const CkCallback &cb);
  idx_outputStatistics_marshall114();

  // REG: void collectStatistics(const CkCallback &cb);
  idx_collectStatistics_marshall115();

  // REG: void continueStartRemoteChunk(int chunk);
  idx_continueStartRemoteChunk_marshall116();

  // REG: void continueWrapUp(void);
  idx_continueWrapUp_void();

  // REG: void balanceBeforeInitialForces(const CkCallback &cb);
  idx_balanceBeforeInitialForces_marshall118();

  // REG: TreePiece(CkMigrateMessage* impl_msg);
  idx_TreePiece_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TreePiece_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array LvArray: ArrayElement{
LvArray(void);
LvArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LvArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LvArray(void);
 */

void CProxyElement_LvArray::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_LvArray::idx_LvArray_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LvArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LvArray(void);
 */

CkArrayID CProxy_LvArray::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_LvArray::idx_LvArray_void(), opts);
}

void CProxy_LvArray::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_LvArray::idx_LvArray_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_LvArray::ckNew(const int s1)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_LvArray::idx_LvArray_void(), opts);
}

void CProxy_LvArray::ckNew(const int s1, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_LvArray::idx_LvArray_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_LvArray::reg_LvArray_void() {
  int epidx = CkRegisterEp("LvArray(void)",
      _call_LvArray_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_LvArray::_call_LvArray_void(void* impl_msg, void* impl_obj_void)
{
  LvArray* impl_obj = static_cast<LvArray *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) LvArray();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LvArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_LvArray::reg_LvArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("LvArray(CkMigrateMessage* impl_msg)",
      _call_LvArray_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_LvArray::_call_LvArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  LvArray* impl_obj = static_cast<LvArray *>(impl_obj_void);
  new (impl_obj) LvArray((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LvArray(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LvArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LvArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: LvArray(void);
  idx_LvArray_void();
  CkRegisterDefaultCtor(__idx, idx_LvArray_void());

  // REG: LvArray(CkMigrateMessage* impl_msg);
  idx_LvArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_LvArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PETreeMerger: IrrGroup{
PETreeMerger(void);
PETreeMerger(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PETreeMerger::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PETreeMerger(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PETreeMerger(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PETreeMerger(void);
 */

CkGroupID CProxy_PETreeMerger::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  return CkCreateGroup(CkIndex_PETreeMerger::__idx, CkIndex_PETreeMerger::idx_PETreeMerger_void(), impl_msg);
}

// Entry point registration function

int CkIndex_PETreeMerger::reg_PETreeMerger_void() {
  int epidx = CkRegisterEp("PETreeMerger(void)",
      _call_PETreeMerger_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_PETreeMerger::_call_PETreeMerger_void(void* impl_msg, void* impl_obj_void)
{
  PETreeMerger* impl_obj = static_cast<PETreeMerger *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) PETreeMerger();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PETreeMerger(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_PETreeMerger::reg_PETreeMerger_CkMigrateMessage() {
  int epidx = CkRegisterEp("PETreeMerger(CkMigrateMessage* impl_msg)",
      _call_PETreeMerger_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_PETreeMerger::_call_PETreeMerger_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  PETreeMerger* impl_obj = static_cast<PETreeMerger *>(impl_obj_void);
  new (impl_obj) PETreeMerger((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PETreeMerger(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PETreeMerger(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PETreeMerger::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,PETreeMerger::isIrreducible());
  // REG: PETreeMerger(void);
  idx_PETreeMerger_void();
  CkRegisterDefaultCtor(__idx, idx_PETreeMerger_void());

  // REG: PETreeMerger(CkMigrateMessage* impl_msg);
  idx_PETreeMerger_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_PETreeMerger_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group DumpFrameData: IrrGroup{
DumpFrameData(void);
void clearFrame(const InDumpFrame &in, const CkCallback &cb);
void combineFrame(const InDumpFrame &in, const CkCallback &cb);
DumpFrameData(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_DumpFrameData::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: DumpFrameData(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
 */

void CProxyElement_DumpFrameData::clearFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
 */

void CProxyElement_DumpFrameData::combineFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DumpFrameData(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DumpFrameData(void);
 */

CkGroupID CProxy_DumpFrameData::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  return CkCreateGroup(CkIndex_DumpFrameData::__idx, CkIndex_DumpFrameData::idx_DumpFrameData_void(), impl_msg);
}

// Entry point registration function

int CkIndex_DumpFrameData::reg_DumpFrameData_void() {
  int epidx = CkRegisterEp("DumpFrameData(void)",
      _call_DumpFrameData_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_DumpFrameData::_call_DumpFrameData_void(void* impl_msg, void* impl_obj_void)
{
  DumpFrameData* impl_obj = static_cast<DumpFrameData *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) DumpFrameData();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
 */

void CProxy_DumpFrameData::clearFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID(),0);
}

void CProxy_DumpFrameData::clearFrame(const InDumpFrame &in, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_DumpFrameData::clearFrame(const InDumpFrame &in, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_DumpFrameData::reg_clearFrame_marshall2() {
  int epidx = CkRegisterEp("clearFrame(const InDumpFrame &in, const CkCallback &cb)",
      _call_clearFrame_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_clearFrame_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_clearFrame_marshall2);

  return epidx;
}


void CkIndex_DumpFrameData::_call_clearFrame_marshall2(void* impl_msg, void* impl_obj_void)
{
  DumpFrameData* impl_obj = static_cast<DumpFrameData *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->clearFrame(in, cb);
}

int CkIndex_DumpFrameData::_callmarshall_clearFrame_marshall2(char* impl_buf, void* impl_obj_void) {
  DumpFrameData* impl_obj = static_cast< DumpFrameData *>(impl_obj_void);
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->clearFrame(in, cb);
  return implP.size();
}

void CkIndex_DumpFrameData::_marshallmessagepup_clearFrame_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("in");
  implDestP|in;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DumpFrameData::clearFrame_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
 */

void CProxy_DumpFrameData::combineFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID(),0);
}

void CProxy_DumpFrameData::combineFrame(const InDumpFrame &in, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_DumpFrameData::combineFrame(const InDumpFrame &in, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_DumpFrameData::reg_combineFrame_marshall3() {
  int epidx = CkRegisterEp("combineFrame(const InDumpFrame &in, const CkCallback &cb)",
      _call_combineFrame_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_combineFrame_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_combineFrame_marshall3);

  return epidx;
}


void CkIndex_DumpFrameData::_call_combineFrame_marshall3(void* impl_msg, void* impl_obj_void)
{
  DumpFrameData* impl_obj = static_cast<DumpFrameData *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->combineFrame(in, cb);
}

int CkIndex_DumpFrameData::_callmarshall_combineFrame_marshall3(char* impl_buf, void* impl_obj_void) {
  DumpFrameData* impl_obj = static_cast< DumpFrameData *>(impl_obj_void);
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->combineFrame(in, cb);
  return implP.size();
}

void CkIndex_DumpFrameData::_marshallmessagepup_combineFrame_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const InDumpFrame &in, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  InDumpFrame in; implP|in;
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("in");
  implDestP|in;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_DumpFrameData::combineFrame_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DumpFrameData(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_DumpFrameData::reg_DumpFrameData_CkMigrateMessage() {
  int epidx = CkRegisterEp("DumpFrameData(CkMigrateMessage* impl_msg)",
      _call_DumpFrameData_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_DumpFrameData::_call_DumpFrameData_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  DumpFrameData* impl_obj = static_cast<DumpFrameData *>(impl_obj_void);
  new (impl_obj) DumpFrameData((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DumpFrameData(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
 */

void CProxySection_DumpFrameData::clearFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DumpFrameData::idx_clearFrame_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
 */

void CProxySection_DumpFrameData::combineFrame(const InDumpFrame &in, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const InDumpFrame &in, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(InDumpFrame &)in;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DumpFrameData::idx_combineFrame_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DumpFrameData(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_DumpFrameData::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,DumpFrameData::isIrreducible());
  // REG: DumpFrameData(void);
  idx_DumpFrameData_void();
  CkRegisterDefaultCtor(__idx, idx_DumpFrameData_void());

  // REG: void clearFrame(const InDumpFrame &in, const CkCallback &cb);
  idx_clearFrame_marshall2();

  // REG: void combineFrame(const InDumpFrame &in, const CkCallback &cb);
  idx_combineFrame_marshall3();

  // REG: DumpFrameData(CkMigrateMessage* impl_msg);
  idx_DumpFrameData_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_DumpFrameData_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group IntraNodeLBManager: IrrGroup{
IntraNodeLBManager(int dummy, const CkGroupID &gid);
void registerTP(void);
void finishedTPWork(void);
IntraNodeLBManager(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_IntraNodeLBManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerTP(void);
 */

void CProxyElement_IntraNodeLBManager::registerTP(void)
{
  ckCheck();
  IntraNodeLBManager *obj = ckLocalBranch();
  CkAssert(obj);
  _TRACE_BEGIN_EXECUTE_DETAILED(0,ForBocMsg,(CkIndex_IntraNodeLBManager::idx_registerTP_void()),CkMyPe(),0,NULL, NULL);
#if CMK_LBDB_ON
  // if there is a running obj being measured, stop it temporarily
  LDObjHandle objHandle;
  int objstopped = 0;
  LBDatabase *the_lbdb = (LBDatabase *)CkLocalBranch(_lbdb);
  if (the_lbdb->RunningObject(&objHandle)) {
    objstopped = 1;
    the_lbdb->ObjectStop(objHandle);
  }
#endif
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_IntraNodeLBManager::idx_registerTP_void(), obj, NULL);
#endif
  obj->registerTP();
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_IntraNodeLBManager::idx_registerTP_void());
#endif
#if CMK_LBDB_ON
  if (objstopped) the_lbdb->ObjectStart(objHandle);
#endif
  _TRACE_END_EXECUTE();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTPWork(void);
 */

void CProxyElement_IntraNodeLBManager::finishedTPWork(void)
{
  ckCheck();
  IntraNodeLBManager *obj = ckLocalBranch();
  CkAssert(obj);
  _TRACE_BEGIN_EXECUTE_DETAILED(0,ForBocMsg,(CkIndex_IntraNodeLBManager::idx_finishedTPWork_void()),CkMyPe(),0,NULL, NULL);
#if CMK_LBDB_ON
  // if there is a running obj being measured, stop it temporarily
  LDObjHandle objHandle;
  int objstopped = 0;
  LBDatabase *the_lbdb = (LBDatabase *)CkLocalBranch(_lbdb);
  if (the_lbdb->RunningObject(&objHandle)) {
    objstopped = 1;
    the_lbdb->ObjectStop(objHandle);
  }
#endif
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_IntraNodeLBManager::idx_finishedTPWork_void(), obj, NULL);
#endif
  obj->finishedTPWork();
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_IntraNodeLBManager::idx_finishedTPWork_void());
#endif
#if CMK_LBDB_ON
  if (objstopped) the_lbdb->ObjectStart(objHandle);
#endif
  _TRACE_END_EXECUTE();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
 */

CkGroupID CProxy_IntraNodeLBManager::ckNew(int dummy, const CkGroupID &gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int dummy, const CkGroupID &gid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  return CkCreateGroup(CkIndex_IntraNodeLBManager::__idx, CkIndex_IntraNodeLBManager::idx_IntraNodeLBManager_marshall1(), impl_msg);
}

  CProxy_IntraNodeLBManager::CProxy_IntraNodeLBManager(int dummy, const CkGroupID &gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int dummy, const CkGroupID &gid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dummy;
    //Have to cast away const-ness to get pup routine
    implP|(CkGroupID &)gid;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  if (impl_e_opts)
    UsrToEnv(impl_msg)->setGroupDep(impl_e_opts->getGroupDepID());
  ckSetGroupID(CkCreateGroup(CkIndex_IntraNodeLBManager::__idx, CkIndex_IntraNodeLBManager::idx_IntraNodeLBManager_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_IntraNodeLBManager::reg_IntraNodeLBManager_marshall1() {
  int epidx = CkRegisterEp("IntraNodeLBManager(int dummy, const CkGroupID &gid)",
      _call_IntraNodeLBManager_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_IntraNodeLBManager_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_IntraNodeLBManager_marshall1);

  return epidx;
}


void CkIndex_IntraNodeLBManager::_call_IntraNodeLBManager_marshall1(void* impl_msg, void* impl_obj_void)
{
  IntraNodeLBManager* impl_obj = static_cast<IntraNodeLBManager *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int dummy, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  int dummy; implP|dummy;
  CkGroupID gid; implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) IntraNodeLBManager(dummy, gid);
}

int CkIndex_IntraNodeLBManager::_callmarshall_IntraNodeLBManager_marshall1(char* impl_buf, void* impl_obj_void) {
  IntraNodeLBManager* impl_obj = static_cast< IntraNodeLBManager *>(impl_obj_void);
  /*Unmarshall pup'd fields: int dummy, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  int dummy; implP|dummy;
  CkGroupID gid; implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) IntraNodeLBManager(dummy, gid);
  return implP.size();
}

void CkIndex_IntraNodeLBManager::_marshallmessagepup_IntraNodeLBManager_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int dummy, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  int dummy; implP|dummy;
  CkGroupID gid; implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dummy");
  implDestP|dummy;
  if (implDestP.hasComments()) implDestP.comment("gid");
  implDestP|gid;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerTP(void);
 */

// Entry point registration function

int CkIndex_IntraNodeLBManager::reg_registerTP_void() {
  int epidx = CkRegisterEp("registerTP(void)",
      _call_registerTP_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_IntraNodeLBManager::_call_registerTP_void(void* impl_msg, void* impl_obj_void)
{
  IntraNodeLBManager* impl_obj = static_cast<IntraNodeLBManager *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTPWork(void);
 */

// Entry point registration function

int CkIndex_IntraNodeLBManager::reg_finishedTPWork_void() {
  int epidx = CkRegisterEp("finishedTPWork(void)",
      _call_finishedTPWork_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_IntraNodeLBManager::_call_finishedTPWork_void(void* impl_msg, void* impl_obj_void)
{
  IntraNodeLBManager* impl_obj = static_cast<IntraNodeLBManager *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_IntraNodeLBManager::reg_IntraNodeLBManager_CkMigrateMessage() {
  int epidx = CkRegisterEp("IntraNodeLBManager(CkMigrateMessage* impl_msg)",
      _call_IntraNodeLBManager_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_IntraNodeLBManager::_call_IntraNodeLBManager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  IntraNodeLBManager* impl_obj = static_cast<IntraNodeLBManager *>(impl_obj_void);
  new (impl_obj) IntraNodeLBManager((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: IntraNodeLBManager(int dummy, const CkGroupID &gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerTP(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTPWork(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: IntraNodeLBManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_IntraNodeLBManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,IntraNodeLBManager::isIrreducible());
  // REG: IntraNodeLBManager(int dummy, const CkGroupID &gid);
  idx_IntraNodeLBManager_marshall1();

  // REG: void registerTP(void);
  idx_registerTP_void();

  // REG: void finishedTPWork(void);
  idx_finishedTPWork_void();

  // REG: IntraNodeLBManager(CkMigrateMessage* impl_msg);
  idx_IntraNodeLBManager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_IntraNodeLBManager_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void _registerParallelGravity(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerReductions();


  CkRegisterReadonly("mainChare","CProxy_Main",sizeof(mainChare),(void *) &mainChare,__xlater_roPup_mainChare);

  CkRegisterReadonly("verbosity","int",sizeof(verbosity),(void *) &verbosity,__xlater_roPup_verbosity);

  CkRegisterReadonly("treeProxy","CProxy_TreePiece",sizeof(treeProxy),(void *) &treeProxy,__xlater_roPup_treeProxy);

  CkRegisterReadonly("reductionHelperProxy","CProxy_ReductionHelper",sizeof(reductionHelperProxy),(void *) &reductionHelperProxy,__xlater_roPup_reductionHelperProxy);

  CkRegisterReadonly("lvProxy","CProxy_LvArray",sizeof(lvProxy),(void *) &lvProxy,__xlater_roPup_lvProxy);

  CkRegisterReadonly("smoothProxy","CProxy_LvArray",sizeof(smoothProxy),(void *) &smoothProxy,__xlater_roPup_smoothProxy);

  CkRegisterReadonly("gravityProxy","CProxy_LvArray",sizeof(gravityProxy),(void *) &gravityProxy,__xlater_roPup_gravityProxy);

  CkRegisterReadonly("streamingProxy","CProxy_TreePiece",sizeof(streamingProxy),(void *) &streamingProxy,__xlater_roPup_streamingProxy);

  CkRegisterReadonly("cacheNode","CProxy_CkCacheManager<KeyType >",sizeof(cacheNode),(void *) &cacheNode,__xlater_roPup_cacheNode);

  CkRegisterReadonly("cacheGravPart","CProxy_CkCacheManager<KeyType >",sizeof(cacheGravPart),(void *) &cacheGravPart,__xlater_roPup_cacheGravPart);

  CkRegisterReadonly("cacheSmoothPart","CProxy_CkCacheManager<KeyType >",sizeof(cacheSmoothPart),(void *) &cacheSmoothPart,__xlater_roPup_cacheSmoothPart);

  CkRegisterReadonly("dMProxy","CProxy_DataManager",sizeof(dMProxy),(void *) &dMProxy,__xlater_roPup_dMProxy);

  CkRegisterReadonly("peTreeMergerProxy","CProxy_PETreeMerger",sizeof(peTreeMergerProxy),(void *) &peTreeMergerProxy,__xlater_roPup_peTreeMergerProxy);

  CkRegisterReadonly("dfDataProxy","CProxy_DumpFrameData",sizeof(dfDataProxy),(void *) &dfDataProxy,__xlater_roPup_dfDataProxy);

  CkRegisterReadonly("nodeLBMgrProxy","CProxy_IntraNodeLBManager",sizeof(nodeLBMgrProxy),(void *) &nodeLBMgrProxy,__xlater_roPup_nodeLBMgrProxy);

  CkRegisterReadonly("_cache","bool",sizeof(_cache),(void *) &_cache,__xlater_roPup__cache);

  CkRegisterReadonly("_nocache","int",sizeof(_nocache),(void *) &_nocache,__xlater_roPup__nocache);

  CkRegisterReadonly("_cacheLineDepth","int",sizeof(_cacheLineDepth),(void *) &_cacheLineDepth,__xlater_roPup__cacheLineDepth);

  CkRegisterReadonly("_yieldPeriod","unsigned int",sizeof(_yieldPeriod),(void *) &_yieldPeriod,__xlater_roPup__yieldPeriod);

  CkRegisterReadonly("domainDecomposition","DomainsDec",sizeof(domainDecomposition),(void *) &domainDecomposition,__xlater_roPup_domainDecomposition);

  CkRegisterReadonly("dExtraStore","double",sizeof(dExtraStore),(void *) &dExtraStore,__xlater_roPup_dExtraStore);

  CkRegisterReadonly("dMaxBalance","double",sizeof(dMaxBalance),(void *) &dMaxBalance,__xlater_roPup_dMaxBalance);

  CkRegisterReadonly("dFracLoadBalance","double",sizeof(dFracLoadBalance),(void *) &dFracLoadBalance,__xlater_roPup_dFracLoadBalance);

  CkRegisterReadonly("bUseCkLoopPar","int",sizeof(bUseCkLoopPar),(void *) &bUseCkLoopPar,__xlater_roPup_bUseCkLoopPar);

  CkRegisterReadonly("peanoKey","int",sizeof(peanoKey),(void *) &peanoKey,__xlater_roPup_peanoKey);

  CkRegisterReadonly("useTree","GenericTrees",sizeof(useTree),(void *) &useTree,__xlater_roPup_useTree);

  CkRegisterReadonly("_prefetch","int",sizeof(_prefetch),(void *) &_prefetch,__xlater_roPup__prefetch);

  CkRegisterReadonly("_randChunks","int",sizeof(_randChunks),(void *) &_randChunks,__xlater_roPup__randChunks);

  CkRegisterReadonly("_numChunks","int",sizeof(_numChunks),(void *) &_numChunks,__xlater_roPup__numChunks);

  CkRegisterReadonly("treePieceID","CkArrayID",sizeof(treePieceID),(void *) &treePieceID,__xlater_roPup_treePieceID);

  CkRegisterReadonly("dataManagerID","CkGroupID",sizeof(dataManagerID),(void *) &dataManagerID,__xlater_roPup_dataManagerID);

  CkRegisterReadonly("numTreePieces","unsigned int",sizeof(numTreePieces),(void *) &numTreePieces,__xlater_roPup_numTreePieces);

  CkRegisterReadonly("particlesPerChare","unsigned int",sizeof(particlesPerChare),(void *) &particlesPerChare,__xlater_roPup_particlesPerChare);

  CkRegisterReadonly("bucketSize","unsigned int",sizeof(bucketSize),(void *) &bucketSize,__xlater_roPup_bucketSize);

  CkRegisterReadonly("nIOProcessor","int",sizeof(nIOProcessor),(void *) &nIOProcessor,__xlater_roPup_nIOProcessor);

  CkRegisterReadonly("lbcomm_cutoff_msgs","int",sizeof(lbcomm_cutoff_msgs),(void *) &lbcomm_cutoff_msgs,__xlater_roPup_lbcomm_cutoff_msgs);

  CkRegisterReadonly("localNodesPerReq","int",sizeof(localNodesPerReq),(void *) &localNodesPerReq,__xlater_roPup_localNodesPerReq);

  CkRegisterReadonly("remoteNodesPerReq","int",sizeof(remoteNodesPerReq),(void *) &remoteNodesPerReq,__xlater_roPup_remoteNodesPerReq);

  CkRegisterReadonly("remoteResumeNodesPerReq","int",sizeof(remoteResumeNodesPerReq),(void *) &remoteResumeNodesPerReq,__xlater_roPup_remoteResumeNodesPerReq);

  CkRegisterReadonly("localPartsPerReq","int",sizeof(localPartsPerReq),(void *) &localPartsPerReq,__xlater_roPup_localPartsPerReq);

  CkRegisterReadonly("remotePartsPerReq","int",sizeof(remotePartsPerReq),(void *) &remotePartsPerReq,__xlater_roPup_remotePartsPerReq);

  CkRegisterReadonly("remoteResumePartsPerReq","int",sizeof(remoteResumePartsPerReq),(void *) &remoteResumePartsPerReq,__xlater_roPup_remoteResumePartsPerReq);

  CkRegisterReadonly("largePhaseThreshold","double",sizeof(largePhaseThreshold),(void *) &largePhaseThreshold,__xlater_roPup_largePhaseThreshold);

  CkRegisterReadonly("boundaryEvaluationUE","int",sizeof(boundaryEvaluationUE),(void *) &boundaryEvaluationUE,__xlater_roPup_boundaryEvaluationUE);

  CkRegisterReadonly("weightBalanceUE","int",sizeof(weightBalanceUE),(void *) &weightBalanceUE,__xlater_roPup_weightBalanceUE);

  CkRegisterReadonly("networkProgressUE","int",sizeof(networkProgressUE),(void *) &networkProgressUE,__xlater_roPup_networkProgressUE);

  CkRegisterReadonly("nodeForceUE","int",sizeof(nodeForceUE),(void *) &nodeForceUE,__xlater_roPup_nodeForceUE);

  CkRegisterReadonly("partForceUE","int",sizeof(partForceUE),(void *) &partForceUE,__xlater_roPup_partForceUE);

  CkRegisterReadonly("tbRecursiveUE","int",sizeof(tbRecursiveUE),(void *) &tbRecursiveUE,__xlater_roPup_tbRecursiveUE);

  CkRegisterReadonly("tbFlushRequestsUE","int",sizeof(tbFlushRequestsUE),(void *) &tbFlushRequestsUE,__xlater_roPup_tbFlushRequestsUE);

  CkRegisterReadonly("prefetchDoneUE","int",sizeof(prefetchDoneUE),(void *) &prefetchDoneUE,__xlater_roPup_prefetchDoneUE);

  CkRegisterReadonly("prjgrp","CProxy_ProjectionsControl",sizeof(prjgrp),(void *) &prjgrp,__xlater_roPup_prjgrp);

  CkRegisterReadonly("numInitDecompBins","int",sizeof(numInitDecompBins),(void *) &numInitDecompBins,__xlater_roPup_numInitDecompBins);

  CkRegisterReadonly("octRefineLevel","int",sizeof(octRefineLevel),(void *) &octRefineLevel,__xlater_roPup_octRefineLevel);

  CkRegisterReadonly("doDumpLB","bool",sizeof(doDumpLB),(void *) &doDumpLB,__xlater_roPup_doDumpLB);

  CkRegisterReadonly("lbDumpIteration","int",sizeof(lbDumpIteration),(void *) &lbDumpIteration,__xlater_roPup_lbDumpIteration);

  CkRegisterReadonly("doSimulateLB","bool",sizeof(doSimulateLB),(void *) &doSimulateLB,__xlater_roPup_doSimulateLB);

/* REG: message dummyMsg;
*/
CMessage_dummyMsg::__register("dummyMsg", sizeof(dummyMsg),(CkPackFnPtr) dummyMsg::pack,(CkUnpackFnPtr) dummyMsg::unpack);

/* REG: message ComputeChunkMsg;
*/
CMessage_ComputeChunkMsg::__register("ComputeChunkMsg", sizeof(ComputeChunkMsg),(CkPackFnPtr) ComputeChunkMsg::pack,(CkUnpackFnPtr) ComputeChunkMsg::unpack);

/* REG: message ORBSplittersMsg{
double pos[];
char dim[];
}
;
*/
CMessage_ORBSplittersMsg::__register("ORBSplittersMsg", sizeof(ORBSplittersMsg),(CkPackFnPtr) ORBSplittersMsg::pack,(CkUnpackFnPtr) ORBSplittersMsg::unpack);

/* REG: message ParticleShuffleMsg{
double loads[];
unsigned int parts_per_phase[];
GravityParticle particles[];
extraSPHData pGas[];
extraStarData pStar[];
}
;
*/
CMessage_ParticleShuffleMsg::__register("ParticleShuffleMsg", sizeof(ParticleShuffleMsg),(CkPackFnPtr) ParticleShuffleMsg::pack,(CkUnpackFnPtr) ParticleShuffleMsg::unpack);

      PUPable_reg(DensitySmoothParams);

      PUPable_reg(DenDvDxSmoothParams);

      PUPable_reg(DenDvDxNeighborSmParams);

      PUPable_reg(MarkSmoothParams);

      PUPable_reg(PressureSmoothParams);

      PUPable_reg(DistDeletedGasSmoothParams);

      PUPable_reg(DistStellarFeedbackSmoothParams);

      PUPable_reg(Fdbk);

      PUPable_reg(StarLog);

      PUPable_reg(Chabrier);

      PUPable_reg(MillerScalo);

      PUPable_reg(Kroupa93);

      PUPable_reg(Kroupa01);

      PUPable_reg(MassOutputParams);

      PUPable_reg(PosOutputParams);

      PUPable_reg(VelOutputParams);

      PUPable_reg(PotOutputParams);

      PUPable_reg(GasDenOutputParams);

      PUPable_reg(TempOutputParams);

      PUPable_reg(AccOutputParams);

      PUPable_reg(DenOutputParams);

      PUPable_reg(HsmOutputParams);

      PUPable_reg(SoftOutputParams);

      PUPable_reg(PresOutputParams);

      PUPable_reg(DivVOutputParams);

      PUPable_reg(PDVOutputParams);

      PUPable_reg(MuMaxOutputParams);

      PUPable_reg(BSwOutputParams);

      PUPable_reg(CsOutputParams);

      PUPable_reg(EDotOutputParams);

      PUPable_reg(Cool0OutputParams);

      PUPable_reg(Cool1OutputParams);

      PUPable_reg(Cool2OutputParams);

      PUPable_reg(Cool3OutputParams);

      PUPable_reg(OxOutputParams);

      PUPable_reg(FeOutputParams);

      PUPable_reg(MetalsOutputParams);

      PUPable_reg(MFormOutputParams);

      PUPable_reg(TimeFormOutputParams);

      PUPable_reg(AgeOutputParams);

      PUPable_reg(coolontimeOutputParams);

      PUPable_reg(ESNRateOutputParams);

      PUPable_reg(DtOutputParams);

      PUPable_reg(KeyOutputParams);

      PUPable_reg(DomainOutputParams);

      PUPable_reg(RungOutputParams);

      PUPable_reg(IOrderOutputParams);

      PUPable_reg(IGasOrderOutputParams);

/* REG: mainchare Main: Chare{
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
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: group ProjectionsControl: IrrGroup{
ProjectionsControl(void);
void on(const CkCallback &impl_noname_0);
void off(const CkCallback &impl_noname_1);
ProjectionsControl(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ProjectionsControl::__register("ProjectionsControl", sizeof(ProjectionsControl));

/* REG: group ReductionHelper: IrrGroup{
ReductionHelper(void);
void countTreePieces(const CkCallback &cb);
void evaluateBoundaries(const SFC::Key *keys, int n, int isRefine, const CkCallback &cb);
void evaluateBoundaries(const CkBitVector &binsToSplit, const CkCallback &cb);
ReductionHelper(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ReductionHelper::__register("ReductionHelper", sizeof(ReductionHelper));

/* REG: chare Sorter: Chare{
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
  CkIndex_Sorter::__register("Sorter", sizeof(Sorter));

/* REG: nodegroup DataManager: NodeGroup{
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
  CkIndex_DataManager::__register("DataManager", sizeof(DataManager));

/* REG: array TreePiece: ArrayElement{
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
  CkIndex_TreePiece::__register("TreePiece", sizeof(TreePiece));

/* REG: array LvArray: ArrayElement{
LvArray(void);
LvArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_LvArray::__register("LvArray", sizeof(LvArray));

/* REG: group PETreeMerger: IrrGroup{
PETreeMerger(void);
PETreeMerger(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_PETreeMerger::__register("PETreeMerger", sizeof(PETreeMerger));

/* REG: group DumpFrameData: IrrGroup{
DumpFrameData(void);
void clearFrame(const InDumpFrame &in, const CkCallback &cb);
void combineFrame(const InDumpFrame &in, const CkCallback &cb);
DumpFrameData(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_DumpFrameData::__register("DumpFrameData", sizeof(DumpFrameData));

/* REG: group IntraNodeLBManager: IrrGroup{
IntraNodeLBManager(int dummy, const CkGroupID &gid);
void registerTP(void);
void finishedTPWork(void);
IntraNodeLBManager(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_IntraNodeLBManager::__register("IntraNodeLBManager", sizeof(IntraNodeLBManager));

  _registerInitCall(registerStatistics,0);

}
extern "C" void CkRegisterMainModule(void) {
  _registerParallelGravity();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main >(dynamic_cast<Main* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ProjectionsControl::virtual_pup(PUP::er &p) {
    recursive_pup<ProjectionsControl >(dynamic_cast<ProjectionsControl* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ReductionHelper::virtual_pup(PUP::er &p) {
    recursive_pup<ReductionHelper >(dynamic_cast<ReductionHelper* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Sorter::virtual_pup(PUP::er &p) {
    recursive_pup<Sorter >(dynamic_cast<Sorter* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_DataManager::virtual_pup(PUP::er &p) {
    recursive_pup<DataManager >(dynamic_cast<DataManager* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TreePiece::virtual_pup(PUP::er &p) {
    recursive_pup<TreePiece >(dynamic_cast<TreePiece* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LvArray::virtual_pup(PUP::er &p) {
    recursive_pup<LvArray >(dynamic_cast<LvArray* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PETreeMerger::virtual_pup(PUP::er &p) {
    recursive_pup<PETreeMerger >(dynamic_cast<PETreeMerger* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_DumpFrameData::virtual_pup(PUP::er &p) {
    recursive_pup<DumpFrameData >(dynamic_cast<DumpFrameData* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_IntraNodeLBManager::virtual_pup(PUP::er &p) {
    recursive_pup<IntraNodeLBManager >(dynamic_cast<IntraNodeLBManager* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
