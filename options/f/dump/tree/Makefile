ifeq ($(OS), Windows_NT)
	EXE_SUFFIX=.exe
else
	EXE_SUFFIX=
endif

main$(EXE_SUFFIX): main.o
	gcc main.o -o main

main.o: main.c
	gcc -fdump-tree-all-graph -c main.c -o main.o
