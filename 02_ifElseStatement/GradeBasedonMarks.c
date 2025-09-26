#include<stdio.h>

int main()
{

    int marks = 0;
    printf("Enter Marks : \n");
    scanf("%d", &marks);

 


  if (marks >= 0 && marks <= 35)
  {
    printf("FAILED");
  }
  
  else if (marks >= 35 && marks <= 50)
  {
    printf("D");
  }

  else if (marks >= 50 && marks <= 75)
  {
    printf("C");
  }
  
  else if (marks >= 75 && marks <= 85)
  {
    printf("B");
  }
  
  else if (marks > 85 && marks <= 100)
  {
    printf("A");
  }

return 0;


}