all: main

main: main.o cityClass.o
	g++ main.o cityClass.o -o main

main.o: main.cpp	
	g++ -c main.cpp

cityClass.o: cityClass.cpp
	g++ -c cityClass.cpp

clean:
	rm -f *.o main
