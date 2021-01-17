/* ex_2_1
   Author:soap
   Date:17/1/2021
   Description: binary, decimal, oct, hex convertor
*/

#include <stdio.h>


int main(){
    int n=80,m=20,s;
    s=n+m+68;
    printf("%d,%d\n",s,n+m);
    printf("%o,%o\n",s,n+m);
    printf("%x,%x\n",s,n+m);

    return 0;
}

/*做进制转换器，打印如下文字 “Decimal -> Oct" "2. Binary -> Hex" "3. Exit"
    要求用户输入：
    用户输入需要转化的十进制数字，
    要求用户输入：
    用户输入菜单序号 1、2、3
    转化，
    输出用户输入的数字，
    输出用户的需求
    输出转化后的数字
*/