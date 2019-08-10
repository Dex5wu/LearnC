#include<iostream>
using namespace std;













#if 0

void f(int) {
	cout << "f(int)" << endl;
}

void f(int*) {
	cout << "f(int*)" << endl;
}

int main() {
	f(0);
	f(NULL);
	f((int*)NULL);
	f(nullptr);
	return 0;
}
#endif

#if 0
int main() {
	const int a = 10;
	int* pa = (int*)& a;
	*pa = 100;

	cout << a << endl;//编译阶段用10替换了a
	cout << *pa << endl;//a空间确实已经变成了100
	return 0;
}
#endif 




#if 0
int& Add(int left, int right) {
	int ret = left + right;
	return ret;
}

int main()
{
	int& ret = Add(1, 2);//ret是Add(1,2)返回值的别名.有警告,引用非法空间,
	Add(3, 4);//调用结束后原Add返回值地址覆盖上了新值7.
	printf("%d\n", ret);

	printf("%d\n", ret);//为什么第二次又变了? 


	return 0;
}
#endif


