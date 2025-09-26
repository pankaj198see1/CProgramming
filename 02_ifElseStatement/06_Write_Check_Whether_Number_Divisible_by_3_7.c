#include<stdio.h>

int main()
{

    int num = 0;
    printf("Enter a number : \n");
    scanf("%d", &num);

   if (num % 3 != 0 && num % 7 !=0 )
   {
    pritnf("%d is not divisible by 3 and 7", num);
   }
   else if (num % 3 == 0 && num % 7 == 0)
   {
        pritnf("%d is divisible by 3 and 7", num);

   }

    return 0;


}