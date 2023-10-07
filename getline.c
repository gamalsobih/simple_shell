#include "main.h"

ssize_t _getline(char *buffer, size_t *size, FILE *stream){
  ssize_t s;
  char *lineptr = buffer;
  size_t  n = *size;
 s = getline(&lineptr, &n, stream);
  printf("%s", lineptr);
return (s);
}
