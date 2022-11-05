FLAGS: -O2

all: main

main: main.cpp Container.o
	g++ $(FLAGS) -o main main.cpp Container.cpp

clean:
	rm -rf main *.o test_Bin_Packing_Solver test_Container test_Node

test_Container: test_Container.cpp Container.o Container.h
	g++ $(FLAGS) -o test_Container test_Container.cpp Container.o

Container: Container.cpp Container.h
	g++ -c Container.cpp

test_Node: test_Node.cpp Node.o Node.h Container.o
	g++ -o test_Node test_Node.cpp Node.o Container.o

Node: Node.cpp Node.h Container.o
	g++ -c Node.cpp

test_Bin_Packing_Solver: test_Bin_Packing_Solver.cpp Bin_Packing_Solver.o Bin_Packing_Solver.h Container.o
	g++ $(FLAGS) -o test_Bin_Packing_Solver Bin_Packing_Solver.o Container.o test_Bin_Packing_Solver.cpp

Bin_Packing_Solver: Bin_Packing_Solver.cpp Bin_Packing_Solver.h Container.o
	g++ $(FLAGS) -c Bin_Packing_Solver.cpp

Bin_Packing: Bin_Packing.cpp Bin_Packing.h Container.o
	g++ $(FLAGS) -c Bin_Packing.cpp

test_Bin_Packing: test_Bin_Packing.cpp Bin_Packing.o Bin_Packing.h Container.o
	g++ $(FLAGS) -o test_Bin_Packing test_Bin_Packing.cpp Bin_Packing.o Container.o