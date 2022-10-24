#include<stdio.h>
/*練習*/
int main(){
    int x;
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("星期一");
            break;
        case 2:
            printf("星期二");
            break;
        case 3:
            printf("星期三");
            break;
        default:
            printf("Default!");
    }
    return 0;
}