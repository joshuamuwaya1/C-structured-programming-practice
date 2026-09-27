#include <stdio.h>
#include <stdlib.h>
//3.24
int main()
{
    int i;
    printf("N\tN^2\tN^3\tN^4\n");
    for(int i=1;i<=10;i++){

        printf("%d\t%d\t%d\t%d\n",i,i*i,i*i*i,i*i*i*i);

    }



    return 0;
}
