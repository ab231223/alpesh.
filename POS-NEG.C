//possitive & negative
#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int number;
   printf("Enter number for number=");
   scanf("%i",&number);
   if(number>=0)
   {
     printf("possitive");
   }
   else
   {
     printf("negative");
   }
   getch();
}