

inline int abs_(int a) {
   if (a < 0) {
      return -a;
   }
   return a;
}

int mult(int a, int b) {
   return abs_(a)*abs_(b);
}
