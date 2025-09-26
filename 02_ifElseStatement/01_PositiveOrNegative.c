#include<stdio.h>

void main()
{
    int num = 0;

    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Positive\n", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative\n", num);
    }
    else if (num == 0)
    {
        printf("The Numeber %d is considered neutral\n", num);
    }
}