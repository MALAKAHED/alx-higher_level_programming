#include "lists.h"

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return nodes;
}
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
return NULL;
new_node->n = n;
new_node->next = *head;
*head = new_node;
return new_node;
}
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return 1;
}
return 0;
}
