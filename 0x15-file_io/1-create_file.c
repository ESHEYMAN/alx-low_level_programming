#include "main.h"
#include <string.h>
/**
 * create_file - A function that create a file
 * @filename: name of the file
 * @text_content: file to be created
 * Return: 1 on sucess, -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int fn, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fn == -1 || -1)
		return (-1);

	close(fn);

	return (1);
}
