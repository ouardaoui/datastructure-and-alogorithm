#include "ft.h"

int sum(Node *list)
{
    int sum = 0;
    Node *p;
    p = list;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}