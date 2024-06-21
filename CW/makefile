all: prog

prog: src/main.o api/temp_functions.o
	gcc -o prog src/main.o api/temp_functions.o

main.o: src/main.c
	gcc -c -o src/main.o src/main.c

temp_api.o: api/temp_functions.c
	gcc -c -o api/temp_functions.o api/temp_functions.c

clean:
	del src\main.o
	del api\temp_functions.o
	del prog.exe


