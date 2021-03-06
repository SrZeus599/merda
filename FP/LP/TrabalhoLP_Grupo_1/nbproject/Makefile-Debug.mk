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
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/c0d0437b/API_Leitura.o \
	${OBJECTDIR}/_ext/c0d0437b/API_Utils.o \
	${OBJECTDIR}/Estruturas_gerais.o \
	${OBJECTDIR}/Gestao_Faturas.o \
	${OBJECTDIR}/Gestao_Precos.o \
	${OBJECTDIR}/Gestao_Utilizadores.o \
	${OBJECTDIR}/Gestao_Viagens.o \
	${OBJECTDIR}/Menu.o \
	${OBJECTDIR}/Persistencia_Dados.o \
	${OBJECTDIR}/Utils.o \
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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/trabalholp_grupo_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/trabalholp_grupo_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/trabalholp_grupo_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/c0d0437b/API_Leitura.o: ../../API_Leitura/API_Leitura.c
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d0437b
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d0437b/API_Leitura.o ../../API_Leitura/API_Leitura.c

${OBJECTDIR}/_ext/c0d0437b/API_Utils.o: ../../API_Leitura/API_Utils.c
	${MKDIR} -p ${OBJECTDIR}/_ext/c0d0437b
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c0d0437b/API_Utils.o ../../API_Leitura/API_Utils.c

${OBJECTDIR}/Estruturas_gerais.o: Estruturas_gerais.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estruturas_gerais.o Estruturas_gerais.c

${OBJECTDIR}/Gestao_Faturas.o: Gestao_Faturas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gestao_Faturas.o Gestao_Faturas.c

${OBJECTDIR}/Gestao_Precos.o: Gestao_Precos.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gestao_Precos.o Gestao_Precos.c

${OBJECTDIR}/Gestao_Utilizadores.o: Gestao_Utilizadores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gestao_Utilizadores.o Gestao_Utilizadores.c

${OBJECTDIR}/Gestao_Viagens.o: Gestao_Viagens.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gestao_Viagens.o Gestao_Viagens.c

${OBJECTDIR}/Menu.o: Menu.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menu.o Menu.c

${OBJECTDIR}/Persistencia_Dados.o: Persistencia_Dados.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Persistencia_Dados.o Persistencia_Dados.c

${OBJECTDIR}/Utils.o: Utils.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Utils.o Utils.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
