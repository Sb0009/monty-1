#include "monty.h"
/**
 * _pchar - function that print a char
 * @stack: the list
 * @line_number: the number of line
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty", line_number);
		error = 1;
		return;
	}
	if ((*stack)->n > 127 || (*stack)->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range", line_number);
		error = 1;
		return;
	}
	putchar((*stack)->n);
	putchar('\n');
}