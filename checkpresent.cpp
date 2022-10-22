 #include<stdio.h>
 #include<conio.h>
int main() 
  {
    int a[5],s,i,n,c=0;
    printf("Enter size of array. \n");
    scanf("%d",&s);
    printf("Enter the num for check num \n",s);
    scanf("%d",&s);
    for (i=0;i<s;i++)
	 {
        scanf("%d\n",&a[i]);
    }
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=0;i<s;i++)
	 {
        if (n==a[i])
		 {
            c++;
        }
    }
    if (c>0) 
	{
        printf("num exits",n);
    } else {
        printf("not exists",n);
    }
    getch();
 }
