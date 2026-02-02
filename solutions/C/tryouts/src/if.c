#include"../include/decision_making.h"
void If()
{
    int a,b;
    printf("\n\n\nenter first number");
    scanf("%d",&a);
    printf("\nenter second number");
    scanf("%d",&b);
    if (a>b)
    {
       printf("\nfirst number is greatest");
    }
    else
    {
        printf("\nsecond number is greatest");
    }
}