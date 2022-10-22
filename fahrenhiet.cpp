//celsius to fahrnhit f = (9*c)/5+32
#include<stdio.h>
#include<conio.h>
int main()
{
	float c,f;
	printf("enter value for c : ");
	scanf("%f",&c);
	f = (9*c)/5+32;
	printf("fahrenhiet = %f",f);
	getch();
}
