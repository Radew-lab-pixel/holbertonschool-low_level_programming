#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(void)
{
	char *cmd; /** user command **/
	int length = 0;

	pid_t pid;

	int status; /* status for wait */

	while (1)
	{
		printf("$ ");
			if (getline(&cmd, length, stdin))
			{	
				perror("issue with command\n");
			}

	}

}
