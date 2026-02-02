#include"../include/sumit.h"
void conditional()
{
    int a,b,c;
        printf("\n\nenter value of a&b:");
        scanf("%d%d",&a,&b);

    c=a>b?1+1:6+8;
    printf("\n\nc=%d",c);
    c=a<b? 100:7111;
    printf("\n\nc=%d",c);

}