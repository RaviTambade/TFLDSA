#include"../include/decision_making.h"
void even()
{
    int a;
    printf("\n\nenter your number");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("\n\nthis number is even");
    }
    else
    {
        printf("\n\nthis number is odd");
    }
}