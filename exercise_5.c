#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i;
    printf("N\tN+3\tN+6\tN*9\n");
    for( i=7;i<=35;(i=i+7)){

        printf("%d\t%d\t%d\t%d\n",i,(i+3),(i+6),(i*9));
    }
    return 0;
}
