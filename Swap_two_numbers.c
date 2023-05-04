
#include <stdio.h>

void main()
{
    int x, y;
    printf("\nEnter Value of x :");
    scanf("%d", &x);
    printf("\nEnter Value of y :");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf(" x = %d, y = %d\n", x, y);
}
