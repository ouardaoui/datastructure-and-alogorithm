#include "ft.h"
#include <limits.h>

int max(Node *list)
{
    int max = INT_MIN;
    Node *p;
    p = list;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}