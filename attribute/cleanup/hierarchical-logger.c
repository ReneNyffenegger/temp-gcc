
/*
void cleanup_function(int *p) {
    printf("Cleaning up: %d\n", *p);
}

void my_function() {
    int my_var __attribute__((cleanup(cleanup_function))) = 42;
    // When my_var goes out of scope, cleanup_function(&my_var) will be called.
}
*/

#include <stdio.h>
#include "hierarchical-logger.h"

int log_indent_ = 0;

void log_print_indent() {
   for (int i=0; i<log_indent_; i++) {
      printf("  ");
   }
}

int log_indent(const char *txt) {
   log_print_indent();
   printf(txt);
   printf(" {\n");
// log_text(txt);
   log_indent_ ++;
   return 0;
// printf(txt);

}

void log_text(const char *txt) {
   log_print_indent();
   printf("%s\n", txt);
}

void log_dedent(int*) {
   log_indent_--;
   log_print_indent();
   printf("}\n");
}
