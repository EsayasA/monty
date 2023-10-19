#include "monty.h"
/**
 * _swap - swaps elements of the stack
 * @hd: head pointor
 * @count: it counts the number
*/
void _swap(stack_t **hd, unsigned int count)
{
	stack_t *head;
	int size = 0, pt;

	head = *hd;
	while (head)
	{
		head = head->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(doc.fl);
		free(doc.content);
		free_s(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	pt = head->n;
	head->n = head->next->n;
	head->next->n = pt;
}
