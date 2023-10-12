#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,sum=0;
    clrscr();
    printf("--:how many record insert in array:--");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==1)
       {
	  sum=sum+a[i];
       }
    }
    printf("odd value=%d\n",sum);

    getch();
}