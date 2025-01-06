#include "monty.h"

/**
 * rotr- The last element of the stack becomes the top element of the stack
 * @stack: head of the stack
 * @line_number: the line we are working on
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) line_number;

	if ((*stack != NULL) && (num_of_elements() > 1))
	{
		temp = mv_pointer2_end();
		temp->prev->next = temp->next;
		temp->prev = (*stack)->prev;
		temp->next = *stack;
		(*stack)->prev = temp;
	}
}
