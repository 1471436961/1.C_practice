.PHONY: clean
all: main.o ./src/head1.o ./src/head2.o ./src/head3.o
	g++ -I./include main.o ./src/head1.o ./src/head2.o ./src/head3.o -o ./bin/hz
./src/head1.o: ./include/head1.h ./src/head1.cc 
	g++ -I./include -c ./src/head1.cc -o ./src/head1.o
./src/head2.o: ./include/head2.h ./src/head2.cc 
	g++ -I./include -c ./src/head2.cc -o ./src/head2.o
./src/head3.o: ./include/head3.h ./src/head3.cc 
	g++ -I./include -c ./src/head3.cc -o ./src/head3.o
main.o: main.cpp ./include/*.h 
	g++ -I./include -c main.cpp
clean:
	rm ./bin/hz main.o ./src/*.o
