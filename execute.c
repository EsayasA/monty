#include "monty.h"
/**
* execute - executer
* @st: stack
* @c: counter
* @fl: file
* @content: content
* Return:nothing to return
*/
int execute(char *content, stack_t **st, unsigned int c, FILE *fl)
{
	instruction_t opst[] = {
				{"push", push_to},
				{"queue", que_fun},
				{"pall", pa_ll},
				{"pint", display},
				{"pop", re_move},
				{"swap", _swap},
				{"add", _sum},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *pp;

	pp = strtok(content, " \n\t");
	if (pp && pp[0] == '#')
		return (0);
	doc.arg = strtok(NULL, " \n\t");
	while (opst[k].opcode && pp)
	{
		if (strcmp(pp, opst[k].opcode) == 0)
		{	opst[k].f(st, c);
			return (0);
		}
	k++;
	}
	if (pp && opst[k].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", c, pp);
		fclose(fl);
		free(content);
		free_s(*st);
		exit(EXIT_FAILURE); }
	return (1);
}
