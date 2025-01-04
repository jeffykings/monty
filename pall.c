#include "monty.h"

/**
 * pall - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: the stack
 * @line_number: the line we are in
 * Return: nothing always
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)   line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
