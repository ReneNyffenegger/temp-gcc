#include "hierarchical-logger.h"
#include "func.h"

int main() {

  int x __attribute__(( cleanup(log_dedent) )) = log_indent("main");
  log_text("going to call func");
  func();
  log_text("returned from func");
//log_dedent();


}
