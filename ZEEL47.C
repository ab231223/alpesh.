#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int month;
 printf("choose the number 1.for january\n2.for february\n3. for march\n4. for april\n5. for may\n6.for june\n7.for july\n8. for august\n9. for saptember\n10. for octomber\n11. for november\n12.for december\n");
 printf("enter number to choose month:");
 scanf("%i",&month);
 switch(month)
 {
 case 1:
 printf("january");
 break;
 case 2:
 printf("february");
 break;
 case 3:
 printf("march");
 break;
 case 4:
printf("april");
break;
 case 5:
 printf("may");
 break;
 case 6:
 printf("june");
 break;
 case 7:
 printf("july");
 break;
 case 8:
 printf("august");
 break;
 case 9:
 printf("saptember");
 break;
 case 10:
 printf("otcomber");
 break;
 case 11:
 printf("novmeber");
 break;
 case 12:
 printf("december");
 break;
 default:
 printf("invalid");
 }
 getch();
 }