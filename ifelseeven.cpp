#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	 printf("Enter the number for check num is even or odd : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Number is even",n);
	}
	else 
	{
	printf("Number is odd",n);
	}
	getch();
}

