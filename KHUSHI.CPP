#include<iostream.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  cout<<"enter a year:";
  cin>>year;
  if(year %400==0)
    cout<<" year is a leep year:";
  else if(year %100==0)
    cout<<" year is a leep year:";
  else if(year %4==0)
    cout<<"year is a leep year:";
  else
    cout<<"year is not a leep year:";
  getch();
}