#include "ft.h"
#include <stdio.h>
#include <stdlib.h>

void insert(Node *list, int i, int value)
{
    Node *p;
    Node *t;
    // int tmp;
    p = list;
    t = (Node *)malloc(sizeof(Node));
    t->data = value;
    int j = 0;
    if (i == 0)
    {
        // tmp = t->data;
        // t->data = list->data;
        // list->data = tmp;
        t->next = p;
        list = t;
    }
    while (j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (i > 0)
    {
        t->next = p->next;
        p->next = t;
    }
}