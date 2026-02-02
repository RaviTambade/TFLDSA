#include"../include/decision_making.h"
void greatestint()
{
    int a,b,c;
    printf("\n\n\nenter your three number");
    scanf("%d%d%d", &a, &b, &c);
    if (a> b)
    {
        if (a>c)
        {
            printf("greatest number is %d",a);
        }
        else
        {
            printf("greatest number is %d",b);
        }
    }
    if (b>c)
    {
        if (b>a)
        {
            printf("greatest number is %d",b);
        }
    }
    else 
    {
        printf("greatest number is %d",c);
    }
}