#include "main.h"

/**
*read_textfile - Read the content of a file
*
*@filename: name of the file
*@letters: size of the file
*Return: number of char printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	int testread;
	char *buffer = malloc(letters * (sizeof(char)));

	if (buffer == NULL)
		return (0);

	fo = open(filename, O_RDONLY);

	if (fo == -1)
		return (0);


	testread = read(fo, buffer, letters);

	if (testread == -1)
		return (0);

	testread = write(1, buffer, testread);

	close(fo);
	free(buffer);

	return (testread);
}
