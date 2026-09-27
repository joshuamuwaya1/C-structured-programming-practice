#include <stdio.h>
#include <stdlib.h>

int main()
{
    int actnum,lmtb;
    float cb,new_lmt,dif;
    for(int i=1;i<=3;i++){
    printf("Enter customer%d account number:",i);
    scanf("%d",&actnum);
    printf("\nEnter credit limits before recession:");
    scanf("%d",&lmtb);
    printf("\nEnter customer %d current balance:",i);
    scanf("%f",&cb);
    new_lmt=(lmtb/2);
    printf("\nNew limit for customer %d is $ %.2f\n",i,new_lmt);
    dif=cb-new_lmt;
    if (dif>new_lmt)
    {
        printf("\nCUSTOMER%d 'S BALANCES EXCEED THE CREDIT LIMIT\n\n\n\n",i);
    }else
        continue;
    }


    return 0;
}
