MyDynamic_exe: assign_3main.o libmy_dynamic.so 
	gcc -o MyDynamic_exe assign_3main.o ./libmy_dynamic.so

assign_3main.o: assign_3main.c compare.h fib.h fact.h rand.h
	gcc -c assign_3main.c -I.

libmy_dynamic.so: compare.o fib.o fact.o rand.o
	gcc -shared -o libmy_dynamic.so compare.o fib.o fact.o rand.o

compare.o: compare.c compare.h
	gcc -fPIC -c compare.c -I.

fib.o: fib.c fib.h
	gcc -fPIC -c fib.c -I.

fact.o: fact.c fact.h
	gcc -fPIC -c fact.c -I.

rand.o: rand.c rand.h
	gcc -fPIC -c rand.c -I.

clean:
	rm *.o

install:
	cp MyDynamic_exe /usr/bin

uninstall:
	rm /usr/bin/MyDynamic_exe
