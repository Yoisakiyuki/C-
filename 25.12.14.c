/*tow_fucn.c--一个文件中包含两个函数*/

#include <stdio.h>
void butler(void); /*ANSI ISO C函数原型*/
int main(void)
{
	printf("I will summon the butler fuction.\n ");
	butler();//调用自定义的函数
	printf("Yes,bring my some tea and writeable DVD.\n");
	return 0;	
}
void butler(void)  /*函数定义开始*/
{
	printf("You rang,sir?\n");
}