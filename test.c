#include <stdio.h>

int main() {
  int x = 0;
  int y = 1;
  int z = 2;

  x = x + y;
  x = y + x;
  x = x + y;
  x = y + x;

  x = x + z;
  z = y - x;

  y = y + x + 5;
  y = y + x + 5;
  y = y + x + 5;

  z = y - x;

  fprintf(stderr, "x = %d, y = %d\n", x, y);
  
}
