#include "ft.h"
#include <stdlib.h>

int ft_delete(Node *list, int i)
{
    Node *p;
    Node *q;
    p = list;
    int x;
    int j = 0;
    if (i > 0)
    {
        while (p && j != i)
        {
            q = p;
            p = p->next;
            j++;
        }
        x = p->data;
        q->next = p->next;
        free(p);
    }
    return x;
}
