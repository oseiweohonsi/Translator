Main: Morse.o main.o
	g++ Morse.o main.o -o main
main.o: main.cpp
	g++ -c main.cpp 
Morse.o: Morse.cpp Morse.h
	g++ -c Morse.cpp
clean:
	rm *.o main
run:
	./Morse
run1: 
	./main
