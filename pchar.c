#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: Stack.
 * @line_number: Number of line
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int num = 0;

	if (!*stack || !stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		cleanStack(stack);
		exit(EXIT_FAILURE);
	}

	num = (*stack)->n;
	if (num < 0 || num > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		cleanStack(stack);
		exit(EXIT_FAILURE);
	}
	putchar(num);
	putchar(10);
}
