#include<stdio.h>
#include<string.h>
int main()
{
	 char str1[10];
	 char str[10];
	 printf("enter the string");
	 scanf("%s",&str1);
	 str=strlen(str1);
	 scanf("%s",&str);
	 if(str==str1)
	 {
	 	printf("the string is palindrome");
	 }
	 else
	 {
	 	printf("the string is not a palindrome");
	 }
	 
	 return 0;
}
