//分别输出一个数组里的每个元素

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




/*实现加法函数

int Add(int a,int b){
	int ret = a + b;
	return ret;
}

int main(){
	int x = 0;
	int y = 0;
	printf("请输入两个整数！逗号隔开\n");
	scanf("%d,%d", &x, &y);
	int ret = Add(x, y);
	printf("ret=%d\n", ret);*/
