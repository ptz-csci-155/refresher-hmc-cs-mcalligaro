TARGETS = main
CXX = clang++
CXXFLAGS = -g -std=c++1z -Wall -Wextra -pedantic

all: $(TARGETS)

vector.o: vector.cpp vector.hpp
	$(CXX) $(CXXFLAGS) -c vector.cpp

main.o: main.cpp vector.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

main: main.o vector.o
	$(CXX) $(CXXFLAGS) -o main $^

clean:
	rm *.o $(TARGETS)
	