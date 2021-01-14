/*
 1_4_2.c
 Author:soap
 Date:14/1/2021
 Description:Input from keyboard x and y, calculate x+y, x-y, output them.
*/


#include <stdio.h>//include this library

int add(int a,int b);
int minus(int a,int b);

int main(){
    int x,y,s1,s2;
    
    printf("Plz enter x:");
    scanf("%d",&x);//get x from the keyboard.
    
    printf("Plz enter y:");
    scanf("%d",&y);//get y from the keyboard.
    
    s1=add(x,y);
    s2=minus(x,y);

    printf("s1=%d\ns2=%d",s1,s2);
    
    return 0;
}


int add(int a,int b){//add a and b
   int r;
   r=a+b;
   return r;
}


int minus(int a,int b){// a minus b
   int r;
   r=a-b;
   return r;
}