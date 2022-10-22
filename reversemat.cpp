#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j;
		printf("Enter The Element :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nShow Given Matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
		printf("\nShow Of Transpose Matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",a[j][i]);
		}
		printf("\n");
	}
	getch();
}
