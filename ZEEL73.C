#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
for(a=1,b=5,c=10;a<=10;a=a+1,b=b+5,c=c-1)
{
printf("\n%i\t%i\t%i",a,b,c);
}
getch();
}