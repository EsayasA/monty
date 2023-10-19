#include "monty.h"
doc_t doc = {NULL, NULL, NULL, 0};
/**
* main - main function
* @argc: number of argument
* @argv: argu
* Return:zero
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *fl;
	size_t s = 0;
	ssize_t rd = 1;
	stack_t *st = NULL;
	unsigned int c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fl = fopen(argv[1], "r");
	doc.fl = fl;
	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rd > 0)
	{
		content = NULL;
		rd = getline(&content, &s, fl);
		doc.content = content;
		c++;
		if (rd > 0)
		{
			execute(content, &st, c, fl);
		}
		free(content);
	}
	free_s(st);
	fclose(fl);
return (0);
}
