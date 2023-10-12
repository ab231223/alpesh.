#include<stdio.h>
#include<conio.h>
/*
   78 77 76 75 74 73 72
      77 76 75 74 73 72
	 76 75 74 73 72
	    75 74 73 72
	       74 73 72
		  73 72
		     72
*/
void main()
{
    int i,j,k;
    clrscr();
    for(i=1;i<=7;i++)
    {
       for(k=1;k<i;k++)
       {
	   printf("  ");
       }
       for(j=79-i;j>=72;j--)
       {
	  printf("%d",j);
       }
	  printf("\n");
    }
    getch();
}