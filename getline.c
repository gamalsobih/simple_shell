#include "main.h"

char *_getline(char *buffer, int size, FILE *stream){
  char *lineptr = buffer;
  int *n;
  *n=1024;
  char *fgets(&lineptr,n, stdin);

}
