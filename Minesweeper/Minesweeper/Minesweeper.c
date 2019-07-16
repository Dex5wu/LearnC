//10X10ɨ����Ϸ

#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 10
#define MAX_COL 10
#define DEFAULT_MINE_COUNT 10

int Menu(){
	printf("======================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
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
	//�ܹ�����Ĺ����N����,�ŵ�������
	int mine_count = DEFAULT_MINE_COUNT;
	while (mine_count>0){
		//������õ���
		//����������׵�����
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (mine_map[row][col] == '1'){
			//��ǰλ���Ѿ�������,��Ҫ���²��������
			continue;
		}
		mine_map[row][col] = '1'; 
		--mine_count;
	}
}
void DisplayMap(char map[MAX_ROW + 2][MAX_COL + 2]){
	printf("    ");
	//��ӡ��һ��,������
	for (int i = 1; i <= MAX_COL; ++i){
		printf("%d ", i);
	}
	printf("\n");
	//��ӡ�ϱ߿�
	for (int i = 1; i <= MAX_COL; ++i){
		printf("---");
	}
	printf("\n");
	//���д�ӡ�����ͼ
	for (int row = 1; row <= MAX_ROW;++row){
		//����������ֲ�λΪ��λ��,1--->01.
		printf("%02d| ", row);
		for (int col = 1; col <= MAX_COL; ++col){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(char show_map[MAX_ROW + 2][MAX_COL + 2],
	char mine_map[MAX_ROW + 2][MAX_COL + 2],int row,int col){
	//�������Ҫ����mine_map������row,colλ������Χ�м�������
	//�ѽ��д����Ӧ��show_mapλ����
	//�˴��˸�λ�ò���Խ��,��Ϊ���˱߿�,[1,MAX_ROW],[0,MAX_ROW+1]
	
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
	//���о����һ��ɨ����Ϸ
	//ʹ��������ά��������ʾ��ͼ
	//��һ�������ʾ�����չʾ�ĵ�ͼ
	//�˴��ӱ߿�
	//����showmap���Ԫ�������������
	//1�����λ��û�б��ƿ���ʹ��*��ʾ
	//2���Ѿ��ƿ��������ֱ�ʾ��
	char show_map[MAX_ROW + 2][MAX_COL + 2];
	//�ڶ��������ʾ����
	//����minemap���Ԫ��Ҳ���������
	//1�����λ���ǵ��ף���1��ʾ
	//2�����λ�ò��ǵ��ף���0��ʾ
	char mine_map[MAX_ROW + 2][MAX_COL + 2];
	int blank_cnt = 0;
	//������������г�ʼ��
	Init(show_map, mine_map);
	//��ӡ��ʼ��ͼ
	DisplayMap(show_map);
	while (1){
		//3.������������꣨���ж������Ƿ�Ϸ�����
		int row, col;
		printf("���������꣺");
		scanf_s("%d %d",&row,&col);
		if (row <= 0 || row > MAX_ROW
			|| col <= 0 || col > MAX_COL){
			printf("�������벻�Ϸ������������룡");
			continue;
		}
		//4.�ж�����Ƿ���ף�������ף���Ϸ����,չʾ������
		if (mine_map[row][col] == '1'){
			printf("������!��Ϸ������\n");
			DisplayMap(mine_map);
			break;
		}
		//5.���û���ף��ж��Ƿ������ȫ���ƿ������ʤ��
		++blank_cnt;
		//��ʱ�����10,magic number
		if (blank_cnt == MAX_ROW * MAX_COL - DEFAULT_MINE_COUNT){
			printf("ɨ�׳ɹ�!\n");
			DisplayMap(mine_map);
			break;
		}
		//6.ͳ�Ƹ�λ����Χ�м����ף����Ұ�������ָ��µ���ͼ��
		UpdateShowMap(show_map,mine_map,row,col);
		DisplayMap(show_map);
	}
}
void Start(){
	//��Ϸ��ں���
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