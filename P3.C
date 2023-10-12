// delated

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,pos,j;
	clrscr();

	printf("num :");
	scanf("%d",&n);
	printf("entr your %d data",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("pos :");
	scanf("%d",&pos);

	for(i=0;i<n;i++)
	{
		if(i==pos)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	n--;

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}