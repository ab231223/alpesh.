#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *p;
  char ch;
  clrscr();
  p=fopen("demo.txt","w");
  while (ch=getch())!='z')
  {
   pute(ch,p);
  }
  fclose (p);
  getch();
}
