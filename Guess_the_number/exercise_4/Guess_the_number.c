//写一个猜数字的游戏.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Munu(){
	printf("我在心里想了一个1-100的数,如果你猜对了,我就让你嘿嘿嘿~~\n");
	printf("输入1,开始\n");
	printf("输入0,再见\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game(){
	srand((unsigned int)time(0));//设置随机种子,time(0)获取当前时间戳.
	int result = rand() % 100 + 1;
	while (1){
		printf("请输入要猜的数字:");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("低了\n");
		}else if (num>result) {
			printf("高了\n");
		}else {
			printf("恭喜你答对了!再玩一次吧!\n");
			break;
		}
	}
}

int main() {
	while (1){
		int choice = Munu();
		if (choice == 1){
			Game();
		}else {
			printf("打扰了\n");
			break;
		}
	}
	system("pause");
	return 0;
}