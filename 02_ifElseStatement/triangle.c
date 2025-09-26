#include<stdio.h>

int main()
{

    int num = 0, num2 = 0, num3 = 0;
    printf("Enter a first number : \n");
    scanf("%d", &num);

    printf("Enter a Second number : \n");
    scanf("%d", &num2);

    printf("Enter a Third number : \n");
    scanf("%d", &num3);


    if (num + num2 + num3 == 180) && (num >= 0 && num2 >= 0 && num3 >= 0)
    {
      printf("Triangle is Valid");
    }
    else
    {
              printf("Triangle is Not Valid");
    }


    return 0;


}