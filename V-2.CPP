#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();

      printf("entey the numbar:=");
      scanf("%d",&n);

      if(0<n)
      printf("%d is positve numbar");
      else if(0>n)
      printf("%d is negative numbar");
      else
      printf("%d is zero numbar",n);

    getch();

    }