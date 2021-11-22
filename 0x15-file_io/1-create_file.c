#include "main.h"


/**
 * _strlen - Compte le nombre de caractere d'une chaine
 *
 * @s: variable
 *
 * Return: (i)
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}



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
	unsigned long int sizetext = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		fo = open(filename, O_WRONLY);
	}
	else
	{
		fo = open(filename, O_WRONLY | O_CREAT);
		chmod(filename, 00600);
	}

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
