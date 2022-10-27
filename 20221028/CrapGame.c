#include<stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
/*雙人對賭輸入1*顯示得分板*/

int main(){
    int notend =1;
    do{
        /* 設定亂數種子 */
        srand( time(NULL) );
        /* 產生亂數 */
        int first = rand()%6 + 1;
        int second =rand()%6 + 1;
        int sum =first+second;

        switch(sum) {
			case 2:
			case 3:
			case 12:
				printf("你輸了!");
                notend =0;
                break;
			case 4:
			case 5:
			case 6:
			case 8:
			case 9:
			case 10:
				printf("進入加賽\n");
                notend =1;
                break;
			case 7:
			case 11:
				printf("你贏了!");
                notend =0;
                break;
		}
	}while(notend);

    return 0;
}
