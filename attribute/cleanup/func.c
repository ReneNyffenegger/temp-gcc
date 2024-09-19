#include "func.h"
#include "hierarchical-logger.h"


void func() {

  int x __attribute__(( cleanup(log_dedent) )) = log_indent(__func__);
  log_text("in func");
//log_dedent();

}
