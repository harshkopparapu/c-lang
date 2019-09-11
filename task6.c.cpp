#include<stdio.h>
#include<math.h>
int main()
{
	int number,ex,rem=0,res=0,n=0;
	printf("enter the number");
	scanf("%d",&number);
	for(ex=number;ex!=0;ex/=10)
	n=++n;
	for(ex=number;ex!=0;ex/=10)
	{
		rem=ex%10;
		res=res+pow(rem,n);
	}
	if(res==number)
	printf("the given number is armstrong");
	else
	printf("the given number is not a armstrong");
	return 0;
}
