#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=10;
clrscr();
do
{
printf("\n%i\t%i",a,b);
a=a+1;
b=b-1;
}while(a<=10);
getch();
}