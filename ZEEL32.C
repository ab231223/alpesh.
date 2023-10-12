#include<stdio.h>
#include<conio.h>
void main()
{
int ss,maths,sci,avg,total;
clrscr();
printf("\nenter marks of ss:");
scanf("%i",&ss);
printf("\nenter marks of maths:");
scanf("%i",&maths);
printf("\nenter marks of sci:");
scanf("%i",&sci);
total=ss+maths+sci;
printf("total=%i\n",total);
avg=total/3;
printf("avg=%i\n",avg);
 if(avg>=35)
 {
   if(avg>=45)
   {
    if(avg>=55)
    {
      if(avg>=65)
      {
	 if(avg>=75)
	 {
	   if(avg>=85)
	   {
	     if(avg>=95)
	     {
	     printf("your grad is a+");
	     }
	     else
	     {
	     printf("your grad is a");
	     }
	   }
	   else
	   {
	   printf("your grad is b+");
	   }
	 }
	 else
	 {
	 printf("your grad is b");
	 }
      }
      else
      {
      printf("your grad is c+");
      }
    }
    else
    {
    printf("your grad is c");
    }
   }
   else
   {
   printf("your grad is d");
   }
 }
 else
 {
 printf("you are fail");
 }
getch();
}