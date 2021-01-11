/* 
test.c
Author: Leo
Date: 11/01/2021
Description: 该程序无输入，在屏幕打出特定语句
*/

#include <stdio.h> //this line import/includes the content in stdio.h file
#include "helper.h" //this is the header file we just created for storing person data

int main(){ //this is the main program
    int n,m,sum; //declare 3 variables named n, m, and sum
    n = 1;  // assign 1 to n
    m = 2;  // assign 2 to m
    sum = 3; // assign 3 to sum
    if (n + m == sum) { // if n + m is equal to sum then the following code will be excuted
        printf("the sum of n and m is %d", sum); //print onto the screen
        return 0; //return 0 'success'
    }
    else { //otherwise, this part will be excuted
        return 1; // 'fail'
    }
}





