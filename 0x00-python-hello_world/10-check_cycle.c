#include "lists.h"
#include <stdio.h>

/**
  * algorithm: Floyd's tortoise and hare
  * check_cycle - Cycle detection
  * @list: single list
  *
  * Return: 1, 0
  */
int check_cycle(listint_t *list)
{
	listint_t *tortoise = list, *hare = list;
	int detected = 0;

	while ((tortoise && hare) && hare->next)
	{		
		tortoise = tortoise->next;

		if (hare->next || hare->next->next)	
			hare = hare->next->next;
		else
			break;

		if (tortoise == hare)
		{
			detected = 1;
			break;
		}
	}

	return (detected);
}
