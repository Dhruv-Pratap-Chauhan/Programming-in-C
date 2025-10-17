#include <stdio.h>

typedef struct {
    int book_id;
    char title[100];
    char author[50];
    float price;
} Book;

void printBookDetails(Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    Book myBook;

    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);

    printf("Enter Title: ");
    scanf(" %[^\\n]s", myBook.title); 
    scanf("%f", &myBook.price);

    printf("\nBook Details:\n");
    printBookDetails(myBook);

    return 0;
}
