#include <stdio.h>
#include <stdlib.h>
/*輸出 300 到 500 之間可以被 3 與 11 整除的整數。*/
int main(){
    int i;
    // For
    for(i = 300; i <= 500; i++){ 
        if(i % 3 == 0 && i % 11 == 0){
            printf("%d, ", i);
        }     
        printf("\n\n");
    }
    
    // While
    i = 300;
    while( i <= 500){
        if(i % 3 == 0 && i % 11 == 0) printf("%d, ", i);
        i++;
    }
    printf("\n\n");

    // Do-While
    i = 300;
    do{
        if(i % 3 == 0 && i % 11 == 0) printf("%d, ", i);
        i++;
    } while(i <= 500);
    return 0;
}