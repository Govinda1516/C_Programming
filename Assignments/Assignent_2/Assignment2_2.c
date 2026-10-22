//Accept one number from user and print number of * screen

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    iCnt=iNo;
    while(iCnt>1)
    {
        printf("*");
        iCnt--;
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}