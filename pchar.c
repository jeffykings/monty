#include "monty.h"

/**
 * pcha-  prints the char at the top of the stack, followed by a new line.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
	{
		if (!((*stack)->n >= 0 && (*stack)->n <= 127))
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}
		printf("%c\n",  (*stack)->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
