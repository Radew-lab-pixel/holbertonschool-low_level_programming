#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *env[] = {"PATH=/usr/bin:/bin", "USER=custom_user",  NULL};	

    printf("Before execve\n");
    if (execve(argv[0], argv, env) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
