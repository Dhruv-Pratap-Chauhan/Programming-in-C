#include <stdio.h>

union Address {
    char name[100];
    char home_address[200];
    char hostel_address[200];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address presentAddress;

    printf("Enter your present address (home address): ");
    scanf(" %[^\n]", presentAddress.home_address);

    printf("\nYour present address is:\n%s\n", presentAddress.home_address);

    return 0;
}
