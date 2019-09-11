#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<11;i++)
	{
		b=a*i;
		
		printf("\n%d*%d=%d",a,i,b);
		
	}
	
	return 0;
}
