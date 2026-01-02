#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;//在unsigned int的范围内，而不在int的范围内，2147483647是int范围的最大值
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("un = %u and not %d \n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);
	
	return 0;
}