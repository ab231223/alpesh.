#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int  f,c,r,d,m,km;
char op;
printf("choose the number to convert\n M.for cel to feh\n N.for dollar to rup\n O.for km to meter");
printf("\nenter the your choice char:");
scanf("%c",&op);
if(op=='M')
 {
 printf("\nenter the value of cel:");
 scanf("%i",&c);
 f=c*1.8+32;
 printf("feh=%i",f);
 }
 else if(op=='N')
 {
 printf("enter the amount of doller:");
 scanf("%i",&d);
 r=d*84.50;
 printf("rupees=%i",r);
 }
 else if(op=='O')
 {
 printf("enter the value of km:");
 scanf("%i",&km);
 m=km*1000;
 printf("meter=%i",m);
 }
getch();
}