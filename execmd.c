#include "main.h"

void execmd(char **argv){
    char *command = NULL;

    if (argv){
        /* get the command */
        command = argv[0];

        /* execute the command with execve */
        if (execve(command, argv, NULL) == -1){
            perror("Error:");
        };
    }

}
Let's compile our code and test it out. Since, we have added a new file, we will need to include that file in our command for compilation.


COPY

COPY
gcc -Wall -Wextra -Werror -pedantic main.c execmd.c  -o eshell
Here is a screenshot of the testing I did on mine.

image.png

From my test cases, I used the ls command and there are three important things to take note of (which will influence how we proceed with the project).

I get an error (no such file or directory) when I use just the command ls.
It works perfectly when you pass the full path of the command.
When the execmd() executes successfully, it breaks the loop and exists from our shell.
image.png

The inference therefore is that for our shell the work properly, users must always enter the full path of the command they want. What kind of shell does that?

We need to fix that because no body will be willing to use such a shell. Your users cannot memorize the path for all the commands they will bee using.

Do you remember the note I gave about the use of execve from its man page? That is what is responsible for the third point listed. After the execution of a command, we don't want to break out of the loop but rather show a new prompt for users to be able to enter new commands continuously. We will tackle this later.

For now, you can play with your simple shell. In the next part, I will cover how to generate the full path for every command that your users enter on the shell. For the time being, if you want to know the exact path of any bash command, run which <command name> on the bash terminal.

For example:


COPY

COPY
>>> which ls
/usr/bin/ls

>>> which echo
/usr/bin/echo
Changes that I had to make to the codes from previous parts:
To correct some issues with segmentation fault and double free detected error, I made the following changes to our previous code base. a. Remove the free() from the while loop and place it outside just before the return statement. b. Added free(lineptr_copy)

You can check the previous posts out with the links below:

Part 1
Building a simple shell in C - Part 1

A basic shell that prints a prompt, waits for user to enter command and prints what they entered on the next line

blog.ehoneahobed.com

Part 2
Building a simple shell in C - Part 2

Add parsing functionality to our simple shell from part 1

blog.ehoneahobed.com

Conclusion
Gradually, we are getting close to building a functional miniature version of the Bash shell. All codes are available on GitHub for those who would need it and those who make want to contribute to it as well.

If you're like the content and would love to support me, then show some love by following me on this blog and also subs
