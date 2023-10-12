#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,d;
   clrscr();
   printf("---::enter the value::---");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if(a>b);
   {
      printf("a is minimum");
   }
   else if(a>c)
   {
       printf("c is minimum");
   }
   else if(a>d)
   {
      printf("d is minimum");
   }
   getch();
}

