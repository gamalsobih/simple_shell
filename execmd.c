#include "main.h"

void execmd(char **argv){
    char *command = NULL, *actual_command = NULL;

    if (argv){
        /* get the command */
        command = argv[0];

        /* generate the path to this command before passing it to execve */
        actual_command = get_location(command);

        /* execute the actual command with execve */
        if(strcmp(argv[0],"env")==0){
            free(command);
            free(actual_command);
            envo();
        }
            else if(execve(actual_command, argv, NULL) == -1){
                printf("gamal\n");
            perror("./shell");
        }

    }

}
