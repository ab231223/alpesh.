#include<stdio.h>
#include<conio.h>
void main()
{
   int ans,i,j;
   clrscr();
   for(i=1;i<=10;i=i+1)
   {
     for(j=1;j<=10;j=j+1)
    {
   ans=i*j;
   printf("%i*%i=%i\t",j,i,ans);
  }
 }

 getch();

}