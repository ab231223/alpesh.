#include<stdio.h>
#include<conio.h>
void main()
//day switch
{
  clrscr();
  int day;
  printf("Enter 1 to 7 day:");
  scanf("%i",&day);
  switch(day)
  {
     case 1:
	    printf("Monday");
	    break;

     case 2:
	   printf("Tusday");
	   break;

     case 3:
	   printf("Wenesday");
	  break;

     case 4:
	  printf("Thrusday");
	  break;

     case 5:
	 printf("friday");
	 break;

     case 6:
	  printf("saturday");
	  break;


    case 7:
	 printf("sunday");
	 break;

     default:
	printf("not day");
   }

}
 getch();























































