#include<stdio.h>
#include<conio.h>
int main()
{
	int a,*c;
	a=5;
	c=&a;
	printf("%d %d %d",c,&c,*c);
	getch();
}
