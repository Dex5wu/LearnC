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
		printf("Ã»ÕÒµ½\n");
	}else {
		printf("%d\n", i);
	}


	
	
	system("pause");
	return 0;
}