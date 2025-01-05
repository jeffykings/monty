#include "monty.h"

/**
 * div-  divides the second top element of the stack by the top element
 * of the stack.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (num_of_elements() > 1)
	{
		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		temp = (*stack)->next;
		temp->n = temp->n / (*stack)->n;
		_free1();
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
