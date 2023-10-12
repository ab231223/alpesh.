#include<stdio.h>
#include<conio.h>
//1 A 2 B...10 J
void main()
{

  int a=1,b=65;

  clrscr();

  while(a<=10)
  {
    printf("%i %c ",a,b);
    a=a+1;
    b=b+1;

  }

  getch();

}
