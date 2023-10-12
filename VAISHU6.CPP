#include<stdio.h>
#include<conio.h>
void main()
{
 int row,col,s;
 clrscr();
 for(row=1;row<=8;row++)
 {
   for(s=1;s<9-row;s++)
   {
    printf(" ");

   }
    if(row%2==1)

   {
     for(col=1;col<row;col++)
    {
     printf(" * ",col);
   }
  }
  printf("\n");
  }
 getch();
 }