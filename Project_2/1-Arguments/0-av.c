#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{	
	char **temp = argv;
	
	if (*temp == NULL)
	{
		printf("Eror\n");
		return (-1);
	}
	while (*temp != NULL)
	{
		printf("%s\n", *temp);
		temp++;
	}	
	return (0);
}
