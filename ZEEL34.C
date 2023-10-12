#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char day;
printf("M.for monday\nT.for tuesday\nW.for wednesday\nt.for thursday\nF.for friday\nS.for  saturday\ns.for sunday");
printf("enter char for day:");
scanf("%c",&day);
if(day=='M')
{
printf("Monday");
}
else if(day=='T')
{
printf("tuesday");
}
else if(day=='W')
{
printf("wednesday");
}
else if(day=='t')
{
printf("thursday");
}
else if(day=='F')
{
printf("friday");
}
else if(day=='S')
{
printf("saturday");
}
else if(day=='s')
{
printf("sunday");
}
else
{
printf("number is invalid");
}
getch();
}
