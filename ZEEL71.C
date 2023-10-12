#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=5,c=10;
clrscr();
while(a<=10)
{
printf("\n%i\t%i\t%i",a,b,c);
a=a+1;
b=b+5;
c=c-1;
}
getch();
}