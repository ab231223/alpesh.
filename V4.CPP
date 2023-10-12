#include<stdio.h>
#include<conio.h>
int multi();
void main()
{
clrscr();
int ans;
ans=multi();
  printf("%d",ans);
  getch();

}

  int multi()
  {
   int a,b,c;
   scanf("%d%d",&a,&b);
   c=a*b;
   return c;
 }