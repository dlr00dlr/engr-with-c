// Demo of Stacks and Queues
#include <stdio.h>
#include <stdlib.h>
typedef struct node NODE;

struct node
{	int i; struct node * next;
};

// 3.2 push a node on the top of stack
NODE *pushs(NODE *stack, int i)
{	NODE *new;

	if ((new = (NODE *) malloc(sizeof(NODE))) == NULL)
	{	printf("Fatal memory allocation error in push \n");exit(1);
	}
	new->i = i;
	new->next = stack;
	stack = new;
	return stack;
}

// 3.3 pop a node off the stack
NODE *pops(NODE **stack)
{	NODE *first;

	if (*stack == NULL) return NULL;
	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	return first;
}

// 3.4 push a new node in the back of queue

void pushq(NODE **q, NODE **rear, int i)
{	NODE *new;

	if ((new = (NODE *) malloc(sizeof(NODE))) == NULL)
	{	printf("Fatal malloc error in pushq\n");exit(1);
	}
	new->i = i;
	new->next = NULL;
	if (*q == NULL) *q = new;
	else (*rear)->next = new;
	*rear = new;
}

// 3.5 pop a node off the front of queue

NODE *popq(NODE **q, NODE **rear)
{	NODE *first;

	first = *q;
	if (*q == NULL) return NULL;
	*q = (*q)->next;
	if (*q == NULL) *rear = NULL;
	first->next = NULL;
	return first;
}
