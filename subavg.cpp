#include<stdio.h>
#include<conio.h>
int main()
{
	int i,avg,s=0,n,m;
printf("num of subject");
scanf("%d",&n);
		 for(i=0;i<n;i++)
		 {
		 
		printf("enter the marks ");
    	scanf("%d",&m);
    	s=s+m;
    	i=i+1;
		}
    	
		for(i=0;i<m;i++)
		{
		
		printf("sum of mark %d",s);
		 avg=s/n;
		
	printf("show average =%d ",avg);
}
	getch();
}
