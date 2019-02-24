output:	main.o tree.o
	g++ -std=c++0x -Wall main.o tree.o -o p0

main.o: main.cpp
	g++ -c main.cpp

tree.o: tree.cpp tree.h
	g++ -c tree.cpp

clean:
	rm *.o p0
