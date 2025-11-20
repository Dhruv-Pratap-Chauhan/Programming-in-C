#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* append(Node *head, int val) {
    Node *n = malloc(sizeof *n);
    if (!n) return head;
    n->data = val; n->next = NULL;
    if (!head) return n;
    Node *t = head;
    while (t->next) t = t->next;
    t->next = n;
    return head;
}

void printList(const Node *p) {
    while (p) { printf("%d -> ", p->data); p = p->next; }
    puts("NULL");
}

int main(void) {
    int vals[] = {1,2,3,4,5};
    Node *head = NULL;
    for (size_t i = 0; i < sizeof vals / sizeof *vals; ++i)
        head = append(head, vals[i]);
    puts("Created Linked List:");
    printList(head);
    return 0;
}
