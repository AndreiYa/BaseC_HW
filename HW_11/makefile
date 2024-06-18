all: prog

prog: main.o temp_api.c
	gcc -o prog main.o temp_api.c

main.o: main.c
	gcc -c -o main.o main.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del *.exe


