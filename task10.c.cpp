#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("enter the rows");
	scanf("%d",&rows);
	for(i=rows;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
} 
