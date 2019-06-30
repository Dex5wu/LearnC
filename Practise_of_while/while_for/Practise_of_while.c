#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	while (num <= 9) {
		printf("num = %d\n", num);
		break;
		num += 1;
	}
	printf("num = %d\n", num);
	system("pause");
	return;
}