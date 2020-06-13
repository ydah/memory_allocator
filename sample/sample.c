#include <stdio.h>
#include "memory.h"

int main(void) {
  printf("sample start...");
  int *m = MemAlloc(sizeof(int));
  MemFree(m);
  printf("sample end...");
  return 0;
}
