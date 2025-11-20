#include <stdio.h>

int main() {
  int *p = NULL;
  printf("%p, 0x%llu\n", NULL, (long long unsigned int)NULL);
  printf("%p\n", p);
}
