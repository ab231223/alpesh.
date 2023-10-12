#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char month;
printf("n.for january\nF.for february\nm.for march\na.for april\nM.for may\nj.for  june\nJ.for july\nA.for august\nS.for september\nO.for october\nN.for november\nD.for december");
printf("\nenter number for day:");
scanf("%c",&month);
if(month=='n')
{
printf("january");
}
else if(month=='F')
{
printf("february");
}
else if(month=='m')
{
printf("march");
}
else if(month=='a')
{
printf("april");
}
else if(month=='M')
{
printf("may");
}
else if(month=='j')
{
printf("june");
}
else if(month=='J')
{
printf("july");
}
else if(month=='A')
{
printf("august");
}
else if(month=='S')
{
printf("saptember");
}
else if(month=='O')
{
printf("october");
}
else if(month=='N')
{
printf("november");
}
else if(month=='D')
{
printf("december");
}
else
{
printf("no month number valid");
}
getch();
}
