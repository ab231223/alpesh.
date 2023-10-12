#include<stdio.h>
#include<conio.h>
void multi(int,int);
void main()
{
clrscr();
int a,b;
scanf("%d%d",&a,&b);
multi(a,b);
getch();
}

     void multi (int x ,int y)
     {
     int c;
     c=x*y;
     printf("%d",c);
     }
