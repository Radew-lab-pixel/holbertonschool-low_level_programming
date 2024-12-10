#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{	
	int count = 0;
	char c = '$';
	write(1,&c,1);
	
	while (argc > 0) /* not end of line */
	{
		printf("%s", *argv);
		count++;
		argv++;
		argc--;
		printf(" ");
	}
	printf("\n");
	return (count);
}

