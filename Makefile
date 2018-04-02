random: random.o main.o
	g++ -Wall -pedantic -g -o random random.o main.o

main.o: random.h main.cpp
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

random.o: random.h random.cpp
	g++ -Wall -pedantic -g -std=c++11 -c random.cpp

clean:
	rm -f random.o main.o random random.exe
