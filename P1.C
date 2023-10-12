// nagetive

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i;
	clrscr();

	printf("num :");
	scanf("%d",&n);
	printf("entr your %d data",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
	getch();
}