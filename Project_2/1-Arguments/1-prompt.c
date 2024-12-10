#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
    char *lineptr = NULL;  
    size_t length = 0;     
    ssize_t charRead;   

    printf("$");

    charRead = getline(&lineptr, &length, stdin);

    if (charRead == -1)
    {
    	dprintf(STDERR_FILENO, "Error reading");
        free(lineptr);
	return 1;
    }
    printf("\n %s",lineptr);
    free(lineptr);
    return (0);
}

