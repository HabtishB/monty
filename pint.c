#include "monty.h"

/**
 * pint - this prints the top of the stuck
 * @top: is the top of the stack
 * @line: is the line number
 * Return: returns nothing
 */

void pint(stack_t **top, unsigned int line_number)
{
  stack_t *tmp;
  if (top != NULL && *top != NULL)
    {
    
      tmp = *top;
      while (tmp->prev == NULL)
      break;
      tmp = tmp->prev;
     }
      
  else
    {
      printf("%d can't prin, stack empty", line_number);
      exit(EXIT_FAILURE);
    }
 printf("%d", tmp->n);
}
