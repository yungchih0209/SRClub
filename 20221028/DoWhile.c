#include <stdio.h>
/*不斷讓使用者輸入一個整數，直到輸入 0 才結束程式。並判斷此整數是奇數或是偶數。*/
int main(){
    int num;

    do{
        printf("Please input an integer:");
        scanf("%d", &num);

        if( num % 2 ==1 )
            printf("%d i is odd.\n", num);//奇數
        else
            printf("%d is even.\n", num);//偶數
    }while(num != 0);

    return 0;
}
