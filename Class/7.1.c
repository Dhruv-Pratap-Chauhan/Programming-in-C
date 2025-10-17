#include <stdio.h>

struct Complex {
    float real;
    float imag;
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

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter the first complex number:\n");
    c1 = readComplex();

    printf("Enter the second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    printf("\nFirst Complex Number: ");
    writeComplex(c1);

    printf("Second Complex Number: ");
    writeComplex(c2);

    printf("\nSum: ");
    writeComplex(sum);

    printf("Difference: ");
    writeComplex(diff);

    return 0;
}
