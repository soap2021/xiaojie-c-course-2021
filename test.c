/* 
test.c
Author: Leo
Date: 11/01/2021
Description: 该程序无输入，在屏幕打出特定语句
*/



#include <stdio.h> // 包含，import 需要的库
#include "helper.h" //this is the header file we just created for storing person data



int helper1(int n, int m, int sum); //申明子函数



int main(){ //this is the main program //主函数部分
    int n=1,m=2,sum=3; //declare 3 variables named n, m, and sum, with value 1,2,3

    if (helper1(n,m,sum)) { // if n + m is equal to sum then the following code will be excuted
        printf("the sum of n and m is %d", sum); //print onto the screen
        return 0; //return 0 'success'
    }
    else { //otherwise, this part will be excuted
        printf("fail"); //print onto the screen
        return 1; // 'fail'
    }
}



int helper1(int n, int m, int sum){ //子函数名为 helper1
    if (n+m == sum) {
        return 1;
    }
    else {
        return 0;
    }
}




