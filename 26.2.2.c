/*使用while循环，计算1+2+3+。。。+100等于多少*/

#include<stdio.h>
int main(void)
{
	int num;
	int tatol;
	num = 1;
	tatol = 0;
	while (num <= 100)
	{
		tatol = tatol + num;
		num = num + 1;
	}
	printf("%d\n", tatol);

	return 0;
}