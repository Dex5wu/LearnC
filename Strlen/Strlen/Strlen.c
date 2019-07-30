//实现strlen,双重保险
#include<stdio.h>
#include<stdlib.h>

size_t Strlen(const char* str) {
	if (str == NULL) {
		return 0;
	}
	size_t count = 0;
	while (str[count] != '\0') {
		++count;
	}
	return count;
}
int main() {
	char str[] = "hello";
	char* p = str;
	if (p != NULL) {
		printf("%lu\n", Strlen(p));
	}
	system("pause");
	return 0;
}