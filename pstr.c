#include "monty.h"

/**
 * pstr-  prints the char at the top of the stack, followed by a new line.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	temp = *stack;

	while (temp && temp->n != 0 && ((*stack)->n >= 0 && (*stack)->n <= 127))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}

	printf("\n");
}
