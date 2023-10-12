#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  clrscr();
  printf("enter any numbar");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
   for(k=1;k<=n-1;k++)
  {
   printf(" ");
  }
    for(j=1;j<=i;j++)
   {
     printf("* ",j);
   }
    printf("\n");
  }
  getch();
}

