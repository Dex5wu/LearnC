//题目:二分法查找有序数组中某个数

#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int to_find = 7;
	int left = 0;//下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//下标
	int mid = 0;//下标
	//[left,right]当前要进行查找的区间
	while (left <= right) {
		mid = (left + right) / 2;
		if (to_find < arr[mid]){
			//应该在mid左侧继续查找;
			right = mid - 1;
		}else if (to_find>arr[mid]) {
			//在mid右侧查找;
			left = mid + 1;
		}else {
			//找到了;
			break;
		}
	}
	if (left <= right) {
		//只有break或者left>=right时候才会跳出循环.那么left<=right时候就是找到了.
		printf("找到了!%d\n", mid);
	}else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}
