#include<stdio.h>
#include<conio.h>
void main()
{

   int a,b,c,d;
   clrscr();
   printf("Enyar a,b,c and d value");
   scanf("%i %i %i %i,",&a,&b,&c,&d);
   if(a>b && a>c && a>d)
   {
   printf("a is gretter");

   }
    else if (b>a && b>c && b>d)
    {
    printf("b is gretter");
    }
   else if (c>a && c>b && c>d)
   {
    printf("c is gretter");

   }
   else if (d>a && d<b && d>c)
   {
    printf("b is gretter");
   }
 getch();

}
