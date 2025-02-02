#include "monty.h"

/**
 * get_opcode - gets the opcode
 *
 * @line: each line in the file
 * @line_number: indicates the line we are currently in
 *
 * Return: 1 on success
 */

int get_opcode(char *line, int line_number)
{

	int i;

	instruction_t func_list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"#", comment},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	stack_t *dlinked_lst = global_vars.head;

	char *opcode1 = strtok(line, " ");

	if (opcode1 == NULL || *opcode1 == '\n')
		return (0);

	global_vars.value = strtok(NULL, " ");

	if (strcmp(opcode1, "queue") == 0)
	{
		global_vars.op_format_set = 1;
		return (1);
	}

	if (strcmp(opcode1, "stack") == 0)
	{
		global_vars.op_format_set = 0;
		return (1);
	}

	if (*opcode1 == '#')
	{
		func_list[11].f(&dlinked_lst, line_number);
		return (1);
	}

	for (i = 0; func_list[i].opcode != NULL;  i++)
	{
		if (strcmp(func_list[i].opcode, opcode1) == 0)
		{
			func_list[i].f(&dlinked_lst, line_number);
			return (1);
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode1);
	exit(EXIT_FAILURE);
}
