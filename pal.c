#include "monty.h"
/**
 * pa_ll - pall
 * @hd: head
 * @count: not used
 */
void pa_ll(stack_t **hd, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
