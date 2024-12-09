#include "main.h"

/**
 * main - main entry
 * @argc: no. of arguments
 * @argv : arguments array
 * Return : 0: if successful
 */

int main (int argc, char **argv)
{
	int fd, fdo;
	char *file_from, *file_to;
	
	if ((argc > 3) || (argc < 1))
	{	
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	inputFile = argv[1];
	outputFile = argv[2];
	fd = open(file_from, O_RDONLY, S_IRUSR | S_IRGRP | S_IROTH);
	
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",inputFile);
		exit (98);	
	}
	fdo = open(file_to, O_RDWR | O_TRUC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",outputfile);
		exit (99);
	}
}
