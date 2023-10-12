#include<stdio.h>
#include<conio.h>
// without arg without rtn
void less();
void main()
{
clrscr();
less();
getch();
}
void less()
{
  int a,b,ans;
  scanf("%i %i",&a,&b);
  ans=a*b;
  printf("ANS=%i",ans);

{