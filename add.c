#include "monty.h"
/**
 * _sum - it sums two elements.
 * @hd: head pointor
 * @count: counter of line_number
 */
void _sum(stack_t **hd, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(doc.fl);
		free(doc.content);
		free_s(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	pt = head->n + head->next->n;
	head->next->n = pt;
	*hd = head->next;
	free(head);
}
