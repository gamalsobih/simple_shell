#include "main.h"

ssize_t _getline(char **lineptr, size_t *n, FILE *stream) {
    size_t len = 0;
    ssize_t nread;
    char c;

    if (lineptr == NULL || n == NULL || stream == NULL) {
        return -1;
    }

    while ((nread = fgetc(stream)) != EOF) {
      /*   if (len + 1 >= *n) {
            *n *= 2;
            *lineptr = realloc(*lineptr, *n);
           if (*lineptr == NULL) {
                          printf("%s", *lineptr);

                return -1;
            }
            
        }*/

        c = (char)nread;
        (*lineptr)[len++] = c;

        if (c == '\n') {
            break;
        }
    }

    if (len == 0) {
        return -1;
    }

    (*lineptr)[len] = '\0';
    return len;
}
