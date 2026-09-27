#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4.10
    char cof;
    float temp_v,new_t,i;
    printf("--- TEMPERATURE CONVERTER--\n");
    printf(" Enter a temperature value:");
    scanf("%f",&temp_v);
    printf("Do you want to convert from celcius  or fahrenheit(C/F):");
    scanf(" %c",&cof);
    do {

        if (cof=='C'){
            if (temp_v>=30 && temp_v<=50){
                 new_t = (((9/5)*temp_v)+ 32);
                 printf("Temperature\n");
                 printf("Celcius:%.2f\n",temp_v);
                 printf("Fahrenheit:%.2f\n",new_t);}
            else
         {
             printf("Only temperature from 30-50  is acceptable on the celcius scale");
         }
        }
        else if(cof=='F'){
                new_t=((((5*temp_v)-32))/9);
                 printf("Temperature\n");
                 printf("Celcius:%.2f\n",new_t);
                 printf("Fahrenheit:%.2f\n",temp_v);
        }
         else{
                printf("Invalid input");
         }



    }
        while(i>0);




    return 0;
}
