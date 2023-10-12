#include<stdio.h>
#include<conio.h>
void main()
//day switch in month int.
{
  clrscr();
  int month;
  printf("Enter 1 to 12 month:");
  scanf("%i",&month);
  switch(month)
  {
     case 1:
	    printf("January");
	    break;

     case 2:
	   printf("February");
	   break;

     case 3:
	   printf("March");
	  break;

     case 4:
	  printf("April");
	  break;

     case 5:
	 printf("May");
	 break;

     case 6:
	  printf("June");
	  break;


    case 7:
	 printf("july");
	 break;

    case 8:
	  printf("August");
	  break;

    case 9:
	  printf("Suptember");
	  break;

    case 10:
	  printf("Octomber");
	  break;

    case 11:
	  printf("November");
	  break;

    case 12:
	  printf("December");
	  break;

     default:
	printf("not month");
   }


 getch();
}