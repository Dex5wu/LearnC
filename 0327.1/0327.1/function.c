#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>




int main(){
	int arr[4] = { 9, 5, 2, 7 };
	int i = 0;
	while (i < 4){
		printf("%d\n", arr[i]);
		//i = i + 1;
		/*i += 1;*/
		/*i++;*/
		++i;
	}
	system("pause");
	return 0;
}



//int Add(int a,int b){
//	int ret = a + b;
//	return ret;
//}
//
//int main(){
//	int x = 0;
//	int y = 0;
//	printf("请输入两个整数！逗号隔开\n");
//	scanf("%d,%d", &x, &y);
//	int ret = Add(x, y);
//	printf("ret=%d\n", ret);
