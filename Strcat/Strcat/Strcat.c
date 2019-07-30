#include"stdio.h"
#include"stdlib.h"
#include"assert.h"
char* Strcat(char* dest, const char* src) {
	assert(dest != NULL);
	assert(src != NULL);
	int i = 0;
	for (; dest[i] != '\0'; ++i);
	for (int j = 0; src[j] != '\0'; ++j, ++i) {
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}
int main() {
	char str1[1024] = "Hello";
	char str2[] = "World!";
	Strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}