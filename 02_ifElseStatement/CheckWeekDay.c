#include<stdio.h>

int main()
{ 
    int weekDay = 0;
    printf("Enter a weekDay : \n");
    scanf("%d", &weekDay);


    if (weekDay == 1)
    {
      printf("MONDAY");
    }
     if (weekDay == 2)
    {
      printf("TUESDAY");
    }
     if (weekDay == 3)
    {
      printf("WEDNESDAY");
    }
     if (weekDay == 4)
    {
      printf("THURSDAY");
    }
     if (weekDay == 5)
    {
      printf("FRIDAY");
    }
     if (weekDay == 6)
    {
      printf("SATURDAY");
    }
    if (weekDay == 7)
    {
     printf("SUNDAY");
    }
    
    if (!(weekDay >= 0 && weekDay <= 7))
    {
        printf("Invalid weekDay");
    }

    return 0;


}