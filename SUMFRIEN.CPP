#include<iostream.h>
#include<conio.h>
class Test
{
  int a,b;
  public:
	void print()
	{
	  cout<<"enter 2 values:";
	  cin>>a>>b;
	}
	friend void sum(Test t);
};
void sum(Test t)
{
 int ans;
 ans=t.a+t.b;
 cout<<ans;
}
void main()
{
 Test t;
 clrscr();
 t.print();
 sum(t);
 getch();
}
