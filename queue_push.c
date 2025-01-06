#include "monty.h"

/**
 * push -  pushes a value to the stack
 * @stack: the stack
 * @line_number: line working on
 *
 * Return: nothing
 */

void queue_push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_free();
		exit(EXIT_FAILURE);
	}
	if (global_vars.value == NULL || !is_integer(global_vars.value))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		(*stack)->n = atoi(global_vars.value);

	temp = mv_pointer2_end();

	if (global_vars.head)
	{
		(*stack)->prev = temp;
		temp->next = *stack;
	}
	else
	{
		(*stack)->prev = NULL;
		global_vars.head = *stack;
	}

	(*stack)->next = NULL;
}
