#include<stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
/*雙人對賭輸入9顯示得分板 先獲得三分就贏了*/

int main(){
    int player,player1=0,player2=0;
    
    do{
        printf("選擇玩家:");
        scanf("%d",&player);
        if(player>2 && player!=9){
            printf("輸入錯誤 重新輸入\n");
            continue;
        }
        if(player==9){
            printf("目前比數:\n玩家1:%d\n玩家2:%d\n",player1,player2);
            continue;
        }

        /* 設定亂數種子 */
        srand(time(NULL));
        /* 產生亂數 */
        int first = rand()%6 + 1;
        int second =rand()%6 + 1;
        int sum =first+second;

        switch(sum) {
			case 2:
			case 3:
			case 12:
				printf("骰到%d 你輸了!\n玩家%d減一分\n",sum, player);
                if(((player==1)?player1:player2)==0){
                    printf("沒分可扣了 你超爛\n");
                    break;
                }
                (player==1)?player1-1:player2-1;
                break;
			case 4:
			case 5:
			case 6:
			case 8:
			case 9:
			case 10:
				printf("骰到%d\n不加分不扣分!\n",sum);
                break;
			case 7:
			case 11:
				printf("骰到%d\n你贏了! 玩家%d加一分\n",sum,player);
                (player==1)?player1+1:player2+1;
                break;
		}
        if(player1==3||player2==3){
            printf("玩家%d獲勝比賽結束",player);
            break;
        }
	}while(1);

    return 0;
}
