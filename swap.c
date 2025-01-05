#include "monty.h"

/**
 * swap-  swaps the top two elements of the stack.
 * @stack: pointer to the head
 * @line_number: the line to be printed
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (num_of_elements() > 1)
	{
		temp = (*stack)->next;

		if (temp->next != NULL)
			temp->next->prev = temp->prev;

		(*stack)->next = temp->next;
		temp->prev = (*stack)->prev;
		temp->next = *stack;
		(*stack)->prev = temp;
		global_vars.head = temp;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

/**
 * num_of_elements- checks the elements in a stack
 *
 * Return: size of the stack on success or 0 on failure
 */

int num_of_elements(void)
{
	int i;

	stack_t *temp = global_vars.head;

	if (temp == NULL)
		return (0);
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}

	return (i);
}
