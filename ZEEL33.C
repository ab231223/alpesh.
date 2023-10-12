#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int day;
printf("1.for monday\n2.for tuesday\n3.for wednesday\n4.for thursday\n5.for friday\n6.for  saturday\n7.for sunday");
printf("enter number for day:");
scanf("%i",&day);
if(day==1)
{
printf("Monday");
}
else if(day==2)
{
printf("tuesday");
}
else if(day==3)
{
printf("wednesday");
}
else if(day==4)
{
printf("thursday");
}
else if(day==5)
{
printf("friday");
}
else if(day==6)
{
printf("saturday");
}
else if(day==7)
{
printf("sunday");
}
else
{
printf("number is invalid");
}
getch();
}
