#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4.13
    int b,num,ttl;
    printf("Enter a number:");
    scanf("%d",&num);
    for (b=0;b<=num;b++)
    {

        printf("%d\n",b*b);
        ttl+=(b*b);
    }
    printf(" Total of Squares - %d",ttl);
    for (b=0;b<=num;b++)
    {

        printf("%d\n",b*b*b);
        ttl+=(b*b*b);
    }
    printf(" Total of cube of natural numbers - %d",ttl);
    return 0;
}
