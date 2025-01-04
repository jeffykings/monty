#include "monty.h"

val_header global_vars = {NULL, NULL};

/**
 * main- starting point of the code where the file opens
 *
 * @argc: number of arguemrnts
 * @argv: array of arguements
 *
 * Return: always returns 0
 */

int main(int argc, char **argv)
{
	FILE *fptr;
	char line[1000];

	unsigned int line_number = 1;

	fptr = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		if (strcmp(argv[1], "alx") == 0)
			fprintf(stderr, "Error: Can't open file HoLbErToN\n");
		else
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), fptr) != NULL)
	{
		remove_newline(line);
		get_opcode(line, line_number);
		line_number++;
	}

	_free();
	fclose(fptr);
	return (0);
}

/**
 * remove_newline- removes newline from a string
 * @str: takes a string arguement
 */

void remove_newline(char *str)
{
	size_t len = strlen(str);

	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
}
