#include "main.h"

int main(int ac, char **argv){
        char *promp = "(simple_shell) $ ";
        printf("%s", promp);
        char *lineptr;
        size_t n = 0;
	ssize_t nchars_read;
        getline(&lineptr, &n, stdin);
        /* declaring void variables */
        (void)ac; (void)argv;

  	  while (1){
      printf("%s", promp);
      nchars_read = getline(&lineptr, &n, stdin);
      /* check if the getline function failed or reached EOF or user use CTRL + D */ 
        if (nchars_read == -1){
            printf("Exiting shell....\n");
            return (-1);
        }

      printf("%s\n", lineptr);

      /* free up allocated memory */
      free(lineptr);    
    }

        return (0);
}
