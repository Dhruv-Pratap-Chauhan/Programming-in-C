// declare a local static variable inside a function and observe how its value persists across function calls

#include <stdio.h>
void demoFunction() {
    static int count = 0; 
    count++;
    printf("Function called %d times\n", count);
}
int main() {
    demoFunction(); 
    demoFunction();
    demoFunction(); 
    return 0;
}