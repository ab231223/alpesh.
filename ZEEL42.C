#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int  f,c,r,d,m,km,op;
printf("choose the number to convert\n 1.for cel to feh\n 2.for dollar to rup\n 3.for km to meter");
printf("\nenter the your choice number:");
scanf("%i",&op);
if(op==1)
 {
 printf("\nenter the value of cel:");
 scanf("%i",&c);
 f=c*1.8+32;
 printf("feh=%i",f);
 }
 else if(op==2)
 {
 printf("enter the amount of doller:");
 scanf("%i",&d);
 r=d*84.50;
 printf("rupees=%i",r);
 }
 else if(op==3)
 {
 printf("enter the value of km:");
 scanf("%i",&km);
 m=km*1000;
 printf("meter=%i",m);
 }
getch();
}