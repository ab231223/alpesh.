#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n3,n,i;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);
	printf("%d\n%d",n1,n2);
	for(i=2;i>n;i++)
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;

	}
	getch();


}