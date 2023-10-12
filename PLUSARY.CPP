#include<iostream.h>
#include<conio.h>
class Sum
{
  int a;
  public:
	void print()
	{
	  cout<<"enter values:";
	  cin>>a;
	}
	void operator++()
	{
	  a=a+10;
	  cout<<a;
	}
};
void main()
{
 Sum s;
 clrscr();
 s.print();
 ++s;
 getch();
}