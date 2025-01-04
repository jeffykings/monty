#include "monty.h"

/**
 * pint-  prints the value at the top of the stack, followed by a new line
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
		printf("%d\n",  (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty ", line_number);
		exit(EXIT_FAILURE);
	}
}
