main: t1.o t.o
	g++ -o main t1.o t.o
t1.o: t1.cpp
	g++ -c t1.cpp
t.o: t.cpp
	g++ -c t.cpp
clean:
	rm -f t1.o t.o main

