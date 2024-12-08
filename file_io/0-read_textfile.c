#include "main.h"

/**
 * read_textfile - function reads a text file and
 * prints it to the POSIX output
 *
 * @filename : input text file
 * @letters : no. of letters to read
 * Return: size of the letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text; /* text in the file */
	ssize_t bytesRead, bytesWrite;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/*text =(char *)malloc(sizeof(letters));  dynamic memory allocation */
	text = (char *)malloc(letters);

	if (text == NULL)
	{
		free(text);
		return (0);
	}
	bytesRead = read(fd, text, letters); /*read from file */

	/* write to file to obtain actual byteswritten due to checker */
	/*bytesWrite = write(fd, text, letters); */
	bytesWrite = write(STDOUT_FILENO, text, bytesRead);
	free(text);
	close(fd);
	return (bytesWrite);
}
