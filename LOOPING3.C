#include<stdio.h>
#include<conio.h>
//99 88 77 ...11
void main()
{

  int a=99;
  clrscr();
  do
  {
   printf("%i\n",a);
   a=a-11;
  }while(a>=11);

  getch();

}
