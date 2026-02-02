#include"../include/sumit.h"
void relation_ope()
{
   int a,b,c;
    printf("\n\nenter value of a &b ");
    scanf ("%d%d",&a, &b);
    c=a>b;
    printf("\n\na>b:%d",c);
    c=a<b;
    printf("\n\na<b:%d",c);
    c=a>=b;
    printf("\n\na>=b:%d",c);
    c=a<=b;
    printf("\n\na<=b:%d",c);
    c=a!=b;
    printf("\n\na!=b:%d",c);
    c=a==b;
    printf("\n\na==b:%d",c);
}

