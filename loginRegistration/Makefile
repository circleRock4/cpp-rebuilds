com = clang++ 
flags = -std=c++17 -Wall -g

main: main.o login.o
	$(com) = main.o login.o -o main

main.o: main.cpp login.h
	$(com) $(flags) -c main.cpp -o main.o

login.o: login.cpp login.h
	$(com) $(flags) -c login.cpp -o login.o

run: main
	./main 

clean: 
	rm -f main *.o