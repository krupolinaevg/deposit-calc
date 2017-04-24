all: bin/deposit-calc bin/deposit_calc_test_validation  bin/deposit_calc_test
bin/deposit-calc: build/src/deposit.o build/src/main.o 
	gcc build/src/main.o build/src/deposit.o  -o bin/deposit-calc

bin/deposit_calc_test_validation: build/test/validation_test.o build/test/main.o build/src/deposit.o

	gcc build/test/main.o build/test/validation_test.o build/src/deposit.o -o bin/deposit_calc_test_validation   
 
bin/deposit_calc_test: build/test/deposit_test.o build/test/main.o build/src/deposit.o

	gcc build/test/main.o build/test/deposit_test.o build/src/deposit.o -o bin/deposit_calc_test


build/test/deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o 

build/test/validation_test.o: test/validation_test.c
	gcc -Wall -Werror -c test/validation_test.c -o build/test/validation_test.o

build/test/main.o: test/main.c
	gcc -Wall -Werror -c test/main.c -o build/test/main.o

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o









clean:
	rm -f build/src/*.o
	rm -f build/test/*.o