//choice day to switch case
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char day;
 printf("choose the choice M.for monday\nT.for thusday\nW. for wednesday\nH. for thursday\nF.for friday\nA.for saturday\nU.for sunday\n");
 printf("enter char to choose day:");
 scanf("%c",&day);
 switch(day)
 {
 case 'M':
 printf("monday");
 break;
 case 'T':
 printf("thusday");
 break;
 case 'W':
 printf("wednesday");
 break;
 case 'H':
printf("thursday");
break;
 case 'F':
 printf("friday");
 break;
 case 'A':
 printf("saturday");
 break;
 case 'U':
 printf("sunday");
 break;
 default:
 printf("invalid");
 }
 getch();
 }