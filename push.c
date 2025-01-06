#include "monty.h"

/**
 * push -  calls stack_push or queue_push
 * @stack: the stack
 * @line_number: line working on
 *
 * Return: nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	if (global_vars.op_format_set == 0)
		stack_push(stack, line_number);
	else
		queue_push(stack, line_number);
}
