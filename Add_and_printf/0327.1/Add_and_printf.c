//�ֱ����һ���������ÿ��Ԫ��

#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[4] = { 9, 5, 2, 7 };
	int i = 0;
	while (i < 4){
		printf("%d\n", arr[i]);
		++i;
	}
	system("pause");
	return 0;
}




/*ʵ�ּӷ�����

int Add(int a,int b){
	int ret = a + b;
	return ret;
}

int main(){
	int x = 0;
	int y = 0;
	printf("�������������������Ÿ���\n");
	scanf("%d,%d", &x, &y);
	int ret = Add(x, y);
	printf("ret=%d\n", ret);*/
