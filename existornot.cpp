#include<stdio.h>
#include<conio.h>
 int main()
{
    int a[10],i,n,check;
    printf("Enter size of the  array : ");
    scanf("%d",&n);
    printf("\nEnter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\nEnter the num for exist or not : ");
     scanf("%d",&check); 
    for(i=0;i<n;i++)
    {
        if(a[i]==check)
        {
			printf("\nnum exists ");  		 
        }
    else
   // {
	printf("\nnot num exits");
//}
}
getch();
}
