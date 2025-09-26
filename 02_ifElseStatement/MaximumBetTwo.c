#include<stdio.h>

int main()
{

    int num = 0, num2 = 0;
    printf("Enter a first number : \n");
    scanf("%d", &num);

    printf("Enter a Second number : \n");
    scanf("%d", &num2);


   if (num > num2)
   {
        printf("%d is maximum between %d and %d", num, num, num2);
   }
   else if (num2 > num )
   {
        printf("%d is maximum between %d and %d", num2, num2, num);
   }
   else if (num == num2)
   {
     printf("numbers are equal");
   }

    return 0;


}