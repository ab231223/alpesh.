#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int age;
printf("enter your age:");
scanf("%i",&age);
if(age>=18)
{
printf("your voting is complete\nthank for vote");
}
else
{
printf("your age is not valid");
}
getch();
}