//10X10扫雷游戏

#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 10
#define MAX_COL 10
#define DEFAULT_MINE_COUNT 10

int Menu(){
	printf("======================\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("======================\n");
	int choice = 0;
	scanf_s("%d",&choice);
	return choice;
}
void Init(char show_map[MAX_ROW + 2][MAX_COL + 2],
	char mine_map[MAX_ROW + 2][MAX_COL + 2]){
	for (int row = 0; row < MAX_ROW + 2; ++row){
		for (int col = 0; col < MAX_COL + 2; ++col){
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW + 2; ++row){
		for (int col = 0; col < MAX_COL + 2; ++col){
			mine_map[row][col] = '0';
		}
	}
	//能够随机的构造出N个雷,放到雷阵中
	int mine_count = DEFAULT_MINE_COUNT;
	while (mine_count>0){
		//随机布置地雷
		//随机产生地雷的坐标
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (mine_map[row][col] == '1'){
			//当前位置已经有雷了,需要重新产生随机数
			continue;
		}
		mine_map[row][col] = '1'; 
		--mine_count;
	}
}
void DisplayMap(char map[MAX_ROW + 2][MAX_COL + 2]){
	printf("    ");
	//打印第一行,纵坐标
	for (int i = 1; i <= MAX_COL; ++i){
		printf("%d ", i);
	}
	printf("\n");
	//打印上边框
	for (int i = 1; i <= MAX_COL; ++i){
		printf("---");
	}
	printf("\n");
	//按行打印具体地图
	for (int row = 1; row <= MAX_ROW;++row){
		//将输入的数字补位为两位数,1--->01.
		printf("%02d| ", row);
		for (int col = 1; col <= MAX_COL; ++col){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(char show_map[MAX_ROW + 2][MAX_COL + 2],
	char mine_map[MAX_ROW + 2][MAX_COL + 2],int row,int col){
	//这个函数要根据mine_map来计算row,col位置上周围有几个地雷
	//把结果写道对应的show_map位置上
	//此处八个位置不会越界,因为加了边框,[1,MAX_ROW],[0,MAX_ROW+1]
	
	int mine_cnt = (mine_map[row - 1][col - 1] - '0')
		+ (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0')
		+ (mine_map[row][col - 1] - '0')
		+ (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col - 1] - '0')
		+ (mine_map[row + 1][col] - '0')
		+ (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_cnt;
}
void Game(){
	//进行具体的一局扫雷游戏
	//使用两个二维数组来表示地图
	//第一个数组表示给玩家展示的地图
	//此处加边框
	//对于showmap里的元素右两种情况，
	//1，这个位置没有被掀开，使用*表示
	//2，已经掀开的用数字表示，
	char show_map[MAX_ROW + 2][MAX_COL + 2];
	//第二个数组表示雷阵
	//对于minemap里的元素也有两种情况
	//1，这个位置是地雷，用1表示
	//2，这个位置不是地雷，用0表示
	char mine_map[MAX_ROW + 2][MAX_COL + 2];
	int blank_cnt = 0;
	//对两个数组进行初始化
	Init(show_map, mine_map);
	//打印初始地图
	DisplayMap(show_map);
	while (1){
		//3.让玩家输入坐标（并判定坐标是否合法）、
		int row, col;
		printf("请输入坐标：");
		scanf_s("%d %d",&row,&col);
		if (row <= 0 || row > MAX_ROW
			|| col <= 0 || col > MAX_COL){
			printf("您的输入不合法，请重新输入！");
			continue;
		}
		//4.判定玩家是否踩雷，如果踩雷，游戏结束,展示所有雷
		if (mine_map[row][col] == '1'){
			printf("踩雷了!游戏结束！\n");
			DisplayMap(mine_map);
			break;
		}
		//5.如果没踩雷，判定是否格子已全部掀开，玩家胜利
		++blank_cnt;
		//此时这里的10,magic number
		if (blank_cnt == MAX_ROW * MAX_COL - DEFAULT_MINE_COUNT){
			printf("扫雷成功!\n");
			DisplayMap(mine_map);
			break;
		}
		//6.统计该位置周围有几个雷，并且把这个数字更新到地图上
		UpdateShowMap(show_map,mine_map,row,col);
		DisplayMap(show_map);
	}
}
void Start(){
	//游戏入口函数
	while (1){
		int choice = Menu();
		if (choice == 0){
			break;
		}
		Game();
	}
}
int main(){
	Start();
	system("pause");
	return 0;
}