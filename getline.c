#include "main.h"

char *_getline(char *buffer, int size, FILE *stream){
  char *lineptr = buffer;
  size_t  n =size;
  getline(&lineptr, &n, stdin);
return (lineptr);
}
