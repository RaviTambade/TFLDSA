#include"../include/decision_making.h"
void If2()
{
    int avl_bal, withdrawal_amt;
    avl_bal=1000;
    printf("\n\nenter withdrawing amount");
    scanf("%d",&withdrawal_amt);
    if (avl_bal>=withdrawal_amt)
    {
        printf("\nwithdrawing amount processing");
    }
    else 
    {
        printf("\ninsufficient bal...");
    }
}
