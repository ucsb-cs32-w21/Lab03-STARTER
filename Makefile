#CXX=clang++
CXX=g++

CXXFLAGS= -Wall

BINARIES=dataProj testStates testSort

all: ${BINARIES}

tests: ${BINARIES}
	./testStates
	./testSort

dataProj: rating.o dataAQ.o stateHosp.o stateDemog.o demogData.o parse.o main.o
	${CXX} $^ -o $@

testStates: rating.o stateHosp.o testStates.o dataAQ.o stateDemog.o demogData.o parse.o  tddFuncs.o
	${CXX} $^ -o $@

testSort: rating.o stateHosp.o testSort1.o dataAQ.o stateDemog.o demogData.o parse.o  tddFuncs.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o 

