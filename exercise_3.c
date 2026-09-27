#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.22
    int num,i,isprime=1;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num<=0)
    {
        isprime=0;
    }
    else
    {
        for(int i =2;i<num;i++){
            if(num%i==0);
            {
                isprime=0;
                break;
            }
        }


    }
    if (isprime==0)
    {
        printf("Not a prime number");
    }
    else
    {
        printf("%d is a prime number",num);
    }



    return 0;
}
