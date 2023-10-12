#include<stdio.h>
#include<conio.h>
void main ()
{

 int a;
 clrscr();
 printf("Enter your marks:");
 scanf("%i",&a);
 if(a>=0)
 {
    printf("you are positive");
 }
 else
 {
   printf("you are  negative");
 }
 getch();
 }