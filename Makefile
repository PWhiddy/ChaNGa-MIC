# Flags that can be passed during compilation
#FLAG_PRINT = -DCOSMO_PRINT=1       #enable really verbose prints
#FLAG_PRINT = -DCOSMO_PRINT_BK=2       #enable verbose book-keeping prints

#FLAG_STATISTICS = -DCOSMO_STATS=1  # enable statistics collection
#FLAG_DEBUG = -DCOSMO_DEBUG=2       # enable debugging information
#CACHE_TREE = -DCACHE_TREE          # enable processor tree inside the cache
INTERLIST = -DINTERLIST_VER=2      # enable interaction lists
HEXADECAPOLE = -DHEXADECAPOLE	    # use hexadecapole gravity expansions
FLAG_CHANGESOFT = -DCHANGESOFT
FLAG_BIGKEYS = 
FLAG_KERNEL = 
FLAG_COOLING = -DCOOLING_NONE

# optional CUDA flags: 
# memory:
# -DCUDA_USE_CUDAMALLOCHOST
# -DCUDA_MEMPOOL
#
# verbosity, debugging:
# -DCUDA_DM_PRINT_TREES
# -DCUDA_PRINT_TRANSFERRED_INTERACTIONS
# -DCUDA_PRINT_TRANSFER_BACK_PARTICLES
# -DCUDA_NOTIFY_DATA_TRANSFER_DONE
# -DCUDA_VERBOSE_KERNEL_ENQUEUE
# -DCUDA_NO_KERNELS
# -DCUDA_NO_ACC_UPDATES
#
# emulation mode:
# -DCUDA_EMU_KERNEL_PART_PRINTS
# -DCUDA_EMU_KERNEL_NODE_PRINTS
#
# print errors returned by CUDA calls:
# -DCUDA_PRINT_ERRORS
#
# for performance monitoring via projections/stats
# -DCUDA_STATS
# -DCUDA_TRACE
# -DCUDA_INSTRUMENT_WRS: to instrument time taken for each phase of a request. 
#                        prints average transfer, kernel and cleanup times for
#                        various kinds of request.
#
# Uncomment definition of CUDA for make benefit CUDA version
# Currently requires that HEXADECAPOLE be disabled 
# CUDA = -DINTERLIST_VER=2 -DCUDA -DCUDA_USE_CUDAMALLOCHOST -DSPCUDA -DCUDA_2D_TB_KERNEL -DCUDA_MEMPOOL #-DCUDA_STATS #-DCUDA_INSTRUMENT_WRS -DCUDA_2D_FLAT 

# useful refactor flag combinations:
# -DCHANGA_REFACTOR_WALKCHECK
# -DCHANGA_REFACTOR_WALKCHECK_INTERLIST
# -DCHANGA_REFACTOR_INTERLIST_REALLY_VERBOSE
# -DCHANGA_REFACTOR_MEMCHECK
# -DCHANGA_REFACTOR_INTERLIST_PRINT_LIST_STATE -DCHANGA_REFACTOR_PRINT_INTERACTIONS
#
#  Check walk correctness and trace walk for TEST_BUCKET on TEST_TP:
#  -DCHANGA_REFACTOR_WALKCHECK_INTERLIST -DCHANGA_REFACTOR_INTERLIST_PRINT_LIST_STATE
# -DCHANGA_PRINT_INTERACTION_COUNTS
# -DCHECK_WALK_COMPLETIONS
#FLAG_REFACTOR =  

# Flags for tree building. Use one or the other: 
# -DMERGE_REMOTE_REQUESTS : merges remote requests before sending; local trees built after requests sent
# -DSPLIT_PHASE_TREE_BUILD : no merging of remote requests on PE; local trees built after requests sent
# debug with -DPRINT_MERGED_TREE
FLAG_TREE_BUILD = -DMERGE_REMOTE_REQUESTS

#MULTISTEP_LOADBALANCING_VERBOSE = -DCOSMO_MCLB=2 -DMCLBMSV
#ORB3DLB_LOADBALANCING_VERBOSE = -DORB3DLBV
DEFINE_FLAGS = $(FLAG_PRINT) $(FLAG_STATISTICS) $(FLAG_DEBUG) $(CACHE_TREE) $(INTERLIST) $(HEXADECAPOLE) $(FLAG_COOLING) $(FLAG_BIGKEYS) $(FLAG_REFACTOR) $(MULTISTEP_LOADBALANCING_VERBOSE) $(ORB3DLB_LOADBALANCING_VERBOSE) $(CUDA) -DREDUCTION_HELPER $(FLAG_TREE_BUILD) $(FLAG_CHANGESOFT) $(FLAG_KERNEL)

