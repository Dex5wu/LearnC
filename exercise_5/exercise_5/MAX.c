#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
	//ÈýÄ¿ÔËËã·ûreturn a > b ? a : b;
}

int main() {
	printf("%d\n", Max(10, 20));
	system("pause");
	return 0;
}