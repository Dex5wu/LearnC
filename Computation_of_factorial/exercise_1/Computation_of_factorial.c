#include <stdio.h>
#include <stdlib.h>

int Factor(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	//printf("%d\n",Factor(5));
	//����n�Ľ׳�.


	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += Factor(i);
	}
	printf("sum=%d\n", sum);
	//����1!+2!+...+10!


	system("pause");
	return 0;
}