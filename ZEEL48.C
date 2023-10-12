#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char month;
 printf("choose the choice J.for january\nF.for february\nM. for march\nA. for april\nY. for may\nU.for june\nL.for july\nG. for august\nS. for saptember\nO. for octomber\nN. for november\nD.for december\n");
 printf("enter number to choose month:");
 scanf("%c",&month);
 switch(month)
 {
 case 'J':
 printf("january");
 break;
 case 'F':
 printf("february");
 break;
 case 'M':
 printf("march");
 break;
 case 'A':
printf("april");
break;
 case 'Y':
 printf("may");
 break;
 case 'U':
 printf("june");
 break;
 case 'L':
 printf("july");
 break;
 case 'G':
 printf("august");
 break;
 case 'S':
 printf("saptember");
 break;
 case 'O':
 printf("otcomber");
 break;
 case 'N':
 printf("novmeber");
 break;
 case 'D':
 printf("december");
 break;
 default:
 printf("invalid");
 }
 getch();
 }