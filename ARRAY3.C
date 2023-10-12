#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n;
    clrscr();
    printf("-----::how many record insert in array::-----");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
    }
       printf("\n\n all array record is below\n");
    for(i=0;i<n;i++)
    {
       printf("a[%i]=%i\n",i,a[i]);
    }
    getch();
}