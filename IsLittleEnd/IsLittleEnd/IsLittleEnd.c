//��Ƴ����жϵ�ǰ�������ֽ���
//�����С��,���� 0
//����Ǵ��,���� 1
#include<stdio.h>
#include<stdlib.h>

int IsLittleEnd(){
	int a = 0x11223344;
	char* b = (char*)&a;
	if (*b == 0x11){
		//���͵�ַ�������Ƿ������ֵĸ�λ
		return 1;
	}
	return 0;
}
int main(){
	printf("%d\n", IsLittleEnd());

	system("pause");
	return 0;
}