#include "main.h"
#include <stdio.h>

/**
 * main - main entry
 * @argc: no. of arguments
 * @argv : arguments array
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int fd, fdo;
	char *file_from, *file_to, buffer[1024];
	ssize_t bytesRead, bytesWritten, fclose;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to  = argv[2];
	fd = open(file_from, O_RDONLY, S_IRUSR | S_IRGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
/* fdo = open(file_to, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH); */
	fdo = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fdo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	bytesRead = read(fd, buffer, sizeof(buffer)); /* read input file */
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while (bytesRead > 0) /*bytesRead from file > 0 */
	{
		bytesWritten = write(fdo, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		bytesRead = read(fd, buffer, bytesRead);
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	fclose = close(fd);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fclose = close(fdo);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo);
		exit(100);
	}
	return (0);
}
