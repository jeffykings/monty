#include "monty.h"

/**
 * push -  pushes a value to the stack
 * @stack: the stack
 * @line_number: line working on
 *
 * Return: nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_free();
		exit(EXIT_FAILURE);
	}
	if (global_vars.value != NULL && !is_integer(global_vars.value))
	{
		printf("%s", global_vars.value);
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		(*stack)->n = atoi(global_vars.value);

	if (global_vars.head != NULL)
		global_vars.head->prev = *stack;

	(*stack)->prev = NULL;
	(*stack)->next = global_vars.head;
	global_vars.head = *stack;
}

/**
 * is_integer  - checks if a string is an integer
 * @str: the string to be checked
 *
 * Return: True if digit else false
 */

bool is_integer(const char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (false);
	}

	if (*str == '-' || *str == '+')
		str++;

	while (*str)
	{
		if (!isdigit(*str) && *str != '\n')
		{
			return (false);
		}

		str++;
	}
	return (true);
}
