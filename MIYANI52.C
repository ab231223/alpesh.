#include<stdio.h>
#include<conio.h>
void main()
{
  char day;
  clrscr();
  printf("M.monday\nT.Tuesday\nW.wadsday\nt.thleday\nF.friedyd\nS.sutarday\ns.sanday\n ");
  scanf("%c",&day);
 if(day=='M')
 {
  printf("monday");

 }
  else if(day=='T')

  {
   printf("Tuesday");
  }
  else if (day=='W')
  {
   printf("wadsday");
  }
  else if (day=='t')
  {
   printf("thleday");

  }
   else if (day=='F')
   {
   printf("frieday");
   }
  else if (day=='S')
  {
  printf("satarday");
  }
 else if (day=='s')
 {
 printf("sanday");

 }


else
{
 printf("not involied");
}
 getch();


  }