#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int day;
printf("enter your choice number:\n1.for monday\n2.for tuesday\n3.for wednesday\n4.for thursday\n5.for friday\n6.for saturday\n7.for sunday ");
scanf("%i",&day);
switch(day)
{
case 1:
printf("monday");
break;
case 2:
printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
default:
printf("invalid days");
}
getch();
}