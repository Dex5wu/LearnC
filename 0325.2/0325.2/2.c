#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int choice = 0;
	printf("���ƴ���ô����𣿣�ѡ��1 or 0��:>");
	scanf("%d", &choice);
	if (choice == 1){
		printf("��֣�����к�offer\n");
	}
	else{
		printf("�������ؼ����·�\n");
	}
	system("pause");
	return 0;
}
