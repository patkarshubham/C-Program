#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT.gm;
	int x1=100,y1=100;
	int x2=200,y2=200;
	initgraph(&gd,&gm,"c");
	printf("Enter the string : ");
	gets(a);
	printf("\nShow the string : ");
	puts(a);
	l=strlen(a);
	printf("\nLength of string : %d",l);
	getch();
}
