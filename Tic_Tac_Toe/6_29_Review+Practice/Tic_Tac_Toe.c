//��������Ϸ

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

char g_board[ROW][COL];

void Init(){
	srand((unsigned int)time(0));
	for (int row = 0; row < ROW; ++row){
		for (int col = 0; col < COL; ++col){
			g_board[row][col] = ' ';
		}
	}
}

void Print(){
	for (int row = 0; row < ROW; ++row){
		printf("| %c | %c | %c |\n", g_board[row][0], 
			g_board[row][1], g_board[row][2]);
		if (row != ROW - 1){
			printf(" ---|---|---\n");
		}
	}
}

void PlayerMove(){
	printf("��������ӣ�\n");
	while(1){
		printf("���������������0��0---->");
		int row, col;
		scanf_s("%d��%d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("���������Ƿ������������룡\n");
			continue;
		}
		if (g_board[row][col] != ' '){
			printf("���������Ƿ������������룡\n");
			continue;
		}
		g_board[row][col] = 'x';
		break;
	}
}

void ComputerMove(){
	printf("�������ӣ�\n");
	while (1){
		int row = rand() % ROW;
		int col = rand() % COL;
		if (g_board[row][col] != ' '){
			continue;
		}
		g_board[row][col] = 'o';
		break;
	}
}

char CheckWinner(){
	for (int row = 0; row < ROW; ++row){
		if (g_board[row][0] == g_board[row][1]
			&& g_board[row][0] == g_board[row][2]
			&& g_board[row][0]!=' '){
			return g_board[row][0];
		}
	}
	for (int col = 0; col < COL; ++col){
		if (g_board[0][col] == g_board[1][col]
			&& g_board[0][col] == g_board[2][col]
			&& g_board[0][col] != ' '){
			return g_board[0][col];
		}
	}
	if (g_board[0][0] == g_board[1][1]
		&& g_board[0][0] == g_board[2][2]
		&& g_board[0][0]!=' '){
		return g_board[0][0];
	}
	if (g_board[2][0] == g_board[1][1]
		&& g_board[2][0] == g_board[0][2]
		&& g_board[0][0] != ' '){
		return g_board[2][0];
	}
	if (g_board[0][0] != ' '&& g_board[0][1] != ' '
		&& g_board[0][2] != ' '&& g_board[1][0] != ' '
		&& g_board[1][1] != ' '&& g_board[1][2] != ' '
		&& g_board[2][0] != ' '&& g_board[2][1] != ' '
		&& g_board[2][2] != ' '){
		return 'd';//draw ����
	}
	return ' ';
}

int main(){
	Init();
	char winner;
	while (1){
		Print();
		PlayerMove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}
	}
	if (winner == 'x'){
		printf("���ʤ\n");
	}
	else if (winner == 'o'){
		printf("����ʤ\n");
	}
	else {
		printf("����\n");
	}

	system("pause");
	return 0;
}