#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int choice = 0;
	printf("你会拼命敲代码吗？（选择1 or 0）:>");
	scanf("%d", &choice);
	if (choice == 1){
		printf("坚持，你会有好offer\n");
	}
	else{
		printf("放弃，回家卖衣服\n");
	}
	system("pause");
	return 0;
}
