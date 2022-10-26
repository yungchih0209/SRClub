#include <stdio.h>
/*輸入一個整數 N,d ，輸出0到N的等差數列。*/
/*使用DoWhile使最後不會印出逗號*/

int main(){
    int n,d;
    printf("Input number:");
    scanf("%d", &n);
    scanf("%d",&d);

    int first = 0;
    while(first <= n){
        printf(",%d", first);
        first+=d;
    }
    return 0;
}
