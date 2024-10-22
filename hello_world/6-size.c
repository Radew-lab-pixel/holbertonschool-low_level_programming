#include <stdio.h>

/**
 * main-display size of data type,
 *
 * Return: 0 Always
 */
int main(void)

{
	char a; 
	int b;
	long int c;
	long long int d;
	float e;
	
	printf("Size of a char : %d bytes (s)\n", sizeof(a));
	printf("Size of a int : %d bytes (s)\n", sizeof(b));
	printf("Size of a long int : %d bytes (s)\n", sizeof(c));
	printf("Size of a long long int : %d bytes (s)\n", sizeof(d));
	printf("Size of a float : %d bytes (s)\n", sizeof(e));
	return (0);
}
