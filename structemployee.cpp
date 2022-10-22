#include<stdio.h>
#include<conio.h>
struct employee
{
	int empid;
	char name[20];
	int age;
	char address[20];
	
}   ;
int main()
{
	struct employee e1,e2;
	printf("\t\t\tEnter the first employee detail :\n");
	printf("\nEnter the first employeeId : ");
	scanf("%d",&e1.empid);
	printf("\nEnter the first employee Name : ");
	scanf("%s",&e1.name);
	printf("\nEnter the first employee Age : ");
	scanf("%d",&e1.age);
	printf("\nEnter the first employee Address : ");
	scanf("%s",&e1.address);
	printf("\n\t\t\tEnter the second employee detail :\n");
	printf("\nEnter the second employeeId : ");
	scanf("%d",&e2.empid);
	printf("\nEnter the second employee Name : ");
    scanf("%s",&e2.name);
	printf("\nEnter the second employee Age : ");
 	scanf("%d",&e2.age);
	printf("\nEnter the second employee Address : ");
 scanf("%s",&e2.address);
	printf("\nShow the detail of employees :\n");
	printf("\nShow the detail of first employees :\n");
	printf("\nempId = %d\nName = %s\nAge = %d\nAddress = %s",e1.empid,e1.name,e1.age,e1.address);
	printf("\nShow the detail of second employees :\n");
	printf("\nempId = %d\nName = %s\nAge = %d\nAddress = %s",e2.empid,e2.name,e2.age,e2.address);
getch();
}


