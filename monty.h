#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct val_head - opcode and its function
 * @head: pointer to the head of the stack
 * @value: value to be pushed to the stack
 */


typedef struct val_head
{
	stack_t *head;
	char *value;
} val_header;

extern val_header  global_vars;

void remove_newline(char *str);
void _free(void);
int get_opcode(char *line, int line_number);
void pall(stack_t **stack, unsigned int line_number);
bool is_integer(const char *str);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void _free1(void);
void swap(stack_t **stack, unsigned int line_number);
int num_of_elements(void);

#endif
