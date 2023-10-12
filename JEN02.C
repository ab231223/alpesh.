#include<stdio.h>
#include<conio.h>
/*formula
I=(p*r*n)/100*/
void main()
{
clrscr();
long int I,p,r,n;
printf("Enter p,r,n Value:");
scanf("%ld%ld%ld",&p,&r,&n);
I=(p*r*n)/100;
printf("(p*r*n)=%ld%ld%ld",p,r,n);
getch();
}