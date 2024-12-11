#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    	char *cmd = NULL;        /* initialize cmd as NULL */
    	size_t length = 0;       /* size_t` for the length */
    	ssize_t nread;           /* ssize_t` to capture return value from getline */
	/* char *env[] = {"PATH = ../bin", "USER = custom_user", NULL}; */
	char *path = "/bin";

    pid_t pid;
    int status; /* status for wait */

    while (1)
    {
        printf("$ ");  /* print prompt */

        /* Get user input */
        nread = getline(&cmd, &length, stdin);

        if (nread == -1) {
            /* Handle error or EOF */
            if (feof(stdin)) {
                /* EOF (Ctrl-D) */
                printf("\nExiting...\n");
                break;
            } else {
                perror("getline failed");
                continue;
            }
        }

        /* Remove newline character at the end if present */
        if (cmd[nread - 1] == '\n') {
            cmd[nread - 1] = '\0';
        }

        /* Handle empty command (just pressing enter) */
        if (strlen(cmd) == 0) {
            continue;
        }

        /* Fork and execute the command */
        pid = fork();
        if (pid == -1) {
            perror("Fork failed");
            continue;

        } else if (pid == 0) 
	{
            /* Child process - execute the command */
            char *args[] = {cmd, NULL};  /* assuming cmd is a simple command with no arguments */
            /*if (execve(path, args, NULL) == -1)  or use execvp(cmd, args) */
	    if (execvp(cmd, args) == -1)
	    {
                perror("Exec failed");
                exit(EXIT_FAILURE);
            }
        } else {
            /* Parent process - wait for the child */
            wait(&status);
        }
    }

    /* Free allocated memory for cmd */
    free(cmd);

    return 0;
}
