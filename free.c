#include "monty.h"

/**
 * _free - free memory after use
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
