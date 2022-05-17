#ifndef FT_H
#define FT_H
typedef struct T_Node
{
    int data;
    struct T_Node *next;
} Node;

Node *create(int *arr, int n);
void display(Node *list);
int count(Node *list);
int sum(Node *list);
int max(Node *list);
Node *search(Node *list, int key);
#endif