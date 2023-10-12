#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,add,sub,multi,divide;
char A,S,M,D,choice;
clrscr();
printf("enter value of a and b:");
scanf("%i %i",&a,&b);
printf("enter your choice\nA.for add\nS. for sub\nM. for multi\nD.for divide\n");
fflush(stdin);
scanf("%c",&choice);
if(choice=='A')
{
add=a+b;
printf("add=%i",add);
}
else if(choice=='S')
{
sub=a-b;
printf("sub=%i",sub);
}
else if(choice==M)
{
multi=a*b;
printf("multi=%i",multi);
}
else if(choice==D)
{
divide=a/b;
printf("divide=%i",divide);
}
else
{
printf("invalid");
}
getch();
}