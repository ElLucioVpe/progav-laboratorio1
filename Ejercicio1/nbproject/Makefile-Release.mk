#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/classes/sources/Empleado.o \
	${OBJECTDIR}/classes/sources/Empresa.o \
	${OBJECTDIR}/classes/sources/EmpresaExtranjera.o \
	${OBJECTDIR}/classes/sources/EmpresaNacional.o \
	${OBJECTDIR}/classes/sources/RelacionLaboral.o \
	${OBJECTDIR}/datatypes/sources/Direccion.o \
	${OBJECTDIR}/datatypes/sources/DtEmpleado.o \
	${OBJECTDIR}/datatypes/sources/DtEmpresa.o \
	${OBJECTDIR}/datatypes/sources/DtEmpresaExtranjera.o \
	${OBJECTDIR}/datatypes/sources/DtEmpresaNacional.o \
	${OBJECTDIR}/datatypes/sources/Fecha.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab1

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab1: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/classes/sources/Empleado.o: classes/sources/Empleado.cpp 
	${MKDIR} -p ${OBJECTDIR}/classes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/classes/sources/Empleado.o classes/sources/Empleado.cpp

${OBJECTDIR}/classes/sources/Empresa.o: classes/sources/Empresa.cpp 
	${MKDIR} -p ${OBJECTDIR}/classes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/classes/sources/Empresa.o classes/sources/Empresa.cpp

${OBJECTDIR}/classes/sources/EmpresaExtranjera.o: classes/sources/EmpresaExtranjera.cpp 
	${MKDIR} -p ${OBJECTDIR}/classes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/classes/sources/EmpresaExtranjera.o classes/sources/EmpresaExtranjera.cpp

${OBJECTDIR}/classes/sources/EmpresaNacional.o: classes/sources/EmpresaNacional.cpp 
	${MKDIR} -p ${OBJECTDIR}/classes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/classes/sources/EmpresaNacional.o classes/sources/EmpresaNacional.cpp

${OBJECTDIR}/classes/sources/RelacionLaboral.o: classes/sources/RelacionLaboral.cpp 
	${MKDIR} -p ${OBJECTDIR}/classes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/classes/sources/RelacionLaboral.o classes/sources/RelacionLaboral.cpp

${OBJECTDIR}/datatypes/sources/Direccion.o: datatypes/sources/Direccion.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/sources/Direccion.o datatypes/sources/Direccion.cpp

${OBJECTDIR}/datatypes/sources/DtEmpleado.o: datatypes/sources/DtEmpleado.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/sources/DtEmpleado.o datatypes/sources/DtEmpleado.cpp

${OBJECTDIR}/datatypes/sources/DtEmpresa.o: datatypes/sources/DtEmpresa.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/sources/DtEmpresa.o datatypes/sources/DtEmpresa.cpp

${OBJECTDIR}/datatypes/sources/DtEmpresaExtranjera.o: datatypes/sources/DtEmpresaExtranjera.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/sources/DtEmpresaExtranjera.o datatypes/sources/DtEmpresaExtranjera.cpp

${OBJECTDIR}/datatypes/sources/DtEmpresaNacional.o: datatypes/sources/DtEmpresaNacional.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/sources/DtEmpresaNacional.o datatypes/sources/DtEmpresaNacional.cpp

${OBJECTDIR}/datatypes/sources/Fecha.o: datatypes/sources/Fecha.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes/sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/sources/Fecha.o datatypes/sources/Fecha.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab1

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
