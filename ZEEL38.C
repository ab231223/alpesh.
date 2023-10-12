#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,ans;
char op;
printf("enter value of a:");
scanf("%i",&a);
printf("\nenter value of b:");
scanf("%i",&b);
fflush(stdin);
printf("\n+.for add\n-.for sub\n*. for multi\n/. for div ");
printf("\n enter your choice:");
scanf("%c",&op);
 if(op=='+')
 {
 ans=a+b;
 printf("add=%i",ans);
 }
 else if(op=='-')
 {
 ans=a-b;
 printf("sub=%i",ans);
 }
 else if(op=='*')
 {
 ans=a*b;
 printf("multi=%i",ans);
 }
 else if(op=='/')
 {
  ans=a/b;
  printf("div=%i",ans);
 }
 else
 {
 printf("invalid choice");
 }


getch();


}