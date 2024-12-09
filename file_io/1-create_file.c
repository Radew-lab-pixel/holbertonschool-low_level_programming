#include "main.h"

int _strlen(char *s);

/**
 * create_file - function to create a file
 *
 * @filename : name of the file to be created
 * @text_content : the content of the file
 * Return: 1 (succesful) else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, byteWritten;
	char *text = text_content; /* local char * pointer */
	

	fd = open(filename, O_RDWR|O_APPEND);
	
	if (fd = -1)
	{
		return (-1);
	}
	bytesWritten = write(fd, text, _strlen(text)); 
}

int _strlen(char *s)
{

}


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
