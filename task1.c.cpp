#include<stdio.h>
int main()
{
	char name[20];
	int a;
	long long int b;
	printf("name:");
	scanf("%s",&name);
	printf("age:");
	scanf("%d",&a);
	printf("phone number:");
	scanf("%lld",&b);
	printf("/nname: %s, /nage: %d, /nphone number: %lld",name,a,b);
    return 0;
}
