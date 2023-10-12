#include<stdio.h>
#include<conio.h>
/*formula
f=(c*1.8)+32*/
void main()
{
clrscr();
int f,c;
printf("Enter c Value:");
scanf("%i",&c);
f=(c*1.8)+32;
printf("f=%i",f);
getch();
}