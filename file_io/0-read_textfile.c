#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text; /* text in the file */
	ssize_t bytesRead, bytesWrite;

	fd = open (filename, O-RDONLY);
	if ((fd == -1) || (fd == NULL))
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
	byteRead = read(fd, text, letters); /*read from file */

	bytesWrite = write(	

}
