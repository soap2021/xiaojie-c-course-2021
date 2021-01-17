/* ex_2_1
   Author:soap
   Date:17/1/2021
   Description: binary, decimal, oct, hex convertor
*/

#include <stdio.h>


int main(){
    //declaration
    int a,b,c;
    unsigned d; 
    long e;

    //body
    scanf("%d%o%x",&a,&b,&c);
    printf("%d,%d,%d\a",a,b,c);

    scanf("%d%d",&d,&e);
    printf("%d,%d\a",d,e);

    return 0;
}