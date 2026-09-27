#include <stdio.h>
#include <stdlib.h>

int main()
{    //--2.16
    printf("---SUMMATION MACHINE---\n");
    int num_1,num_2,sum;
    printf("Enter a number:");
    scanf("%d",&num_1);
    printf("Enter another number:");
    scanf("%d",&num_2);

    printf("SUM:%d\n",num_1+num_2);
    printf("DIFFERENCE:%d\n",num_1-num_2);
    printf("QUOTIENT:%d\n",num_1/num_2);
    printf("PRODUCT:%d\n", num_1*num_2);
    printf("REMAINDER:%d\n",num_1%num_2);
    return 0;
}
