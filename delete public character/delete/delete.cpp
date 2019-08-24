#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{//删除s1中出现的所有s2中的字符
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0; i < s2.size(); ++i)
	{
		int k;
		while ((k = s1.find(s2[i])) != -1)
			s1.erase(k, 1);
	}
	cout << s1 << endl;
	return 0;
}
