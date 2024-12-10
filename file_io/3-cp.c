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
	char *file_from, *file_to, buffer[1024];
	ssize_t bytesRead, bytesWritten, fclose;
	
	if ((argc > 3) || (argc < 1))
	{	
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = argv[1];
	file_to  = argv[2];
	/* open file from */
	fd = open(file_from, O_RDONLY, S_IRUSR | S_IRGRP | S_IROTH);
	
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd);
		exit(98);
	}
	/* open file to */
	fdo = open(file_to, O_RDWR | O_TRUC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd);
		close(fdo);
		exit (99);
	}
	/* read input file */
	bytesRead = read(fd, buffer, sizeof(buffer));
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close (fd);
		close (fdo);
		exit (98);
	}
	while (bytesRead > 0 ) /*bytesRead from file > 0 */
	{	/* write to file to */
		bytesWritten = write(fdo, buffer, sizeof(buffer));

		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close (fd);
			close (fdo);
			exit (99);
		}
		bytesRead = read(fd, buffer, sizeof(buffer));
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close(fd);
			exit(98);
		}	
	}
	close(fd);
	close(fdo);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",fd);
		exit (100);
	}
	if (fdo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo);
		exit (100);
	}
	return (0);
}	

