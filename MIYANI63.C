#include<stdio.h>
#include<conio.h>
void main()
//day switch in month.
{
  clrscr();
  char month;
  printf("Enter 1 to 12 month:");
  scanf("%c",&month);
  switch(month)
  {
     case 'J':
	    printf("January");
	    break;

     case 'F':
	   printf("February");
	   break;

     case 'M':
	   printf("March");
	  break;

     case 'A':
	  printf("April");
	  break;

     case 'm':
	 printf("May");
	 break;

     case 'j':
	  printf("June");
	  break;


    case 'u':
	 printf("july");
	 break;

    case 'a':
	  printf("August");
	  break;

    case 'S':
	  printf("Suptember");
	  break;

    case 'O':
	  printf("Octomber");
	  break;

    case 'N':
	  printf("November");
	  break;

    case 'D':
	  printf("December");
	  break;

     default:
	printf("not day");
   }


 getch();
}