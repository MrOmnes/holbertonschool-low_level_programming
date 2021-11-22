#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fo;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fo = open(filename, "w");

		if (fo == -1)
			return (-1);
	}
	
	return(1);
}