#include<stdio.h>
int main()
{
	float a,b,c,d;
	int choice;
	printf("enter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the celsius");
			scanf("%f",&a);
			b=(a*9/5)+32;
			printf("fahrenheit=%f",b);
			break;
		case 2:
		    printf("enter the fahrenhet");
			scanf("%f",&c);
			d=(c-32)*5/9;
			printf("celsius=%f",d);
			break;
		default :
		    printf("exit");	
	}       
    return 0;	
}

