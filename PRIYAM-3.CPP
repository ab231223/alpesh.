#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 int n,ans;
 clrscr();
 printf("enter thwe value :");
 scanf("%d",n);
 ans= fact(n);
 getch();
}

 int fact(n)
 {
 int ans;
	if(n==0)
	{
	  return 1;
	}
	else
	{
	  return fact(n-1)*n;
	}
	printf("THE TOTAL IS %d",ans);
 }