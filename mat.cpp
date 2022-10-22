#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter the rows and columns =");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	printf("Enter the elements in first matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);

		}
	}
	printf("Enter the elements in second matrix\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];

		}
	}
	printf("The sum matrix is= \n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%3d",c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}

