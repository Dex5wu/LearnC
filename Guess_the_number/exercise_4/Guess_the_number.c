//дһ�������ֵ���Ϸ.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Munu(){
	printf("������������һ��1-100����,�����¶���,�Ҿ�����ٺٺ�~~\n");
	printf("����1,��ʼ\n");
	printf("����0,�ټ�\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game(){
	srand((unsigned int)time(0));//�����������,time(0)��ȡ��ǰʱ���.
	int result = rand() % 100 + 1;
	while (1){
		printf("������Ҫ�µ�����:");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("����\n");
		}else if (num>result) {
			printf("����\n");
		}else {
			printf("��ϲ������!����һ�ΰ�!\n");
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
			printf("������\n");
			break;
		}
	}
	system("pause");
	return 0;
}