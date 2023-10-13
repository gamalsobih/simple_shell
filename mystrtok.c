#include "main.h"

char *my_strtok(char *str, const char *delim) {
  // Declare a static variable to store the current position in the string
  static char *pos;
  // Declare a variable to store the pointer to the token
  char *token;
  // If str is not NULL, set pos to str
  if (str != NULL) {
    pos = str;
  }
  // If pos is NULL, return NULL
  if (pos == NULL) {
    return NULL;
  }
  // Skip any leading delimiters by using strspn
  pos += strspn(pos, delim);
  // If pos points to a null character, return NULL
  if (*pos == '\0') {
    return NULL;
  }
  // Set token to pos
  token = pos;
  // Find the next delimiter by using strpbrk
  pos = strpbrk(token, delim);
  // If pos is not NULL, replace the delimiter with a null character and increment pos
  if (pos != NULL) {
    *pos = '\0';
    pos++;
  }
  // Return token
  return token;
}

