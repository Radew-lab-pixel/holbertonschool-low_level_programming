#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - function to append text to only existing file
 *
 * @filename : file name of file
 * @text_content : content to be appended
 * Return: 1 if successful else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /*file identifier*/
	char *text = text_content;
	int bytesWritten;

	fd = open(filename, O_WRONLY | O_APPEND);

	if ((fd == -1) | (filename == NULL))
	{
		return (-1);
	}
	if (text == NULL)
	{
		text = "";
	}
	bytesWritten = write(fd, text, _strlen(text));
	if (bytesWritten == -1)
	{
		return (-1);
	}
	return (1);
}

/**
 * _strlen - function to return length of string
 *
 * @s : string input
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
