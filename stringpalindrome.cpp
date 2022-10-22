#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int i=0,l=0,k=0;
	printf("Enter the string : ");
	gets(a);
	while(a[i]!='\0')
	{
		l++;
		i++;
	}
	l=l-1;
	i=0;
	while(l>=0)
	{
		b[i]=a[l];
		i++;
		l--;
	}
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]=b[i])
		k=1;
		break;
	}
	if(k==1)
	printf("thiss string is not palindrome");
	else
	printf("\nthis string are palindrome");
	getch();
}
