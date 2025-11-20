#include <stdio.h>

struct Complex {
    float real, imag;
};

struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex r = { a.real + b.real, a.imag + b.imag };
    return r;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex r = { a.real - b.real, a.imag - b.imag };
    return r;
}

int main() {
    struct Complex c1, c2;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    printf("\nFirst: ");
    writeComplex(c1);

    printf("Second: ");
    writeComplex(c2);

    printf("\nSum: ");
    writeComplex(add(c1, c2));

    printf("Difference: ");
    writeComplex(sub(c1, c2));

    return 0;
}
