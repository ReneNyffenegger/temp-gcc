#include <stdio.h>
#include <string.h>

inline int mult(int a, int b) {
   return a*b;
}

int main(int argc, char* argv[]) {
   printf("strlen: %ld\n", strlen(argv[0]));
   printf("mult: %d\n", mult(argc, (int) strlen(argv[0])));
}
