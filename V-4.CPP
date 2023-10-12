#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();

	printf("enter thr number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{

	    printf("ais grater than b and c");
	}
	else  if (b>a&&b>c)
	{
	    printf("b is grater than a and c");
	 }

	 else
	 {
	    printf("c is grater than a and b");

	 }
	 getch();
	}