com = clang++ 
flags = -std=c++17 -Wall -g

main: main.o user.o database.o
	$(com) main.o user.o database.o -o main

main.o: main.cpp user.h database.h
	$(com) $(flags) -c main.cpp -o main.o

user.o: user.cpp user.h
	$(com) $(flags) -c user.cpp -o user.o

database.o: database.cpp database.h user.h
	$(com) $(flags) -c database.cpp -o database.o

run: main
	./main 

clean: 
	rm -f main *.o db.txt