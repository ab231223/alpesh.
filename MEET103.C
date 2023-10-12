#include<stdio.h>
#include<conio.h>
void main()
//armstrong
{
 int no=153,r,sum=0,temp;
 clrscr();
 temp=no;
 while(no>0)
 {
 r=no%10;
 sum=sum+(r*r*r);
 no=no/10;
 }
 if(temp==sum)

 {
  printf("no is armstrong");
 }
 else
 {
 printf("no is not armstrong");
 }

 getch();
}