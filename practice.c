/*
practice.c
author:soap
Data:12/1/2021
Description: practice 
*/


#include <stdio.h>  //包含库

int sumtwo(int x,int y);//申明子函数

int main(){
    int a,b,sum;
    printf("请输入变量a和b的值：");
    scanf("%d%d,&a,&b");
    sum=sumtwo(a,b);
    printf("a与b的和等于%d",sum);
    return 0;
}

int sumtwo(int m,int n) {
    int k;
    k=m+n;
    return k;
}