#include "main.h"
#include <stdio.h>

int _strlen(const char *s);
int create_file1(const char *filename, char *text_content);

/**
 * create_file - function to create a file
 *
 * @filename : name of the file to be created
 * @text_content : the content of the file
 * Return: 1 (succesful) else -1
 */

int create_file1(const char *filename, char *text_content)
{
	int fd, count;
	
	char *s = text_content;
	
	fd = open(filename, O_RDWR|O_CREAT |O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	count = _strlen(text_content);
	printf("Length : %d\n", count);
	printf("content : %s\n", s);
	return (1);
}

int create_file(const char *filename, char *text_content)
{
	int fd, count;
	/* size_t bytesWritten; */
	char *text = text_content;  /*local char * pointer */
	
	/*fd = open(filename, O_RDWR|O_APPEND|O_CREAT, S_IRUSR | S_IWUSR); */
	fd = open(filename,  O_WRONLY| O_TRUNC, S_IRUSR | S_IWUSR);

	/*fd = open(filename,  O_WRONLY| O_TRUNC| O_CREAT, 0600); */
	if ((fd == -1) || (filename == NULL))
	{
		return (-1);
	}
	count = _strlen(text);
	printf("Text length : %d\n",count);
	write(fd, text_content, _strlen(text)); /* write() */
	/* if (bytesWritten = 0) */
	/*	return (-1); */
	close(fd);
	return (1);
}

int _strlen(const char *s)
{
	int count = 0;
	if (s == NULL)
	{
		return (0);
	}
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
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
