#include<stdio.h>
#include<conio.h>
void main()
{

   int a1,a2,a3,total,avg;
   clrscr();
   printf("enter value a1,a2,a3:");
   scanf("%i %i %i ",&a1,&a2,&a3);

   total= a1+a2+a3;
   avg=total/3;
   scanf("%i",&avg);

   if(avg>=35)
   {
    printf("c");
   }
   else
   {
    printf("b");
   }

    getch();

}