#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,sub;
 printf("enter of value of a and b:");
 scanf("%i %i",&a,&b);
 sub=a-b;
 printf("\nsub=%i",sub);
 if(sub>=0)
 {
 printf("\npossitive number");
 }
 else
 {
 printf("\nnagetive number");
 }
 getch();
}


