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

	cout << a << endl;//����׶���10�滻��a
	cout << *pa << endl;//a�ռ�ȷʵ�Ѿ������100
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
	int& ret = Add(1, 2);//ret��Add(1,2)����ֵ�ı���.�о���,���÷Ƿ��ռ�,
	Add(3, 4);//���ý�����ԭAdd����ֵ��ַ����������ֵ7.
	printf("%d\n", ret);

	printf("%d\n", ret);//Ϊʲô�ڶ����ֱ���? 


	return 0;
}
#endif


