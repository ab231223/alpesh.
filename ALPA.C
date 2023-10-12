#include<iostream.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  cout<<"enter a year:";
  cin>>year;
  if(year % 400 ==0)
    cout<<year<<"is a leep year:";
  else
    cout<<year<<"'is noy a leep year:";
  getch();
}