#include <stdio.h>
#include <stdlib.h>

/*int main(int argc, char **argv)*/
int main(void)
{	
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *env[] = {"PATH = /usr/bin", "USER = custom_user", NULL);

	execve("/bin/ls", argvs. env); 	
}
