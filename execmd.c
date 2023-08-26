#include "main.h"

void execmd(char **argv){
    char *command = NULL, *actual_command = NULL, *f_command = NULL;

    if (argv){
        /* get the command */
        command = argv[0];
        f_command = argv[0];
        strcat(f_command, ".txt");

        /* generate the path to this command before passing it to execve */
        actual_command = get_location(command);

        /* execute the actual command with execve */
        if(strcmp(argv[0],"env")==0){
            envo();
        }
            else if(execve(actual_command, argv, NULL) == -1){
            execve(f_command, argv, NULL);
                perror("./shell");
        }

    }

}
