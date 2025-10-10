#include <stdio.h>

long long factn(int n) {
    long long result = 1;
    int i;
    for (i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

long long factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

long long binomial_coefficient(int n, int r) {
    if (r > n) {
        return 0;
    }
    long long num = factn(n);
    long long denom = factn(r) * factn(n - r);
    return num / denom;
}

int main() {
    int n, r;
    int i, j;

    printf("Enter value of n ");
    scanf("%d", &n);

    printf("Enter value of r  ");
    scanf("%d", &r);

    printf("\nFactorial using non-recursive: %d! = %lld\n", n, factn(n));
    printf("Factorial using recursive   : %d! = %lld\n", n, factorial_recursive(n));

    printf("\nBinomial Coefficient C(%d, %d) = %lld\n", n, r, binomial_coefficient(n, r));
    return 0;
}
