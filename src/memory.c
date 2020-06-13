#include <memory.h>

void *MemAlloc(size_t size) {
  if (size == 0) return NULL;
  return malloc(size);
}

void MemFree(void *ptr) {
  if (ptr == NULL) return;
  free(ptr);
}
