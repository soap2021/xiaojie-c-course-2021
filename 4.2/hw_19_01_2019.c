/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.*/

#include <stdio.h>

int main(){
    int a,b,c;
 
    printf("please input a number:  ");
    scanf("%d",&a);


    for(a;a<1;){
        b=a%10;
        c=c+b;
        a=a/10;
           
    }  
   printf("the output is %d",c);
   return 0;
}