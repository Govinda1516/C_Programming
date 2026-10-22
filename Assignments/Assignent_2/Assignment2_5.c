//Accept the number from user and check number feom even or odd

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL Display(int iNo)
{
    if(iNo%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet=Display(iValue);
    
    if(bRet==1)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return EXIT_SUCCESS;
}