CHARM_PATH = ../charm
STRUCTURES_PATH = ../utility/structures
CHARM_LDB_PATH = $(CHARM_PATH)/src/ck-ldb
CHARM_UTIL_PATH = $(CHARM_PATH)/src/util
CHARM_LIB_PATH = $(CHARM_PATH)/lib
METIS_SRC_PATH = $(CHARM_PATH)/src/libs/ck-libs/parmetis/METISLib
CACHE_LIB_PATH = $(CHARM_PATH)/tmp/libs/ck-libs/cache
THREADSAFE_HT_PATH = $(CACHE_LIB_PATH)/threadsafe_hashtable

NVIDIA_CUDA_SDK = $(HOME)/NVIDIA_CUDA_SDK
CUDA_DIR = /usr/local/cuda
NVCC = $(CUDA_DIR)/bin/nvcc
NVCC_FLAGS = -c -use_fast_math --ptxas-options=-v #-deviceemu -device-debug 
NVCC_INC = -I$(CUDA_DIR)/include -I$(NVIDIA_CUDA_SDK)/common/inc -I$(CHARM_PATH)/tmp/hybridAPI
# add $(NVCC_LIBS) to LDLIBS when compiling for cuda
NVCC_LIBS = -lcuda -lcudart -lGL

# add -module Orb3dLB here for load balancing during singlestepped runs
#OPTS = -g -memory charmdebug
OPTS = -O3 -lpthread
CXXFLAGS += $(OPTS) -I$(STRUCTURES_PATH) $(DEFINE_FLAGS) -I.. -I$(CACHE_LIB_PATH) -I$(THREADSAFE_HT_PATH)  -I..
LDFLAGS += $(OPTS) -L. -L../libs  -language charm++ -module CkCache -module CkIO -module CkMulticast -module RefineLB -module RefineCommLB -module GreedyLB -module GreedyCommLB -module OrbLB -module RotateLB -module MultistepLB -module MultistepLB_notopo -module MultistepNodeLB_notopo -module MultistepOrbLB -module Orb3dLB -module Orb3dLB_notopo -module HierarchOrbLB -module liveViz -module CkLoop #-tracemode projections -memory charmdebug -memory paranoid
XDR_DIR = ../rpc
XDR_OBJS = $(XDR_DIR)/xdr.o $(XDR_DIR)/xdr_float.o $(XDR_DIR)/xdr_mem.o $(XDR_DIR)/xdr_stdio.o
LDLIBS += $(STRUCTURES_PATH)/libTipsy.a  

CHARMC = $(CHARM_PATH)/bin/charmc

CXX = $(CHARMC)
CC = $(CXX)
AR = ar q 
CXX_DEPEND = $(CXX) -M -MM -MG $(CXXFLAGS)
CFLAGS = $(OPTS) $(DEFINE_FLAGS) -g -O2  -I..

# Orb3dLB.{o,C} below
OBJECTS = Reductions.o DataManager.o TreePiece.o IntraNodeLBManager.o Sorter.o \
	  param.o GenericTreeNode.o ParallelGravity.o Ewald.o \
	  InOutput.o cosmo.o romberg.o runge.o dumpframe.o dffuncs.o \
	  moments.o MultistepLB.o Orb3dLB.o Orb3dLB_notopo.o HierarchOrbLB.o \
	  MultistepLB_notopo.o MultistepNodeLB_notopo.o MultistepOrbLB.o PETreeMerger.o \
	  TreeWalk.o Compute.o CacheInterface.o smooth.o Sph.o starform.o \
	  feedback.o imf.o supernova.o supernovaia.o starlifetime.o \
	  cha_commitid.o \
	  

SRSC = Reductions.cpp DataManager.cpp Sorter.cpp TreePiece.cpp IntraNodeLBManager.cpp \
	param.c GenericTreeNode.C ParallelGravity.cpp Ewald.C \
	InOutput.C cosmo.c romberg.c runge.c dumpframe.C dffuncs.C \
	moments.c MultistepLB.C Orb3dLB.C Orb3dLB_notopo.C HierarchOrbLB.C starform.C \
	MultistepLB_notopo.C MultistepNodeLB_notopo.C MultistepOrbLB.C PETreeMerger.cpp \
	TreeWalk.C Compute.C CacheInterface.C smooth.C Sph.C 

ifdef CUDA
  CXXFLAGS += $(NVCC_INC)
  OBJECTS += HostCUDA.o 
  SRSC += HostCUDA.cu 
  LDLIBS += $(NVCC_LIBS)
  NVCC_FLAGS += $(CXXFLAGS)
  LDFLAGS += -L$(NVIDIA_CUDA_SDK)/lib -L$(CUDA_DIR)/lib64
ifdef HEXADECAPOLE
  HEXADECAPOLE = #  
endif
endif

TARGET = ChaNGa
VERSION = 1.0
all: $(TARGET)

$(TARGET): $(OBJECTS) $(STRUCTURES_PATH)/libTipsy.a libmoduleMultistepLB.a libmoduleOrb3dLB.a libmoduleOrb3dLB_notopo.a libmoduleHierarchOrbLB.a libmoduleMultistepLB_notopo.a libmoduleMultistepNodeLB_notopo.a libmoduleMultistepOrbLB.a
	$(CHARMC) -o $(TARGET) $(LDFLAGS) $(OBJECTS) $(LDLIBS)

