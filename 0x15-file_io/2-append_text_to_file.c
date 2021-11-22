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
* append_text_to_file - Ajoute du texte à la fin d'un fichier
*
*@filename: Nom du fichier
*@text_content: Contenu à ajouter au fichier
*Return: 1 if success -1 if not
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int testwrite;
	int sizetext = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		fo = open(filename, O_WRONLY | O_APPEND);

		if (fo == -1)
			return (-1);

		if (text_content == NULL)
			return (1);

		testwrite = write(fo, text_content, sizetext);

		if (testwrite == -1)
			return (-1);
	}
	else
	{
		return (-1);
	}

	close(fo);
	return (1);

}
