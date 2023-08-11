#include "main.h"

int main(int ac, char **argv){
  char *prompt = "(Eshell) $ ";
  char *lineptr;
  size_t n = 0; 
  ssize_t nchars_read;
      printf("%s\n", "gamalwhile main ");

   /* declaring void variables */
  (void)ac; (void)argv;

    /* create an infinite loop */
    while (1){
            printf("%s\n", "gamalwhile");

      printf("%s", prompt);
      nchars_read = getline(&lineptr, &n, stdin);
      /* check if the getline function failed or reached EOF or user use CTRL + D */ 
        if (nchars_read == -1){
            printf("Exiting shell....\n");
           printf("%s\n", "gamalwhile r if ");
            return (-1);
        }

      printf("%s\n", lineptr);
      printf("%s\n", "gamalwhile after if ");
      /* free up allocated memory */
      free(lineptr);    
    }

  return (0);
}
