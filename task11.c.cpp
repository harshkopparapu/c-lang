#include<stdio.h>
struct book
{
	char t[40];
	char a[40];
	char g[40];
};
void book();
main()
{
	book();
}
void book()
{
	struct book b1;
	printf("enter the title");
	scanf("%s",&b1.t);
	printf("enter author name");
	scanf("%s",&b1.a);
	printf("enter the genre");
	scanf("%s",&b1.g);
	printf(" title= %s \nauthor= %s \ngenre= %s",b1.t,b1.a,b1.g);
}

