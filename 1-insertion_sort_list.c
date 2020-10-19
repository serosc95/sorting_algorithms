#include"sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: doubly linked list to order.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *node, *ref, *aux;

    if (list == NULL || (*list)->next == NULL)
        return;
    
    node = (*list)->next;
    while (node)
    {
        if (node->n > (node->prev)->n)
        {
            ref = node;
            while (node->n < (node->prev)->n)
            {
                aux = node->next;
                node->next = node->prev;
                node->prev = (node->prev)->prev;
                if (!node->prev)
                    break;
            }
            node = ref;
            printf("%d Hola\n", node->n);
        }
        node = node->next;
    }
}
