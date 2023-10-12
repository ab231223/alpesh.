#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,ans;
int op;
printf("enter value of a:");
scanf("%i",&a);
printf("\nenter value of b:");
scanf("%i",&b);
fflush(stdin);
printf("\n1.for add\n2.for sub\n3. for multi\n4. for div ");
printf("\n enter your choice:");
scanf("%i",&op);
 if(op==1)
 {
 ans=a+b;
 printf("add=%i",ans);
 }
 else if(op==2)
 {
 ans=a-b;
 printf("sub=%i",ans);
 }
 else if(op==3)
 {
 ans=a*b;
 printf("multi=%i",ans);
 }
 else if(op==4)
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