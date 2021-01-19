/*
 ex_4_4.c
 author: Leo
 date: 19/Jan/2021
 description: compare and contrast while loop and for loop.
*/
#include <stdio.h>

int main(){
    //self-explaintory
    float in;
    float sum=0;
    int choose, i=0;

    //let the user to choose using while loop or for loop
    printf("choose using 1.while loop, 2.for loop.\n");
    scanf("%d",&choose);
    if (choose){
        while (i<10){
            printf("please input a number\n");
            scanf("%f",&in);
            sum+=in;
            i++;
        }
    }

    else{
        for(i<10;i++;){
            printf("please input a number\n");
            scanf("%f",&in);
            sum+=in;    
        }
    }


    printf("the sum of the numbers your entered is %.2f",sum);
    
    return 0;
}

