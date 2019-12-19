ifeq ($(OS), Windows_NT)
	EXE_SUFFIX=.exe
else
	EXE_SUFFIX=
endif

main$(EXE_SUFFIX): main.o
	gcc -fcallgraph-info main.o -o main


main.o: main.c
	gcc -c main.c -o main.o
