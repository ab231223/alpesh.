#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{

 int a,b,ans;
 clrscr();
 printf("enter your amount :");
 scanf("%d%d",&a,&b);
 ans=sum(a,b);
 getch();
}
int sum(int a,int b)
{
int total;
total=a+b;
return total;

}