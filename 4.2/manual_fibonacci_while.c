/*
 manual_fibonacci_while.c
 Author:soap
 Data:19/1/2021
 Description: using loop to express the first hundred items of the fibonacci series.
*/

#include<stdio.h>

int main(){
    long a=0,b=1,c; //c=积累器 (accumulator)
    int i=0;
  
    while(i<30){  
        printf("%d ",a);
      
        c=a+b; //calculate the 3rd fib number in this loop
        a=b;
        b=c;
        i++;
    }

    return 0;
}