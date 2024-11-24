#include <unistd.h>
#include <stdio.h>

int _strlen(char *s);

/**
* main - main entry 
* @void : void input
* Return: int
*/

int main(void) 
{
	int length;
	char *buffer = "Hello World\n"; 
	
	length = _strlen(buffer);
	write(1,buffer,length);
	return (0);
	
}

int _strlen(char *s)
{
	int count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
