#include<iostream.h>
#include<conio.h>
class Sub
{
  int a;
  public:
	void print()
	{
	  cout<<"enter values:";
	  cin>>a;
	}
	void operator--()
	{
	  a--;
	  cout<<a;
	}
};
void main()
{
 Sub s;
 clrscr();
 s.print();
 --s;
 getch();
}