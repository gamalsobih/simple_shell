#include <stdio.h>
#include <stdlib.h>

/* A function that reads an entire line from a stream
 Parameters: lineptr - a pointer to a buffer that will store the line
             n - a pointer to a size variable that will hold the buffer size
             stream - a file pointer that will provide the input stream
 Returns: the number of characters read, or -1 if an error occurs or the end of file is reached */
int _getline(char **lineptr, size_t *n, FILE *stream) {
    /* Check for invalid parameters*/
     size_t count = 0;

    if (lineptr == NULL || n == NULL || stream == NULL) {
        return -1;
    }

    /* Initialize the buffer and the size if they are NULL or zero*/
    if (*lineptr == NULL || *n == 0) {
        *lineptr = malloc(128); // Allocate an initial buffer of 128 bytes
        if (*lineptr == NULL) {
            return -1; /* Return -1 if memory allocation fails*/
        }
        *n = 128; /* Set the buffer size to 128*/
    }

    /* Initialize a counter for the number of characters read*/

    /* Loop until a newline character or the end of file is encountered*/
    while (1) {
        /* Get the next character from the stream/
        int c = getc(stream);

        /* Check for end of file or error*/
        if (c == EOF) {
            /* If no characters have been read, return -1*/
            if (count == 0) {
                return -1;
            }
            /* Otherwise, break the loop and add a null terminator to the buffer*/
            else {
                break;
            }
        }

        /* Check if the buffer is full and needs to be resized*/
        if (count == *n - 1) {
            /* Double the buffer size and reallocate memory*/
            *n *= 2;
            *lineptr = realloc(*lineptr, *n);
            if (*lineptr == NULL) {
                return -1; /* Return -1 if memory allocation fails*/
            }
        }

        /* Store the character in the buffer and increment the counter*/
        (*lineptr)[count] = c;
        count++;

        /* Check for newline character and break the loop if found*/
        if (c == '\n') {
            break;
        }
    }

    /*Add a null terminator to the buffer*/
    (*lineptr)[count] = '\0';

    /* Return the number of characters read*/
    return count;
}

