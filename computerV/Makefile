CXX=g++
CXXFLAGS=-std=c++11 `pkg-config --cflags opencv`
LDLIBS=`pkg-config --libs opencv`

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp $(LDLIBS)

clean:
	rm -f main
