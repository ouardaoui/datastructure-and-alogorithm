#include "ft.h"
#include <stdlib.h>

Node *search(Node *list, int key)
{
    Node *p;
    p = list;
    int data;
    while (p)
    {
        if (p->data == key)
        {
            data = p->data;
            p->data = list->data;
            list->data = data;
            return list;
        }
        p = p->next;
    }
    return NULL;
}