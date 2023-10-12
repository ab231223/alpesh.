#include<stdio.h>
#include<conio.h>
//pollim
void main()
{

  int no=121,sum=0,r,temp;

  clrscr();
  temp=no;
  while(no>0)
  {
   r=no%10;
   sum=sum*10+r;
   no=no/10;

  }
  if(temp==sum)
  {
   printf("no pollim");
  }
  else
  {
   printf("not pollim");
  }

  getch();

}
