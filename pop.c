#include "monty.h"

/**
 * pop-  removes the top element of the stack.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
	{
		_free1();
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
