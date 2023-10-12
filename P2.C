// insted

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,pos,value;
	clrscr();

	printf("num :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("pos :");
	scanf("%d",&pos);

	printf("value :");
	scanf("%d",&value);

	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	n++;

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}