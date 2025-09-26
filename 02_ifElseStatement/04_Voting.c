#include<stdio.h>

int main()
{
    int age = 0;

    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible for voting");
    }
    
    else if (age < 18)
    {
        printf("Not Elgible to vote");

    }

    return 0;
   
}