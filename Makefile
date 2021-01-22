#CXX=clang++
CXX=g++

CXXFLAGS= -O3 -std=c++14 

BINARIES=dataProj testStates

all: ${BINARIES}

tests: ${BINARIES}
	./testStates

dataProj: rating.o dataAQ.o stateHosp.o stateDemog.o demogData.o parse.o main.o
	${CXX} $^ -o $@

testStates: rating.o stateHosp.o testStates.o dataAQ.o stateDemog.o demogData.o parse.o  tddFuncs.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o 
