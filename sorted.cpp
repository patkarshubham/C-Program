#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,temp;
		printf("Enter the element : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	 for(j=0;j<10-i;j++)
	 {
		if(a[j]>a[j+1])	
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
     	}
	}
   }
printf("\nsorted element :\n");
for(i=0;i<10;i++)
{
	printf("%2d",a[i]);	
}
getch();
}
