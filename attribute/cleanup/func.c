#include "func.h"
#include "hierarchical-logger.h"


void func() {

  log_indent("func");
  log_text("in func");
  log_dedent();

}
