#include<iostream.h>
#include<conio.h>
class Divide
{
  int a,b,c,d;
  public:
	void print()
	{
	  cout<<"enter 2 values:";
	  cin>>a>>b;
	}
	void operator/(Divide d1)
	{
	  c=a/d1.a;
	  d=b/d1.b;
	  cout<<c<<endl<<d;
	}
};
void main()
{
 Divide d,d1;
 clrscr();
 d.print();
 d1.print();
 d/d1;
 getch();

}