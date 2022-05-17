#include "ft.h"
#include <stdio.h>
#include <stdlib.h>

Node *create(int *arr, int n)
{
    int i = 1;
    Node *list, *first;
    list = (Node *)malloc(sizeof(Node));
    list->data = arr[0];
    list->next = NULL;
    first = list;

    while (i < n)
    {
        Node *t;
        t = (Node *)malloc(sizeof(Node));
        t->data = arr[i];
        t->next = NULL;
        list->next = t;
        list = t;
        i++;
    }
    return first;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    Node *first = create(arr, 4);
    insert(first, 0, 5);
    display(first);
}