$(TARGET).prj: $(OBJECTS) $(STRUCTURES_PATH)/libTipsy.a libmoduleMultistepLB.a libmoduleOrb3dLB.a libmoduleOrb3dLB_notopo.a libmoduleHierarchOrbLB.a libmoduleMultistepLB_notopo.a libmoduleMultistepNodeLB_notopo.a libmoduleMultistepOrbLB.a
	$(CHARMC) -o $(TARGET).prj $(LDFLAGS) $(OBJECTS) $(LDLIBS) -tracemode projections

$(TARGET).%: $(TARGET)
	mv $(TARGET) $@
	mv charmrun charmrun.$*


VERSION: VERSION.new
	./commitid.sh

cha_commitid.c: VERSION
	echo "const char * const Cha_CommitID = \"`cat VERSION`\";" > $@
cha_commitid.o: CC=$(CHARMC)

$(STRUCTURES_PATH)/libTipsy.a:
	cd $(STRUCTURES_PATH); $(MAKE) libTipsy.a

libmoduleMultistepLB.a: MultistepLB.o
	$(CHARMC) -o libmoduleMultistepLB.a MultistepLB.o 

libmoduleMultistepOrbLB.a: MultistepOrbLB.o
	$(CHARMC) -o libmoduleMultistepOrbLB.a MultistepOrbLB.o 

libmoduleMultistepLB_notopo.a: MultistepLB_notopo.o
	$(CHARMC) -o libmoduleMultistepLB_notopo.a MultistepLB_notopo.o 

libmoduleMultistepNodeLB_notopo.a: MultistepNodeLB_notopo.o
	$(CHARMC) -o libmoduleMultistepNodeLB_notopo.a MultistepNodeLB_notopo.o 

libmoduleOrb3dLB.a: Orb3dLB.o
	$(CHARMC) -o libmoduleOrb3dLB.a Orb3dLB.o 

libmoduleOrb3dLB_notopo.a: Orb3dLB_notopo.o
	$(CHARMC) -o libmoduleOrb3dLB_notopo.a Orb3dLB_notopo.o 

libmoduleHierarchOrbLB.a: HierarchOrbLB.o
	$(CHARMC) -o libmoduleHierarchOrbLB.a HierarchOrbLB.o

%.decl.h %.def.h : %.ci
	$(CHARMC) -E $(DEFINE_FLAGS) $<

HostCUDA.o: HostCUDA.cu HostCUDA.h
	$(NVCC) $(NVCC_FLAGS) $(NVCC_INC) HostCUDA.cu

%.o: Makefile

docs:
	doxygen Doxyfile

DIRS = teststep

test: $(TARGET)
	for d in $(DIRS); do \
		(cd $$d && $(MAKE) test OPTS='$(OPTS)' || exit 1) || exit 1; \
	done

dist:
	mkdir $(TARGET)-$(VERSION)
	cp Makefile $(TARGET).doxygen *.h *.cpp *.ci $(TARGET)-$(VERSION)/
	tar zcf $(TARGET)-$(VERSION).tar.gz $(TARGET)-$(VERSION)
	rm -Rf $(TARGET)-$(VERSION)

clean:
	rm -f core* $(OBJECTS) *~ $(TARGET) *.decl.h *.def.h charmrun conv-host 
	cd $(STRUCTURES_PATH); $(MAKE) clean

ref-clean:
	rm -f $(TARGET) Compute.o TreeWalk.o

depends:
	$(CXX_DEPEND) $(SRSC) | while read i;do echo $$i| awk -F' ' '{for (i=1;i<NF;++i) print $$i" \\"}';echo;done|grep -v "$(CHARM_PATH)/bin" | grep -v "hashtable_mt.h" > Makefile.dep

# depend:
# 	$(CXX_DEPEND) $(SRSC) > Makefile.dep

# The following line is a script usable to regenerate the dependace file,
# without the inclusion of charm headers.
# $CHARM_DIR/bin/charmc  -M -MM -MG -O3 -I../utility/structures -I../ParallelGravity -Wall  -DCOSMO_STATS=1   -DCOSMO_DEBUG=2  -DINTERLIST_VER=2 -DHEXADECAPOLE     -DCACHE_TREE -DCOOLING_NONE  Reductions.cpp DataManager.cpp Sorter.cpp TreePiece.cpp param.c GenericTreeNode.C ParallelGravity.cpp Ewald.C InOutput.C cosmo.c romberg.c runge.c dumpframe.c dffuncs.c moments.c MultistepLB.C Orb3dLB.C TreeWalk.C Compute.C | while read i;do echo $i| awk -F' ' '{for (i=1;i<NF;++i) print $i" \\"}';echo;done|grep -v "charm/bin" > Makefile.dep

.PHONY: all docs dist clean depend test VERSION.new

include Makefile.dep
