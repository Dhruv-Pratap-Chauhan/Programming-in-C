//Write a program to insert item in middle of the linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

static Node *new_node(int v) {
    Node *n = malloc(sizeof *n);
    if (!n) exit(1);
    n->data = v; n->next = NULL;
    return n;
}

void insertInMiddle(Node **h, int v) {
    Node *n = new_node(v);
    if (!*h) { *h = n; return; }
    Node *s = *h, *f = *h;
    while (f->next && f->next->next) { s = s->next; f = f->next->next; }
    n->next = s->next; s->next = n;
}

void printList(const Node *p) {
    for (; p; p = p->next) printf("%d -> ", p->data);
    puts("NULL");
}

int main(void) {
    int vals[] = {10,20,30,25,15};
    Node *head = NULL;
    for (size_t i = 0; i < sizeof vals / sizeof *vals; ++i) insertInMiddle(&head, vals[i]);
    printList(head);
    return 0;
}

