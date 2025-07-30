#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Hello, world!\n");
    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

