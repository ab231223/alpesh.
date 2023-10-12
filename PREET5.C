
#include<stdio.h>
#include<conio.h>
void main()
{
int number,r,l1,l2,l3,l,b,h;
float ans;
clrscr();
printf("1=circle\n 2=triangle\n 3=rectangle\n 4=square");
printf("enter your number");
scanf("%i",&number);
switch case(choice)
{
 case 1:printf("enter radius");
	scanf("%i",&r);
	ans=3.14*r*r;
	printf("%f",ans);
	break;
 case 2:printf("enter your length1");
	scanf("%i",&l1);
	printf("enter your length2");
	scanf("%i",&l2);
	printf("enter your length3");
	scanf("%i",&l3);
	ans=l1*l2*l3;
	printf("%f",ans);
	break;
 case 3:printf("enter your length");
	scanf("%i",&l,);
	printf("enter your breadth");
	scanf("%i",&b);
	printf("enter your height");
	scanf("%i",&h);
	ans=l*b*h;
	printf("%f",ans);
	break;
 case 4:printf("enter your length1");
	scanf("%i",&l1);
	printf("enter youlength2");
	scanf("%i",&l2);
	ans=l1*l2;
	printf("%f",ans);
	break;
 default:printf("invalid number");
	 break;
}
getch();
}
	printf("%f",ans);
	break;
 case 4:printf("enter your