#include <stdio.h>
#include "ft.h"

void display(Node *list)
{
    Node *p;
    p = list;
    while (p)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
