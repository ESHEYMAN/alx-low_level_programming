#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: numbers of letters printed, fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t b_read, b_write;

	if (filename == NUll)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	b_read = fread(buffer, letters, file);

	b_write = fwrite(buffer, b_read, stdout);

	fclose(file);

	free(buffer);

	return (b_read);
}
