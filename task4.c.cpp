#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	char b[1000];
	printf("enter first name:");
	scanf("%s",&a);
	printf("enter last name:");
	scanf("%s",&b);
	strcat(a,b);
	printf("full name: %s",a);
	return 0;
}
