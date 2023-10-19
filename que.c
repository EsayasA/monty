#include "monty.h"
/**
 * que_fun - finds the top element
 * @hd: head
 * @count:counter
 */
void que_fun(stack_t **hd, unsigned int count)
{
	(void)hd;
	(void)count;
	doc.sign = 1;
}

/**
 * que_add - adds node
 * @number:integer
 * @hd: head
 */
void que_add(stack_t **hd, int number)
{
	stack_t *nod, *p;

	p = *hd;
	nod = malloc(sizeof(stack_t));
	if (nod == NULL)
	{
		printf("Error\n");
	}
	nod->n = number;
	nod->next = NULL;
	if (p)
	{
		while (p->next)
			p = p->next;
	}
	if (!p)
	{
		*hd = nod;
		nod->prev = NULL;
	}
	else
	{
		p->next = nod;
		nod->prev = p;
	}
}
