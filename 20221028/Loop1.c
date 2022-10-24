#include <stdio.h>
#include <stdlib.h>
/*使用迴圈輸出 1 到 100 之間的奇數。*/
int main(){
    int i;
    // For
    for(i = 1; i <= 100; i += 2)
        printf("%d, ", i);
    
    printf("\n\n");

    // While
    i = 1;
    while( i <= 100){
        if(i % 2)
            printf("%d, ", i);
        i++;
    }

    printf("\n\n");

    // Do-While
    i = 1;
    do{
        if(i % 2)
            printf("%d, ", i);
        i++;
    } while(i <= 100);
    
    return 0;
}