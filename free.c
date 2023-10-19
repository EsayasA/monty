#include "monty.h"
/**
* free_s - frees a list
* @hd: head
*/
void free_s(stack_t *hd)
{
	stack_t *p;

	p = hd;
	while (hd)
	{
		p = hd->next;
		free(hd);
		hd = p;
	}
}
