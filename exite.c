#include "main.h"
void exitcmd(char **argv){
        int status,

        if (argv[1]){
            status =atoi(argv[1]);
            exit(status);
        }else{
        exit(0);
        }
    }
