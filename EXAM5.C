#include<stdio.h>
#include<conio.h>
/*
   1
   2 1
   3 2 1
   4 3 2 1
   5 4 3 2 1
   6 5 4 3 2 1
   7 6 5 4 3 2 1
   8 7 6 5 4 3 2 1
   9 8 7 6 5 4 3 2 1
*/
void main()
{
   int i,j;
   clrscr();
   for(i=1;i<=9;i++)
   {
       for(j=i;j>=1;j--)
       {
	  printf("%i ",j);
       }
	  printf("\n");
    }
    getch();
}


