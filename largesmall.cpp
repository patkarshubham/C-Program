#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],p1=0,p2=0,s,l;
	for(i=0;i<10;i++)
	{
	printf("enter the num : \n");
		scanf("%d",&a[i]);
	}
l=a[0];
s=a[0];
	for(i=0;i<10;i++)
	{
		if(l<a[i])
{
        l=a[i];
        p1=i+1;
    }
    else
    if(s>a[i])
{
	s=a[i];
	p2=i+1;
}}
printf("the largest num =%d\n",l);
printf("position of largest num  =%d\n",p1);
printf("the smallest num =%d\n",s); 
printf("position of smallest num =%d\n",p2);
getch();
}

