#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int ss,sci,maths,avg,total;
printf("enter marks of ss:");
scanf("%i",&ss);
printf("enter marks of sci:\n");
scanf("%i",&sci);
printf("enter value of maths:\n ");
scanf("%i",&maths);
total=ss+sci+maths;
printf("total=%i\n",total);
avg=total/3;
printf("avg=%i\n",avg);
 if(avg>=35)
 {
   if(avg>=50)
   {
     if(avg>=70)
     {
     printf("your grade is a");
     }
     else
     {
     printf("your grad is b");
     }
   }
   else
   {

   printf("your grade is c");
   }

 }
 else
 {
 printf("fail");
 //printf("better luck next time");
 }

getch();
 }

