#include"../include/decision_making.h"
void prime()
{
    int i,no,flag=0;
    printf("\nenter your number");
    scanf("%d",&no);
     if (no<2)
        {
            printf("\nthis is not prime number");
        }
    for (i=2;i<sqrt(no);i++)
    {
       
        if (no%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("\nthis number is prime number");
    }
    else
    {
        printf("\nthis is not prime number");
    }
}