#include<stdio.h>
int main()
{
	int a[10],min,max,i;
	printf("enter the array elements");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<=10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			
		}
		
	}	
	printf("minimum=%d",min);
	for(i=0;i<=10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("maximam=%d",max);
	return 0;
}
