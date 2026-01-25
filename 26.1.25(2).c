#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	
	printf("What's ypur name?");
	scanf_s("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}