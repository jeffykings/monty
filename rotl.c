#include "monty.h"

/**
 * rotl - The top element of the stack becomes the last one, and the second top
 * element of the stack becomes the first one
 * @stack: head of the stack
 * @line_number: the line we are working on
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *temp2;

	(void) line_number;

	temp2 = (*stack)->next;

	if ((*stack != NULL) && (num_of_elements() > 1))
	{
		temp = mv_pointer2_end();
		(*stack)->next->prev = (*stack)->prev;
		(*stack)->next = temp->next;
		temp->next = *stack;
		(*stack)->prev = temp;
		global_vars.head = temp2;
	}
}

/**
 * mv_pointer2_end- points to the end of the stack
 *
 * Return: the pointer at the end of stack or NULL for empty stack
 */

stack_t *mv_pointer2_end(void)
{
	stack_t *temp = global_vars.head;

	if (temp ==  NULL)
		return (NULL);

	while (temp->next)
		temp = temp->next;

	return (temp);
}
