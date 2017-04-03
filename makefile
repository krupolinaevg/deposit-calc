all: build/deposit.o build/main.o 
	gcc build/main.o build/deposit.o -o bin/deposit-calc

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

clean:
	rm -f build/*.o