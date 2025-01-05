#include "monty.h"

/**
 * add- adds the top two elements of the stack.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (num_of_elements() > 1)
	{
		temp = (*stack)->next;
		temp->n = (*stack)->n + temp->n;
		_free1();
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
