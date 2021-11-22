#include "main.h"

/**
* create_file - Créer un fichier et alloue du contenu
*
*@filename: Name of the file
*@text_content: Contenu du fichier
*Return: 1 if success -1 if not
*/

int create_file(const char *filename, char *text_content)
{
	int fo;
	int testwrite;
	unsigned long int sizetext = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_CREAT);

	if (fo == -1)
		return (-1);

	if (text_content != NULL)
	{
		testwrite = write(fo, text_content, sizetext);

		if (testwrite == -1)
			return (-1);
	}

	close(fo);
	return (1);
}
