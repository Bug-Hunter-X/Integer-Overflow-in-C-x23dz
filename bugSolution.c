#include <stdio.h>
#include <limits.h>

int main() {
  int x = INT_MAX; 
  if (x + 1 > INT_MAX) {
    printf("Integer overflow detected!\n");
  } else {
    x = x + 1; 
    printf("%d\n", x); 
  }
  return 0;
}
