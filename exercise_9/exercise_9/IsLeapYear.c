//��Ŀ1���ж����ꡣ
//��Ŀ2�����1997-2097����������꣨�������ܻ�100�꣬���ܹ����ٸ����꣩��
//�ܱ�4�����������꣬������Ϊ���������Ҳ��ܱ�400�����ĳ��⡣

#include <stdio.h>
#include <stdlib.h>

int IsLeapYear(int year){
	if (year % 100 == 0){
		if (year % 400 == 0){
			return 1;
		}
		return 0;
	}
	//���һ��������������꣬����һ��������ѿ��ж��Ƿ������ꡣ
	//����������ִ����һ�����������ж���
	if (year % 4 == 0){
		return 1;
	}
	return 0;
}

int main(){
	for (int year = 1997; year <= 2097; ++year){
		if (IsLeapYear(year)){
			printf("%d\n", year);
		}
	}
	system("pause");
	return 0;
}