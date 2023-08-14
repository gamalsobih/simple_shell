 #include "main.h"

int main(int ac, char **argv){
    char *prompt = "(Eshell) $ ";
    char *lineptr = NULL, *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
    const char *delim = " \n"
    lineptr_copy = malloc(sizeof(char) * nchars_read);
    if (lineptr_copy== NULL){
        perror("tsh: memory allocation error");
        return (-1);
    }

    /* declaring void variables */
    (void)ac; (void)argv;

    /* Create a loop for the shell's prompt */
    while (1) {
        printf("%s", prompt);
        nchars_read = getline(&lineptr, &n, stdin);
        strcpy(lineptr_copy, lineptr);
        /* check if the getline function failed or reached EOF or user use CTRL + D */ 
        if (nchars_read == -1){
            printf("Exiting shell....\n");
            return (-1);
        }

        printf("%s\n", lineptr);
        printf("%s%s\n", lineptr_copy ,"copy");

        /* free up allocated memory */ 
        free(lineptr);
    } 


    return (0);
}
