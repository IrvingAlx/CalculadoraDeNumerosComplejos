main.exe: main.o funciones.o
	gcc main.o funciones.o -lm -o main.exe

main.o: main.c
	gcc -c main.c

funciones.o: funciones.c
	gcc -c funciones.c