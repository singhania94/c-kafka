export SGSBASE=/xenv/gcc_gnu/X/4.9.2/ia64
export CCSBASE=${SGSBASE}
export CPLUS_BASE=${SGSBASE}
export CCROOTDIR=${SGSBASE}
export CCINCDIR=${CPLUS_BASE}/include/c++/4.9.2
export PATH=${CPLUS_BASE}/bin:${PATH}
export LD_LIBRARY_PATH=${CPLUS_BASE}/lib:${LD_LIBRARY_PATH}

TBB_DIR=/ace/fo1d/dev/users/tg75018/Vendor/RH6.6AS_64/x86_64/tbb_4_2
INCDIRS="-I${CCINCDIR} -I${TBB_DIR}/include -I/xenv/Boost/X/1.55.0/BINGRP_rh5_64/include"
g++ -D__USE_XOPEN2K8 -I. ${INCDIRS} -L${TBB_DIR}/lib -L/xenv/Boost/X/1.55.0/BINGRP_rh5_64/lib/release $*
