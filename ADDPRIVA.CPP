#include<iostream.h>
#include<conio.h>
class Demo
{
  private:
	int a,b;
   public:
	void set()
	{
	  int ans;
	  cout<<"enter 2 values:";
	  cin>>a>>b;
	  ans=a+b;
	  cout<<ans;
	}
};
class Test:private Demo
{
  public:
	void set()
	{

	}
};
void main()
{
 Test t;
 clrscr();
 t.set();
 getch();
}