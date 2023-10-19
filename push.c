#include "monty.h"
/**
 * push_to - push to stack
 * @hd: head
 * @count: counter
*/
void push_to(stack_t **hd, unsigned int count)
{
	int number, k = 0, f = 0;

	if (doc.arg)
	{
		if (doc.arg[0] == '-')
			k++;
		for (; doc.arg[k] != '\0'; k++)
		{
			if (doc.arg[k] > 57 || doc.arg[k] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(doc.fl);
			free(doc.content);
			free_s(*hd);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(doc.fl);
		free(doc.content);
		free_s(*hd);
		exit(EXIT_FAILURE);
	}
	number = atoi(doc.arg);
	if (doc.sign == 0)
		add_nod(hd, number);
	else
		que_add(hd, number);
}
