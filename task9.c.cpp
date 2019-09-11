#include<stdio.h>
int main()
{
	int a,b,i;
	unsigned long long fact=1;
	printf("enter the number");
	scanf("%d",&a);
	if(a<0)
	{
		printf("you have given an invalid number");
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			fact=fact*i;
		}
		printf("factorial of %d= %llu",a,fact);
	}
}
