#include "monty.h"

/**
 * _pstr - Print a string.
 * @stack: stack
 * @line_number: Number of line
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	(void)counter;

	h = *stack;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
