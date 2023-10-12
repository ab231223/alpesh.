#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int salary,DA,HRA,TA,pay;
printf("Enter Your Basic Salary:");
scanf("%i",salary);
DA=(salary*10)/100;
printf("DA=%i\n",DA);
HRA=(salary*8)/100;
printf("HRA=%i\n",HRA);
TA=(salary*5)/100;
printf("TA=%i\n",TA);
pay=salary+DA+HRA+TA;
printf("total=%i",pay);
getch();
}