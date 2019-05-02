//题目1：判定闰年。
//题目2：输出1997-2097年间所有闰年（假设我能活100年，我能过多少个闰年）。
//能被4整除的是闰年，但其中为整百数年且不能被400整除的除外。

#include <stdio.h>
#include <stdlib.h>

int IsLeapYear(int year){
	if (year % 100 == 0){
		if (year % 400 == 0){
			return 1;
		}
		return 0;
	}
	//如果一个年份是整百数年，则上一条件语句已可判定是否是闰年。
	//非整百数则执行下一条件语句进行判定。
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