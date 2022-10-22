#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
		{
		
		printf("enter the num : \n");
		scanf("%d",&a[i][j]);
	}
}
printf("show the matrix :\n");
	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
		{		
			
		printf("%3d",a[i][j]);
}
printf("\n");
}
getch();
}

