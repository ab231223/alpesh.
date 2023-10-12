#include<iostream.h>
#include<conio.h>
void main()
{
  int age;
  clrscr();
  cout<<"enter voting age:";
  cin>>age;
  try
  {
   if(age<=18)
   {
     throw age;
   }
   else
   {
     cout<<"invalid age:";
   }
  }
  catch(int c)
  {
    cout<<"enter valid age:";
  }

  getch();
}
