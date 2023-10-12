//check height
#include<stdio.h>
#include<conio.h>
#define P 180
void main()
{
   clrscr();
   int height;
   printf("Enter number for height=");
   scanf("%i",&height);
   if(height>=P)
   {
     printf("you are tall");
   }
   else
   {
     printf("you are short");
   }
   getch();
}