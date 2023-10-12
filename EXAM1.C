#include<stdio.h>
#include<conio.h>
void main()
{
     int a;
     clrscr();
     printf("----:enter the odd & even value:----");
     scanf("%d",&a);
     if(a%2==1)
     {
	printf("the amount is odd");
     }
     else
     {
	printf("the amount is even");
     }
     getch();
}
