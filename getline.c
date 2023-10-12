#include "main.h"

ssize_t _getline(char **buffer, size_t *size, FILE *stream){
  ssize_t s;
   s = getline(&buffer, size, stream);
  printf("%s", lineptr);
return (s);
}
