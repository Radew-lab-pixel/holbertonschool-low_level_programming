#include "shell.h"


int _execvp(char *file, char *argv[])
{	
	char *path_env, *path_copy, *dir;
	char path[125];

	path_env = getenv("PATH");
	if (!path_env)
	{
		perror("Error in environment variable\n");
		return (-1);
	}

	path_copy = strdup(path_env);
	if (!path_copy)
	{
		perror("Issue with path_copy\n");
		return (-1);
	}

	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
		sprintf(path, "%s%s", dir, file);
		if (access(path, X_OK) == 0)
		{
			if (execve(path, argv, environ) == -1)
			{
				perror("Issue with execve\n");
				free(path_copy);
			}
		}	
		dir = strtok(NULL, ":");
	}
	return (0);

}
