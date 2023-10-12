#include<stdio.h>
#include<conio.h>
//1 8 15 22... 130 140
void main()
{

  int a=1,b=90;
  clrscr();
  while(a<=43)
  {
   printf("%i\n",a);
   a=a+7;
  }
  while(b<=140)
  {
   printf("%i\n",b);
   b=b+10;
  }
  getch();

}
