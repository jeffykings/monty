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
	instruction_t func_list[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};


	stack_t *dlinked_lst = global_vars.head;
	int i = 0;

	char *opcode1 = strtok(line, " ");
	if (opcode1 == NULL)
		return (1);

	global_vars.value = strtok(NULL, " ");

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
