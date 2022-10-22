#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],p1=0,s;
	for(i=0;i<10;i++)
	{
	printf("enter the num : \n");
		scanf("%d",&a[i]);
	}
l=a[0];
	for(i=0;i<10;i++)
	{
		if(l<a[i])
{
        l=a[i];
        p1=i+1;
    }
}
printf("the largest num =%d\n",l);
printf("position of largest num  =%d\n",p1);
getch();
}

