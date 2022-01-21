#include "monty.h"

/**
 * pint - this prints the top of the stuck
 * @top: is the top of the stack
 * @line: is the line number
 * Return: returns nothing
 */

void pint(stack_t **top, unsigned int line_number)
{
  if (top != NULL and *top != NULL)
    {
      tmp = *top;
      while (tmp ->prev == NULL)
	break;
      tmp = tmp->prev;
     }
  printf("%d", tmp->n);
    
  else:
    {
      printf("%d", line, "can't pint, stack empty");
      exit(EXIT_FAILURE);
    }

  

  

  
}
