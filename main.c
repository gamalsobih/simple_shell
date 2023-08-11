#include "main.h"

int main(int ac, char **argv){
	char *promp = "(simple_shell) $ ";
	printf("%s", promp);
	char *lineptr;
	size_t n = 0; 

	getline(&lineptr, &n, stdin);
	/* declaring void variables */
	(void)ac; (void)argv;

	printf("%s\n", lineptr);
	free(lineptr);

	return (0);
}

