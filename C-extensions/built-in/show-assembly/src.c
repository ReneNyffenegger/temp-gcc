
void empty(char c) {
}

char is_digit(char c) {
#if __has_builtin(isdigit)
   char d;
   d = __builtin_isdigit(c);
   return d;
#else
#  error isdigit is not a built-in
#endif
}
