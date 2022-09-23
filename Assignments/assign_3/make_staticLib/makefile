MyStatic_exe: assign_3main.o my_static
	gcc -o MyStatic_exe assign_3main.o -lmy_static -L.

assign_3main.o: assign_3main.c compare.h fib.h fact.h rand.h
	gcc -c assign_3main.c -I.

my_static: compare.o fib.o fact.o rand.o
	ar -rs libmy_static.a compare.o fib.o fact.o rand.o

comapare.o: compare.c
	gcc -c compare.c -I.

fib.o: fib.c
	gcc -c fib.c -I.

fact.o: fact.c
	gcc -c fact.c -I.

rand.o: rand.c
	gcc -c rand.c -I.

clean: 
	rm *.o

install:
	cp MyStatic_exe /usr/bin

uninstall:
	rm /usr/bin/MyStatic_exe
