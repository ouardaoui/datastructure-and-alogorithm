#include "ft.h"

int count(Node *list)
{
    int i = 0;
    Node *p;
    p = list;
    while (p)
    {
        p = p->next;
        i++;
    }
    return i;
}