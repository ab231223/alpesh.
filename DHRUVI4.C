#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],n,i,count=0;
   clrscr();
   printf("how many record insert in array:");
   scanf("%i",&n);
   for(i=0;i<n;i++)
   {
       printf("a[%i]=",i);
       scanf("%i",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      if(a[i]%2==1)
      {
	  count++;
      }
   }
   printf("odd value=%i",count);
   getch();
}
