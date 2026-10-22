//Accept two number from user and display first number in second

// Input:12 5
//Output:12 12  12  12  12

// Input:-2 3
//Output:-2 -2  -2

// Input:21 3
//Output:21 21  21

// Input:-2 0
//Output:

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo,int ferquency)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=ferquency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    printf("Enter Ferquency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return EXIT_SUCCESS;
}