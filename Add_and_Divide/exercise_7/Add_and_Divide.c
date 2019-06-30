#include <stdio.h>
#include <stdlib.h>


//加
//int Add(int x, int y){
//	return x + y;
//}

//除 
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
		printf("成功！结果为%d\n",ret);
	}else{
		printf("调用失败！\n");
	}
	
	system("pause");
	return 0;
}
 

