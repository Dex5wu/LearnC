#include <stdio.h>
#include <stdlib.h>


void Swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a = 1;
	int b = 23;
	Swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
//实参，形参，指针，解引用