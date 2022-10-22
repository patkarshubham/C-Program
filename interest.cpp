// interest a=p(1+r*t)
#include<stdio.h>
#include<conio.h>
int main()
{
	float a,p,r,t;
	printf("enter the value : ");
	scanf("%f%f%f",&p,&r,&t);
	a=p*(1+r*t);
	printf("a = %f",a);
	
	getch();
}
