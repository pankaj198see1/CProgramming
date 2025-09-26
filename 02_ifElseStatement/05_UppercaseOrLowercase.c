#include<stdio.h>

int main()
{

    char ch;
    printf("Enter a character : \n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("its lowercase");
    }

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("its Uppercase");
    }

    if (ch >= '0' && ch <= '9')
    {
        printf("its Number");
    }




    return 0;


}