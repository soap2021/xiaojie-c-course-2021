#include <stdio.h>

int main(){
    int i =66, j, k;
    
    j = ++i;
    k = i++;
    printf("%d, %d, %d\n", j, k, i);
    
    i = -66;
    j = --i;
    k = i--;
    printf("%d, %d, %d\n", j, k, i);
    
    return 0;
}