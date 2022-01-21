#include"monty.h"

/**
 * push - inserts a node to the top of the stack
 * @top:  is a pointer of a pointer to the head
 * @line_number: is the line number
 * @data: is content of the node
 * Return: does not return anything (void)
 */

void push(stack_t **top, unsigned int line_number, int data)
{
  *top == NULL;

  if (top == NULL)
    {
      printf("The stack could not be accessed");
      exit;
    }

  newnode = (stack_t*)malloc(sizeof(stack_t));

  {
    if (newnode == NULL)
      {
	printf("Error: malloc failed");
	exit("EXIT_FAILURE");
      }
    newnode->node = n;
    newnode->prev = NULL;
    newnode->next = *top;
    
    *top = newnode;
  }
}

void pall(stack_t  **top)
{
  stack_t temp;

  temp = *top;
  while (temp != NULL)  
    {
      printf("%d", temp->n);
      temp = temp->next;
    }
}
