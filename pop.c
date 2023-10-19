#include "monty.h"
/**
 * re_move - it removes the element
 * @hd: head
 * @c: counter
 */
void re_move(stack_t **hd, unsigned int c)
{
	stack_t *head;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(doc.fl);
		free(doc.content);
		free_s(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	*hd = head->next;
	free(head);
}
