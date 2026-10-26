program: main.o vec3.o
	gcc -o program main.o vec3.o

main.o: main.c vec3.h
	gcc -c main.c

vec3.o: vec3.c vec3.h
	gcc -c vec3.c

clean:
	rm -f main.o vec3.o program

.PHONY: clean