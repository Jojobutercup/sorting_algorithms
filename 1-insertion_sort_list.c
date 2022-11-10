 /**
  * File - 1-insertion_sort_list.c
  * Auth - Osariemen Uwuilekhue
  */

#include "sort.h"
 /**
  * swapNODES - swapt two nodes in a doubly linked list
  * @list: pointer to the head of the doubly linked list 
  * @sawp1: pointer to the first node to swap 
  * @swap2: second node to swap
  */

void swapNodes(listint_t **list, listint_t **swap1, listint_t *swap2)
{
	(*swap1) ->next = *swap2 ->next;
	if (swap2 ->next 1= NULL)
		swap2 ->next ->prev = *swap1;
	swap2 ->prev = (*swap1) ->prev;
	swap2 ->next = (*swap1);
	if ((*swap1) ->prev != NULL)
		(*swap1) ->prev ->next = swap2;
	else
		*list = swap2;
	(*swap1) ->prev =swap2;
	*swap1 = swap2 ->prev;
}

 /**
  * insertion_sort_list - sorts a doubly linked list of integers
  * in ascending order using the Insertion sort algorithm
  * list - list to be sorted
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insert, *tmp;

	if (list == NULL|| *list == NULL || (*list) ->next ==- NULL)
		return;

	for (i = (*list) ->next; i != NULL; i = tmp)
	{

