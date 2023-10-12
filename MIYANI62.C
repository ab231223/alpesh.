#include<stdio.h>
#include<conio.h>
void main()
//day switch
{
  clrscr();
  char day;
  printf("Enter 1 to 7 day:");
  scanf("%c",&day);
  switch(day)
  {
     case 'M':
	    printf("Monday");
	    break;

     case 'T':
	   printf("Tusday");
	   break;

     case 'W':
	   printf("Wenesday");
	  break;

     case 't':
	  printf("Thrusday");
	  break;

     case 'F':
	 printf("friday");
	 break;

     case 'S':
	  printf("saturday");
	  break;


    case 's':
	 printf("sunday");
	 break;

     default:
	printf("not day");
   }


 getch();
}