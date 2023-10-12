#include<stdio.h>
#include<conio.h>
void main()
{
  long int basic,hra,da,ta,pay;
  clrscr();

  printf("enter yor salay");
  scanf("%id",&basic);

  hra=(basic*5)/100;
  printf("hea=%id\n",hra);

  da=(basic*6)/100;
  printf("da=%id\n",da);

  ta=(basic*9)/100;
  printf("ta=%ld",ta);

  pay=basic+hra+da+ta;
  printf("\nf inal:%ld",pay);
  getch();

  }




