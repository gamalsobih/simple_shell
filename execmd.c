#include "main.h"

void execmd(char **argv)
{
    char *command = NULL, *actual_command = NULL;

    if (strcmp(argv[0],"exit")!=0){
        /* get the command */
        command = argv[0];
        /* generate the path to this command before passing it to execve */
        actual_command = get_location(command);

        /* execute the actual command with execve */
        if (execve(actual_command, argv, NULL) == -1){
            perror("Error:");
        }
    }
    if (strcmp(argv[0],"exit")==0)
    {
        printf("%s","exit");
    }

}

