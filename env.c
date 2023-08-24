#include"main.h"

void env_shell()
{
char **env = environ;
while (*env) {
    printf("%s\n", *env);
    env++;
}

// Exit the program

}
