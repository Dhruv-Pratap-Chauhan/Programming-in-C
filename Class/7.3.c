#include <stdio.h>

struct Book {
    int id;
    char title[100], author[50];
    float price;
};

void show(struct Book b) {
    printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b.id, b.title, b.author, b.price);
}

int main() {
    struct Book b;

    printf("Enter Book ID: ");1
    scanf("%d", &b.id);

    printf("Enter Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details:\n");
    show(b);
}
