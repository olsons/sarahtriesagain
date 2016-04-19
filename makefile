all: main

main: main.o cityClass.o Activity.o BucketList.o
	g++ main.o cityClass.o Activity.o BucketList.o -o main

main.o: main.cpp	
	g++ -c main.cpp

cityClass.o: cityClass.cpp
	g++ -c cityClass.cpp

Activity.o: Activity.cpp
	g++ -c Activity.cpp

BucketList.o: BucketList.cpp
	g++ -c BucketList.cpp

clean:
	rm -f *.o main
