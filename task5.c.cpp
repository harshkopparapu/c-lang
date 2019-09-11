#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>0;i++)
	{
	 	r=i%10;
		s=s*10+r;
		i=i/10; 	
	}
    printf("the reverse number is %d",s);
    return 0;
}
