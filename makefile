CC=g++ 
CPPFLAGS=--std=c++17 -Wall -pedantic

all: project.cpp term.o polynomial.o
	$(CC) $(CPPFLAGS) project.cpp term.o polynomial.o -o project

term.o: term.cpp
	$(CC) $(CPPFLAGS) -c term.cpp

polynomial.o: polynomial.cpp
	$(CC) $(CPPFLAGS) -c polynomial.cpp

clean:
	rm -f *.o *.exe *~
