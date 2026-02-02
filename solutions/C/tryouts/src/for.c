#include"../include/looping.h"
void basic_for()
{
    int i,c,r;
    for(i=0;i<=5;i++)
    {
        printf("\nhello sumit");
    }
     for(i=0;i<=10;i++)
    {
        printf("\ni=%d",i);
    }
    printf("enter your number");
    scanf("%d", &r);
    for(i=1;i<=10;i++)
    {
       c=r*i;
       printf("\n%d*%d=%d",r,i,c);

    }
    for(i=0;i<=100;i++)
    {
        printf("\t\t happy diwali");
    }
}

