#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
	//��Ŀ�����return a > b ? a : b;
}

int main() {
	printf("%d\n", Max(10, 20));
	system("pause");
	return 0;
}