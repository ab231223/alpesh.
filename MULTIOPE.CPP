#include<iostream.h>
#include<conio.h>
class Multi
{
  int a,b,c,d;
  public:
	void print()
	{
	  cout<<"enter 2 values:";
	  cin>>a>>b;
	}
	void operator*(Multi m1)
	{
	  c=a*m1.a;
	  d=b*m1.b;
	  cout<<c<<endl<<d;
	}
};
void main()
{
 Multi m,m1;
 clrscr();
 m.print();
 m1.print();
 m*m1;

 getch();
}