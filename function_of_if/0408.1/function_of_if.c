//q1. 判断一个数是否为奇数
//q2. 输出1 - 100之间的奇数

#include<stdio.h>
#include<stdlib.h>

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