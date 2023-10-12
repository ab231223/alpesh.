#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,max=0,min;
    clrscr();
    printf("----::how many record insert in array::----");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("a[%i]=",i);
       scanf("%d",&a[i]);
       if(a[i]>max)
       {
	  max=a[i];
       }
   }
       min=max;
   for(i=0;i<n;i++)
   {
       if(a[i]<min)
       {
	   min=a[i];
       }
    }

    printf("maximum value is here=%d\n",max);
    printf("minimum value is here=%d\n",min);
    getch();
}
