#include<stdio.h>
#include<conio.h>
void main()
//palindrom
{
 int no=121,r,sum=0,temp;
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
  printf("no is palindrom");
 }
 else
 {
 printf("no is not palindrom");
 }

 getch();
}