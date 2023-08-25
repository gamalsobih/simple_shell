#include "main.h"
void exitcmd(char **argv){
        int status;

        if (argv[1]){
            status =atoi(argv[1]);
    free(argv[0]);
    free(argv[1]);
    free(argv);
    exit(status);
        }else{
    free(argv[0]);
    free(argv[1]);
    free(argv);

        exit(0);
        }
    }
