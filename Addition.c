#include <stdio.h>

int main()
{
    // Variable declaration
    int a, b, ans;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    ans = a + b;

    printf("Addition of %d and %d is %d", a, b, ans);

    return 0;
}
