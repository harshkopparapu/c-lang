#include<stdio.h>
int main()
{
	int a,b,c,sum;
	float avg;
	printf("marks a:");
	scanf("%d",&a);
	printf("marks b:");
	scanf("%d",&b);
	printf("marks c:");
	scanf("%d",&c);
	sum=a+b+c;
	avg=(a+b+c)/3;
	printf("sum= %d, avg= %f",sum,avg);
	return 0;
}
