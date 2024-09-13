
go: prog
	objdump -s -j .gnu.lto_.opts prog
	objdump -s -j .gnu.lto_.opts prog.o

prog: prog.o
	gcc prog.o -o prog

prog.o: prog.c
	gcc -g -O3 -c prog.c -o prog.o
