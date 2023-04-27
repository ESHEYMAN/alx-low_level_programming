#include "main.h"
#include <string.h>
/**
 * create_file - A function that create a file
 * @filename: name of the file
 * @text_content: file to be created
 * Return: 1 on sucess, -1 if error
 */
int create_file(const char *filename, char *text_content);
{
int fn;
int _letter;
int _write;

if (filename == NULL)
	return (-1);

fn = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
if (fn == -1)
return (-1);

if (text_content != NULL)
{
for (_letter = 0; text_content[_letter]; _letter++)
}

_write = write(fn, text_content, _letter);
if (_write == -1)
return (-1);

close(fn);
return (1);
