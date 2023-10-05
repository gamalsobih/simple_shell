#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

void execmd(char **argv);
char *get_location(char *command);
void exitcmd(char **argv);
void envo();
char *_getline(char *buffer, int size, FILE *stream);
