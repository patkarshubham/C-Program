#include<stdio.h>
#include<conio.h>
int main()
{
	int h=0,m=0,s=0;
	printf("Time formate HH:MM:SS :\n");
	scanf("%d%d%d",&h,&m,&s);
	start:
		for(h;h=24;h++)
		{
			for(m;m<60;m++)
			{
				for(s;s<60;s++)
				{

				printf("\n\n\t\t%d %d %d",h,m,s);
				if(h<12)
				{
					printf("AM") ;
					
				}
				else
				{
					printf("PM");
					
				}
				printf("\n\n\\t\t\tSunday 14 February 2021");
				for(double i=0;i<361999;i++)

			//	i++;

				i--;
			}
			s=0;
			
		}
		m=0;
		
}
h=0;

goto start;
getch();
}
