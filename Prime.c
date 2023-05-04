#include <stdio.h>

void main()
{
    printf("Enter a numner:");
    int number;
    scanf("%d", &number);
    int i, flag = 1;
    for (i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Prime");
    else
        printf("not prime");
}