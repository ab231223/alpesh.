#include<stdio.h>
#include<conio.h>
void main()
{

 int a,b,c;
 clrscr();
      printf("enter a,b and c:");
      scanf("%i %i %i",&a,&b,&c);
      if(a<b)
      {
	if(a<c)
       {
	printf("a is less");
       }
       else
       {
	printf("c is less");
       }

     }
      else
     { if(b<c)

       {
	printf("b is less");
       }
       else
       {
	printf("c is less");
       }
     }
 getch();
}
