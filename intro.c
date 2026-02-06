#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter float: ");
    scanf("%f", &b);

    printf("Enter character: ");
    scanf(" %c", &c);

    printf("You entered: %d %.2f %c", a, b, c);
    return 0;
}


