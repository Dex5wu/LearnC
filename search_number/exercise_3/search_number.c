//在一个数组中查找具体的某个数字n。
#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[] = { 9, 5, 2, 7, 8, 6, 4 };
	int to_find = 7;
	int i = 0;
	for (; i < sizeof(arr) / sizeof(arr[0]); ++i){
		if (to_find == arr[i]){
			break;
		}
	}
	if (i == sizeof(arr) / sizeof(arr[0])){
		printf("没找到\n");
	}else {
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}