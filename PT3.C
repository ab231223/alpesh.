#include<stdio.h>
#include<conio.h>
void main()
{
  int i,k,j;
  clrscr();
  for(i=1;i<=5;i=i+1)
  {
    for(k=1;k<=5-i;k=k+1)
    {
      printf(" ");
    }
    for(j=5;j>=6-i;j=j-1)
    {
      printf("%i",j);
    }
     printf("\n");
  }
  getch();
}