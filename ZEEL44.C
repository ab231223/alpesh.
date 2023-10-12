#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int ss,sci,maths,total,avg;
printf("enter mark of ss:");
scanf("%i",&ss);
printf("\nenter marks of sci:");
scanf("%i",&sci);
printf("\nenter marks of maths:");
scanf("%i",&maths);
total=ss+sci+maths;
printf("\ntotal=%i",total);
avg=total/3;
printf("\navg=%i",avg);
if(avg>=35 && avg<=50)
{
printf("\nyour grade is C");
}
else if(avg>=50 && avg<=70)
{
printf("\nyour grade is B");
}
else if(avg>=70 && avg<=100)
{
printf("\nyour grade is A");
}
else
{
printf("\nno data found so you fail");
}
getch();

}