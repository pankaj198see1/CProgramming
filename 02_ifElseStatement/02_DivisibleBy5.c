#include<stdio.h>

void main()
{
    int num = 0;

    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Number is Not Divisible");
    }
   
}