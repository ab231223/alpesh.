#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
printf("enter your fact");
scanf("%d",&n);
for (i=n; i>=1; 1--)
{
 fact=fact*i;
}
 printf("%d",fact);
getch();
}