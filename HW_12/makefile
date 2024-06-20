all: prog

prog: src/main.o api/temp_api.c
	gcc -o prog src/main.o api/temp_api.c

main.o: src/main.c
	gcc -c -o main.o main.c

temp_api.o: api/temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	rm src/*.o
	rm prog


