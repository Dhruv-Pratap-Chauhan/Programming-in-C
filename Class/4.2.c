//declare a local variable inside a functionand try to access it outside the function

#include <stdio.h>
void func() {
    int localVar = 10; 
    printf("Inside func, localVar = %d\n", localVar);
}
int main() {
    func();
    return 0;
}

