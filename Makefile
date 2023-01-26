all:main.out

main.out:
	gcc main.c quadraticroots.o -lm -o main.exe

quadraticroots.o:quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	rm -f*.o*.exe