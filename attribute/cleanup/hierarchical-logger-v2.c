#include "hierarchical-logger-v2.h"

// #define TQ84_PRINT(...) printf(__VA_ARGS__)
// #define TQ84_PRINT(...) VG_(printf)(__VA_ARGS__)

// #define TQ84_PRINTF      printf
// #define TQ84_VPRINTF    vprintf
   #define TQ84_PRINTF      VG_(printf)
   #define TQ84_VPRINTF    VG_(vprintf)

int tq84_log_indent_ = 0;

void tq84_log_print_indent(void);

void tq84_log_print_indent(void) {
   for (int i=0; i<tq84_log_indent_; i++) {
      TQ84_PRINTF("  ");
   }
}

int tq84_log_indent(const char *fmt, ...) {
   va_list args;
   va_start(args, fmt);
   tq84_log_print_indent();
   TQ84_PRINTF("TQ84: ");

   TQ84_VPRINTF(fmt, args);

// TQ84_PRINT(txt);
   TQ84_PRINTF(" {\n");
// tq84_log_text(txt);
//
   tq84_log_indent_ ++;
   va_end(args);
   return 0;
// TQ84_PRINT(txt);

}

void tq84_log_text(const char *fmt, ...) {

   va_list args;
   va_start(args, fmt);

   tq84_log_print_indent();
   TQ84_PRINTF("TQ84: ");
   TQ84_VPRINTF(fmt, args);
   TQ84_PRINTF("\n");

   va_end(args);
}

void tq84_log_dedent(int*) {
   tq84_log_indent_--;
   tq84_log_print_indent();
   TQ84_PRINTF("}\n");
}

