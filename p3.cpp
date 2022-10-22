 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int a,b;
 	printf("Enter the value a : ");
 	scanf("%d",&a);
 	printf("Enter the value b : ");
 	scanf("%d",&b);
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("Show the swaped value :\n");
 	printf("a=%d\nb=%d",a,b);
    getch();
 }
