#include <stdio.h>

int main()
{
	char fruit[] =  "Watermelon", "banana", "pear", "apple", "coconut", "grape", "blueberry";

	int x;

	for (x=0; x<7; x++)
	{
		puts(fruit[x]);
		putchar(*fruit[x]);
		putchar(**(fruit+x));


		return (0);
	}
}
