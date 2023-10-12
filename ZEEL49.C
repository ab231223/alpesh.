#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,ans,choice;
 printf("enter value of a and b:");
 scanf("%i %i",&a,&b);
  printf("choose the number 1.for add\n2.for minus\n3. for multi\n4. for devide\n");
 printf("enter number to choose day:");
 scanf("%i",&choice);
 switch(choice)
 {
 case 1:
 ans=a+b;
 printf("add=%i",ans);
 break;
 case 2:
 ans=a-b;
 printf("min=%i",ans);
 break;
 case 3:
 ans=a*b;
 printf("multi=%i",ans);
 break;
 case 4:
 ans=a/b;
printf("devide=%i",ans);
break;
 default:
 printf("invalid");
 }
 getch();
 }