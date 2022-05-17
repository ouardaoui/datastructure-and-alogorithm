#include "ft.h"
#include <stdlib.h>

Node *search(Node *list, int key)
{
    Node *p;
    Node *l;
    l = list;
    p = l->next;
    while (l)
    {
        if (p->data == key)
        {
            l->next = p->next;
            p->next = list->next;
            list = p;
            return list;
        }
        p = p->next;
        l = l->next;
    }
    return NULL;
}