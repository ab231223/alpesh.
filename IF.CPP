#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int A,B,C,D;
  printf("Enter your four values");
  scanf("%d%d%d",&A,&B,&C,&D);
  if(A>B)
  {
    if(A>C)
    {
	if(A>D)
	{
	      printf("a is big");
	}
	else
	{
	      printf("d is big");
	}
     }
 }
 else
 {
   if(B>C)
   {
	if(B>D)
	{
	     printf("b is big");
	}
	else
	{
	     printf("d is big");
	}
   }
   else
   {
      if(C>D)
      {
	    printf("c is big");
      }
      else
      {
	   printf("d is big");
      }
   }
}








  getch();


}
