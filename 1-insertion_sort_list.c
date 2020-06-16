#include "sort.h"

/**
 * insertion_sort_list -  sorts a list of integers Insertion sort algorithm
 * @list: doubly linked list to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *actual, *tmp, *noder;
        int check;

        if (list == NULL || (*list)->next == NULL)
                return;
        actual = (*list)->next;
        while (actual != NULL)
        {
                tmp = actual;
                while (tmp->prev != NULL)
                {
                        check = 0;
                        if (tmp->n < tmp->prev->n)
                        {
                                if (tmp->prev->prev != NULL)
                                        tmp->prev->prev->next = tmp;
                                tmp->prev->next = tmp->next;
                                noder = tmp->prev->prev;
                                tmp->prev->prev = tmp;
                                if (tmp->next != NULL)
                                        tmp->next->prev = tmp->prev;
                                tmp->next = tmp->prev;
                                tmp->prev = noder;
                                check = 1;
                                if (tmp->prev == NULL)
                                        *list = tmp;
                                print_list(*list);
                        }
                        if (check == 0)
                                tmp = tmp->prev;
                }
                actual = actual->next;
        }
}