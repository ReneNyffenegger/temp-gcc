#include "hierarchical-logger-v2.h"

// #define TQ84_PRINT(x) printf(x)
   #define TQ84_PRINT(x) VG_(printf)(x)

int tq84_log_indent_ = 0;

void tq84_log_print_indent(void);

void tq84_log_print_indent(void) {
   for (int i=0; i<tq84_log_indent_; i++) {
      TQ84_PRINT("  ");
   }
}

int tq84_log_indent(const char *txt) {
   tq84_log_print_indent();
   TQ84_PRINT("TQ84: ");
   TQ84_PRINT(txt);
   TQ84_PRINT(" {\n");
// tq84_log_text(txt);
   tq84_log_indent_ ++;
   return 0;
// TQ84_PRINT(txt);

}

void tq84_log_text(const char *txt) {
   tq84_log_print_indent();
   TQ84_PRINT("TQ84: ");
   TQ84_PRINT(txt);
   TQ84_PRINT("\n");
}

void tq84_log_dedent(int*) {
   tq84_log_indent_--;
   tq84_log_print_indent();
   TQ84_PRINT("}\n");
}

