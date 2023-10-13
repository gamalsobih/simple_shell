#include "main.h"

int main(int ac, char **argv){
    char *prompt = "$";
    char *lineptr = NULL, *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
   /* const char *delim = " \n";*/
    int num_tokens = 0;
    char *token;
    int i;
    pid_t pid;
    int status;
    /* declaring void variables */
    (void)ac;

    /* Create a loop for the shell's prompt */
      while (1) {
    if (isatty(STDIN_FILENO)==1){
       printf("%s", prompt);}
       nchars_read = getline(&lineptr, &n, stdin);
        /* check if the getline function failed or reached EOF or user use CTRL + D */ 
        if (nchars_read == -1){
            
            exit(0);
                /* free up allocated memor*/	
    free(lineptr_copy);
    free(lineptr);
    for (i = 0; token != NULL; i++){
    free(argv[i]);
    }

    free(argv);

            return (-1);
        }

        /* allocate space for a copy of the lineptr */
        lineptr_copy = malloc(sizeof(char) * nchars_read);
        if (lineptr_copy== NULL){
            perror("tsh: memory allocation error");
            return (-1);
        }
        /* copy lineptr to lineptr_copy */
        strcpy(lineptr_copy, lineptr);

        /********** split the string (lineptr) into an array of words ********/
        /* calculate the total number of tokens */
        token = strtok(lineptr, " \n");

        while (token != NULL){
            num_tokens++;
            token = strtok(NULL, " \n");
        }
        num_tokens++;

        /* Allocate space to hold the array of strings */
        argv = malloc(sizeof(char *) * num_tokens);

        /* Store each token in the argv array */
        token = strtok(lineptr_copy, " \n");

        for (i = 0; token != NULL; i++){
            argv[i] = strdup(token);
            token = _strtok(NULL, " \n");
        }
        argv[i] = NULL;

        /* execute the command */
        
          if (strcmp(argv[0],"exit")==0)
        {
            exitcmd(argv);
        }

         pid = fork();
         if (pid == 0) {
             execmd(argv);
             exit(0);
         } else if (pid < 0) {
             perror("fork failed");
             exit(1);
         } else {
             wait(&status);
         }

    } 


    /* free up allocated memor*/	
    free(lineptr_copy);
    free(lineptr);
    for (i = 0; token != NULL; i++){
    free(argv[i]);
    }

    free(argv);
    return (0);
      }
