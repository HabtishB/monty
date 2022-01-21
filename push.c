#include"monty.h"

/**
 * push - inserts a node to the top of the stack
 * @top:  is a pointer of a pointer to the head
 * @line_number: is the line number
 * @data: is content of the node
 * Return: does not return anything (void)
 */

void push(stack_t **top, unsigned int line_number, char *arg)
{
  *top = NULL;

  if (top == NULL)
    {
      printf("The stack could not be accessed");
      exit(EXIT_FAILURE);
    }
  stack_t *new_node;
  new_node = (stack_t*)malloc(sizeof(stack_t));

  {
    if (new_node == NULL)
      {
	printf("Error: malloc failed");
	exit(EXIT_FAILURE);
      }
    new_node->n = atoi(arg);
    new_node->prev = NULL;
    new_node->next = *top;
    
    *top = new_node;
  }
}

void pall(stack_t  **top)
{
  stack_t *tmp;

  tmp = *top;
  while (tmp != NULL)  
    {
      printf("%d", tmp->n);
      tmp = tmp->next;
    }
}
