// v= 3.14*r*r*h;
#include<stdio.h>

#include<conio.h>
int main()
{
	int v,h,r;
	printf("enter num for h and r : ");
	scanf("%d%d",&r,&h);
	v=3.14*r*r*h;
	printf("show the cylinder : %d",v);
	getch();
}
