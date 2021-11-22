#include "main.h"

int create_file(const char *filename, char *text_content)
{
	FILE *fo;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fo = open(filename, "w");
	}
	
}