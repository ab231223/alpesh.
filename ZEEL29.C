#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
printf("\nenter value of a:");
scanf("%i",&a);
printf("\nenter value of b:");
scanf("%i",&b);
printf("\nenter value of c:");
scanf("%i",&c);
printf("\nenter value of d:");
scanf("%i",&d);
 if(a>b)
 {
   if(a>c)
   {
     if(a>d)
     {
     printf("a is bigger");
     }
     else
     {
     printf("d is bigger");
     }
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
     if(b>d)
     {
     printf("b is bigger");
     }
     else
     {
     printf("d is bigger");
     }
   }
   else
   {
     if(c>d)
     {
     printf("c is bigger");
     }
     else
     {
     printf("d is bigger");
     }

   }
   }
   getch();
 }