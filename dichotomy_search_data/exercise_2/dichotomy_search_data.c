//��Ŀ:���ַ���������������ĳ����

#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int to_find = 7;
	int left = 0;//�±�
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�±�
	int mid = 0;//�±�
	//[left,right]��ǰҪ���в��ҵ�����
	while (left <= right) {
		mid = (left + right) / 2;
		if (to_find < arr[mid]){
			//Ӧ����mid����������;
			right = mid - 1;
		}else if (to_find>arr[mid]) {
			//��mid�Ҳ����;
			left = mid + 1;
		}else {
			//�ҵ���;
			break;
		}
	}
	if (left <= right) {
		//ֻ��break����left>=rightʱ��Ż�����ѭ��.��ôleft<=rightʱ������ҵ���.
		printf("�ҵ���!%d\n", mid);
	}else {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}
