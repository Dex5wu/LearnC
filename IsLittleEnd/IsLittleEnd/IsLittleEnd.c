//设计程序判断当前机器的字节序
//如果是小端,返回 0
//如果是大端,返回 1
#include<stdio.h>
#include<stdlib.h>

int IsLittleEnd(){
	int a = 0x11223344;
	char* b = (char*)&a;
	if (*b == 0x11){
		//检查低地址的内容是否是数字的高位
		return 1;
	}
	return 0;
}
int main(){
	printf("%d\n", IsLittleEnd());

	system("pause");
	return 0;
}