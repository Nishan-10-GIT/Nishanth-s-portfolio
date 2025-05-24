#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The sum is: %d\n", a + b);
    printf("The difference is: %d\n", a - b);
    printf("The product is: %d\n", a * b);
    printf("The division is: %d\n", a / b); // Integer division

    return 0;
}
