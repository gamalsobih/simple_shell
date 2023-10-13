#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#define BUFSIZE 1024


void execmd(char **argv);
char *get_location(char *command);
void exitcmd(char **argv);
void envo();
ssize_t _getline(char **buffer, size_t *size, FILE *stream);
char *_strtok(char *str, const char *delim);
