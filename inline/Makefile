C_OPTS= \
   -Werror \
   -Wall \
   -Wextra \
   -pedantic \
   -Wcast-align \
   -Wcast-qual \
   -Wdisabled-optimization \
   -Wformat=2 \
   -Winit-self \
   -Wlogical-op \
   -Wmissing-include-dirs \
   -Wredundant-decls \
   -Wshadow \
   -Wstrict-overflow=5 \
   -Wundef \
   -Wno-unused \
   -Wno-variadic-macros \
   -Wno-parentheses \
   -Wconversion \
   -fdiagnostics-show-option

   C_OPTS+=-Wunused-function
   C_OPTS+=-Winline#           Stop if functions declared as inline are not inlined
   C_OPTS+=-Wfatal-errors#     Show at most one error
#  C_OPTS+=--coverage

LNK_OPTS=
LNK_OPTS+=-Wl,--warn-common

#
prog: main.o func.o
	gcc $(LNK_OPTS) main.o func.o -o prog

main.o: main.c func.h Makefile
	gcc $(C_OPTS) -O2 -c main.c -o main.o

func.o: func.c func.h Makefile
	gcc $(C_OPTS) -O2 -c func.c -o func.o
