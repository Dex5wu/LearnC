#include<stdio.h>
#include<stdlib.h>

//1. �ж�һ�����Ƿ�Ϊ����
//2. ���1 - 100֮�������

int IsOdd(int num){
	if (num % 2 == 1){
		return 1;
	}
	return 0;
}

int main(){
	int num = 1;
	while (num <= 100){
		if (IsOdd(num)){
			printf("%d\n", num);
		}
		num += 1;
	}
	system("pause");
	return 0;
}