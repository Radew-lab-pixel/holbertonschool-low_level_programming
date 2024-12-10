#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int count = 1;

	if (argc <= 0)
	{
		printf("Error Empty input\n");
		return (1);
	}

	while (count < argc)
	{	
		printf("%s ", argv[count]);
		count++;
	}
	printf("\n");
	return (0);
}
