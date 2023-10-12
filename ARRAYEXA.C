#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,sum=0,sum1=0;
    clrscr();
    printf("-----::how mamy record insert in array::-----");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("a[%i]=",i);
       scanf("%i",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==1)
       {
	  sum=sum+a[i];
       }
       else
       {
	  sum1=sum1+a[i];
       }
    }
    printf("odd value sum is here %i\n",sum);
    printf("even value sum is here %i\n",sum1);

    getch();
}