#include<stdio.h>
#include<conio.h>
void main()
{       int a,b,c;
	clrscr();
	printf("enter you 2 value ");
	scanf("%d%d" ,&a,&b);
	c=a;
	a=b;
	b=c;


	printf("a is - %d b is - %d",a,b);

	getch();

}