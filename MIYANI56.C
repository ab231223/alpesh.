#include<stdio.h>
#include<conio.h>
void main()

{
   clrscr();

   int unit,tax,pay,amt,price;
   printf("Enter your unit");
   scanf("%i",&unit);

   if(unit>100 && unit<500)
   {
   price=5;
   }
  else if (unit>200 && unit<1000)
  {
  price=6;
  }
 else if (unit>300 && unit<1500)
 {
 price=7;
 }
 printf("par unit price=%i\n",price);
 amt=unit*price;
 printf("amt=%\n",amt);
 tax=(amt*20)/100;
 printf("tax=%\n",tax);
 pay=amt+tax;
 printf("total pay=%i",pay);


getch();

}