#include "main.h"

char *_getline(char *buffer, int size, FILE *stream){
  char *lineptr = buffer;
  int *n = size;
  char *fgets(&lineptr, &n, stdin);

}
