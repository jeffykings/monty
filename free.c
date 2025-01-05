#include "monty.h"

/**
 * _free - free all memory after use
 */

void _free(void)
{
	stack_t *temp;

	while (global_vars.head != NULL)
	{
		temp = global_vars.head;
		global_vars.head = global_vars.head->next;
		free(temp);
	}
}

/**
 * _free1 - free one memory
 */

void _free1(void)
{
	stack_t *temp;

	if (global_vars.head != NULL)
	{
		temp = global_vars.head;
		global_vars.head = global_vars.head->next;
		free(temp);
	}
}
