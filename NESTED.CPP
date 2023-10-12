//nested member function//
#include<iostream.h>
#include<conio.h>
class Test
{
 private:
	int a,b,ans;
  public:
	void sum()
	{
	  cout<<"enter 2 value:"<<endl;
	  cin>>a>>b;
	  ans=a+b;
	  cout<<"sum is ==>"<<ans<<endl;
	  sub();
	}
	void sub()
	{
	  cout<<"enter 2 values:"<<endl;
	  cin>>a>>b;
	  ans=a-b;
	  cout<<"sub is ==>"<<ans<<endl;
	}
};
void main()
{
  Test t;
  clrscr();
  t.sum();
  getch();
}