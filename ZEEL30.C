#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("\nenter value of a:");
scanf("%i",&a);
printf("\nenter value of b:");
scanf("%i",&b);
printf("\nenter value of c:");
scanf("%i",&c);
 if(a>b)
 {
   if(a>c)
   {
   printf("a is bigger");
   }
   else
   {
   printf("c is bigger");
   }
 }
 else
 {
   if(b>c)
   {
   printf("b is bigger");
   }
   else
   {
   printf("c is bigger");
   }
 }

getch();
}