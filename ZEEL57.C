//100,90,80,70......10
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=100;
do
{
printf("%i \t",a);
a=a-10;
}while(a>=10);
getch();
}