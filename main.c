#include <stdio.h>

int main()
{   
    // @TODO: print a sentence you want.
    int a,b;
    printf("Hello, world!\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d is %d\n", a, b, a + b);
    return 0;
}