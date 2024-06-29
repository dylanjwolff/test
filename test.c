#include <stdio.h>

int main() {
  int a = 0;
  int y = 1;
  int z = 2;

  a = a + y;
  a = y + a;
  a = a + y;
  a = y + a;

  a = a + z;
  z = y - a;

  y = y + a + 5;
  y = y + a + 5;
  y = y + a + 5;

  z = y - a;

  fprintf(stderr, "a = %d, y = %d\n", a, y);
  
}
