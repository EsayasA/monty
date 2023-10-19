#include "monty.h"
/**
 * display - it displays
 * @hd: head
 * @count:counter
*/
void display(stack_t **hd, unsigned int count)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(doc.fl);
		free(doc.content);
		free_s(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
