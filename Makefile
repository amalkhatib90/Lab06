#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o Test.o
	g++ -g -Wall -std=c++11 -no-pie main.o LinkedListOfInts.o Test.o -o prog


main.o: main.cpp
	g++ -g -Wall -std=c++11 -no-pie -c main.cpp


#Add needed Test.o recipe and compiler command
Test.o: Test.h Test.cpp
	g++ -g -Wall -std=c++11 -no-pie -c Test.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
