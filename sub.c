#include "monty.h"

/**
 * sub- subtracts the top element of the stack from the second top element
 * of the stack.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (num_of_elements() > 1)
	{
		temp = (*stack)->next;
		temp->n = temp->n - (*stack)->n;
		_free1();
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
