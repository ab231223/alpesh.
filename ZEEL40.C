#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int l,h,r,area,d;
char op;
printf("@. for rectangle area\no. for circle area\n$. for rupes\n^. for treingle");
printf("enter your choice:");
scanf("%c",&op);
 if(op=='@')
 {
  printf("enter value of l:");
  scanf( "%i",&l);
  printf("enter value of h:");
  scanf("%i",&h);
  area=l*h;
  printf("rectangle=%i",area);
 }
 else if(op=='o')
 {
 printf("enter value of r:");
 scanf("%i",&r);
 area=3.14*r*r;
 printf("area=%i",area);
 }
 else if(op=='$')
 {
 printf("enter value of d:");
 scanf("%i",&d);
 area=d*80;
 printf("area=%i",area);
 }
 else if(op=='^')//l*h/2
 {
 printf("enter value of l and h");
 scanf("%i %i",&l,&h);
 area=l*h/2;
 printf("tringle=%i",area);
 }
 else
 {
 printf("invalid choice");
 }

getch();

}