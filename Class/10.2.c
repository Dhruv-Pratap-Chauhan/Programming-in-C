//Write a program to insert item in middle of the linked list.

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}
void insertAfterMiddle(struct Node** head_ref, int new_data) {
    if (*head_ref == NULL) {
        append(head_ref, new_data);
        return;
    }
    struct Node* slow = *head_ref;
    struct Node* fast = *head_ref;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = slow->next;
    slow->next = new_node;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;   
    append(&head, 1);
    append(&head, 2);
    append(&head, 4);           
    append(&head, 5);
    printf("Original Linked List: \n");
    printList(head);
    insertAfterMiddle(&head, 3);    
    printf("Linked List after inserting 3 in the middle: \n");
    printList(head);
    return 0;
}   
