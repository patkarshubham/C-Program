#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,ld=0,rd=0;
		printf("enter the element :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nshow matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		ld=ld+a[i][j];		
}
	j=2;
		for(j=0;j<3;j++)
		{
			rd=rd+a[i][j];
		j--;
		}
	printf("\nsum of left diagnol : %d",ld);
		printf("\nsum of right diagnol : %d",rd);
	getch();
}
