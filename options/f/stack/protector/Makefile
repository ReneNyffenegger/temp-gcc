
all: no-protection.S  stack-protector.S stack-protector-strong.S

no-protection.S: prog.c
	gcc -S -masm=intel $< -o $@

stack-protector.S: prog.c
	gcc -S -masm=intel $< -o $@ -fstack-protector

stack-protector-strong.S: prog.c
	gcc -S -masm=intel $< -o $@ -fstack-protector-strong
