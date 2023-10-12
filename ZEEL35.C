#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int month;
printf("1.for january\n2.for february\n3.for march\n4.for april\n5.for may\n6.for  june\n7.for july\n8.for august\n9.for september\n10.for october\n11.for november\n12.for december");
printf("\nenter number for day:");
scanf("%i",&month);
if(month==1)
{
printf("january");
}
else if(month==2)
{
printf("february");
}
else if(month==3)
{
printf("march");
}
else if(month==4)
{
printf("april");
}
else if(month==5)
{
printf("may");
}
else if(month==6)
{
printf("june");
}
else if(month==7)
{
printf("july");
}
else if(month==8)
{
printf("august");
}
else if(month==9)
{
printf("saptember");
}
else if(month==10)
{
printf("october");
}
else if(month==11)
{
printf("november");
}
else if(month==12)
{
printf("december");
}
else
{
printf("no month number valid");
}
getch();
}
