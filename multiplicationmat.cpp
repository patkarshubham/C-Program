#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
		printf("Enter the num for matrix A : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nEnter the num for matrix B : ");
   	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
		printf("\nShow the matrix A :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		
		}
			printf("\n");
	}
		printf("\nShow the matrix B :\n");
   	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",b[i][j]);
			
		}
			printf("\n");
	}
		printf("\nShow the matrix Multiplication C :\n");
      	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",c[i][j]);	
		}
		printf("\n");
	}
	getch();
}

