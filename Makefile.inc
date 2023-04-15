# PYTHIA configuration file.
# Generated on Tue Apr 11 21:14:06 EDT 2023 with the user supplied options:
# --with-fastjet3=/Users/alexwen/fastjet/install

# Install directory prefixes.
PREFIX_BIN=/Users/alexwen/pythia8303/bin
PREFIX_INCLUDE=/Users/alexwen/pythia8303/include
PREFIX_LIB=/Users/alexwen/pythia8303/lib
PREFIX_SHARE=/Users/alexwen/pythia8303/share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
CXX=g++
CXX_COMMON=-O2 -std=c++11 -pedantic -W -Wall -Wshadow -fPIC
CXX_SHARED=-dynamiclib
CXX_SONAME=-Wl,-dylib_install_name,@rpath/
LIB_SUFFIX=.dylib
OBJ_COMMON=

EVTGEN_USE=false
EVTGEN_CONFIG=
EVTGEN_BIN=
EVTGEN_INCLUDE=
EVTGEN_LIB=

FASTJET3_USE=true
FASTJET3_CONFIG=fastjet-config
FASTJET3_BIN=/Users/alexwen/fastjet/install/bin/
FASTJET3_INCLUDE=-I/Users/alexwen/fastjet/install/include
FASTJET3_LIB=-L/Users/alexwen/fastjet/install/lib -Wl,-rpath,/Users/alexwen/fastjet/install/lib -lfastjet

HEPMC2_USE=false
HEPMC2_CONFIG=fastjet-config
HEPMC2_BIN=
HEPMC2_INCLUDE=
HEPMC2_LIB=

HEPMC3_USE=false
HEPMC3_CONFIG=fastjet-config
HEPMC3_BIN=
HEPMC3_INCLUDE=
HEPMC3_LIB=

LHAPDF5_USE=false
LHAPDF5_CONFIG=fastjet-config
LHAPDF5_BIN=
LHAPDF5_INCLUDE=
LHAPDF5_LIB=

LHAPDF6_USE=false
LHAPDF6_CONFIG=fastjet-config
LHAPDF6_BIN=
LHAPDF6_INCLUDE=
LHAPDF6_LIB=

POWHEG_USE=false
POWHEG_CONFIG=fastjet-config
POWHEG_BIN=
POWHEG_INCLUDE=
POWHEG_LIB=

RIVET_USE=false
RIVET_CONFIG=fastjet-config
RIVET_BIN=
RIVET_INCLUDE=
RIVET_LIB=

ROOT_USE=false
ROOT_CONFIG=fastjet-config
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

YODA_USE=false
YODA_CONFIG=fastjet-config
YODA_BIN=
YODA_INCLUDE=
YODA_LIB=

GZIP_USE=false
GZIP_CONFIG=fastjet-config
GZIP_BIN=
GZIP_INCLUDE=
GZIP_LIB=

PYTHON_USE=false
PYTHON_CONFIG=fastjet-config
PYTHON_BIN=
PYTHON_INCLUDE=
PYTHON_LIB=

MG5MES_USE=false
MG5MES_CONFIG=fastjet-config
MG5MES_BIN=
MG5MES_INCLUDE=
MG5MES_LIB=

OPENMP_USE=false
OPENMP_CONFIG=fastjet-config
OPENMP_BIN=
OPENMP_INCLUDE=
OPENMP_LIB=
