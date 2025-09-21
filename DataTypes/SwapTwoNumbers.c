#include <stdio.h>

int main()
{

    int num = 10;
    int num2 = 20;


    int temp = 0;

    
    printf("Number before swap num %d\n", num);
    printf("Number before swap num2 %d\n", num2);

    temp = num;
    num = num2;
    num2 = temp;


    printf("Number after swap num %d\n", num);
    printf("Number after swap num2 %d\n", num2);


  



return 0;
}
