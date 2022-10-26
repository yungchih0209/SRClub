#include<stdio.h>
/*練習判斷是否*/
int main(){
    int x;
    scanf("%d",&x);
    switch(x){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("平日");
            break;
        case 6:
        case 7:
            printf("開心的假日");
            break;
        default:
            printf("輸入錯誤!");
            break;
    }
    return 0;
}