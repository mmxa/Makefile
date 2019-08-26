run: main.o Hero.o
	g++  main.o Hero.o -std=c++11 -o run
main.o: main.cpp #Hero.h
	g++ -c $^
Hero.o: Hero.cpp
	g++ -c $^
	
clean:
	rm -rf *.o
