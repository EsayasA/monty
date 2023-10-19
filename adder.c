#include "monty.h"
/**
 * add_nod - to add node
 * @hd: head
 * @number:integer
*/
void add_nod(stack_t **hd, int number)
{

	stack_t *nod, *p;

	p = *hd;
	nod = malloc(sizeof(stack_t));
	if (nod == NULL)
	{ printf("Error\n");
		exit(0);
	}
	if (p)
		p->prev = nod;
	nod->n = number;
	nod->next = *hd;
	nod->prev = NULL;
	*hd = nod;
}
