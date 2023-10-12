#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
clrscr();
int a,b;
scanf("%d%d",&a,&b);
sum(a,b);
getch();
}

     void sum (int x ,int y)
     {
     int c;
     c=x+y;
     printf("%d",c);
     }
