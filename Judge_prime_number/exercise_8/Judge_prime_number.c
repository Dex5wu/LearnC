//题目1,判定一个数是不是素数
//题目2,输出1-100里所有的素数
//一个整数如果只能被1和自身整除，此时这个数字就是素数,0和1不是素数，2是素数
//只要找到一个能整除的数字，就说明不是素数
//但是要证明一个数是素数，需要确认所有（除1及自身）数字都不能整除

#include <stdio.h>
#include <stdlib.h>

int IsPrime(int x){
	if (x == 1){
		return 0;
	}
	if (x == 2){
		return 1;
	}
	for (int i = 2; i < x; ++i){
		//优化：用sqrt（x）替换x，即i运行到根号x就可以停止运行了
		//因为i到根号x范围内的整数已经被证明完，另一半已经不用证明了。
		if (x % i == 0){
			return 0;
		}
	}
	return 1;
	//运行结果为1则是素数，0则不是。
}

int main(){
	for (int i = 1; i <= 100; ++i){
		if (IsPrime(i)){
			printf("%d\n", i);
		}
	}
	//printf("%d\n", IsPrime(23));
	system("pause");
	return 0;
}