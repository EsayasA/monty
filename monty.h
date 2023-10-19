#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct doc_s - content, fl
 * @arg: argu
 * @fl:file
 * @content: content
 * @sign: flag
 * Description:value
 */
typedef struct doc_s
{
	char *arg;
	FILE *fl;
	char *content;
	int sign;
}  doc_t;
extern doc_t doc;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void free_s(stack_t *hd);
void push_to(stack_t **hd, unsigned int count);
int execute(char *cont, stack_t **stack, unsigned int count, FILE *fl);
void add_nod(stack_t **hd, int number);
void que_fun(stack_t **hd, unsigned int count);
void que_add(stack_t **hd, int number);
void pa_ll(stack_t **hd, unsigned int count);
void display(stack_t **hd, unsigned int count);
void re_move(stack_t **hd, unsigned int c);
void _swap(stack_t **hd, unsigned int count);
#endif
