#include <stdio.h>
#include <stdlib.h>


//��
//int Add(int x, int y){
//	return x + y;
//}

//�� 
int Divide(int x, int y, int* ok){
	if (y == 0){
		*ok = 0;
		return 0;
	}
	*ok = 1;
	return x / y;
}

int main(){
	int ok;
	int ret = Divide(10, 2, &ok);
	if (ok == 1){
		printf("�ɹ������Ϊ%d\n",ret);
	}else{
		printf("����ʧ�ܣ�\n");
	}
	
	system("pause");
	return 0;
}
 

