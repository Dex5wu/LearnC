//ʵ��strcpy

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdint.h>
char* Strcpy(char* dest, const char* src) {
	assert(dest != NULL);
	assert(src != NULL);
	int64_t i = 0;//intֻ�ܱ�ʾ2G���µ��ַ���
	for (; src[i] != '\0'; ++i) {
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
int main() {
	char str[] = "hello";
	Strcpy(str, "world");//���ܱ�ԭ�ַ�����
	printf("%s\n", str);
	system("pause");
	return 0;
}