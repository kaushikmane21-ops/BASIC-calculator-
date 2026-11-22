#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("result = %d\n", a + b);
            break;
        case '-':
            printf("result = %d\n", a - b);
            break;
        case '*':
            printf("result = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("result = %d\n", a / b);
            else
                printf("DIVISION BY ZERO NOT ALLOWED\n");
            break;
        default:
            printf("INVALID OPERATION\n");
    }

    return 0;
}
