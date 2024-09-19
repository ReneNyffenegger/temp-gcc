int  tq84_log_indent(const char *txt);
void tq84_log_text(const char *txt);
void tq84_log_dedent(int*);

#define TQ84_LOG_INDENT(txt) int x __attribute__(( cleanup(tq84_log_dedent) )) = tq84_log_indent(txt);
#define TQ84_LOG_TEXT(txt)  tq84_log_text(txt);
