#include "monty.h"

/**
 * add_dnodeint_end - add to stack top
 * @head: head node
 * @n: data to be added
 * Return: pointer
*/

stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *newNode;
	stack_t *currentNode = *head;


	if (!head)
		return (NULL);

	newNode = malloc(sizeof(stack_t));

	if (!newNode)
	{
		dprintf(2, "Errpr: malloc failed\n");
		return EXIT_FAILURE;
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);}

/**
 * 
*/

void free_stack(stack_t *head)
{
	stack_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}

size_t print_stack(const stack_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
