#include<iostream.h>
#include<conio.h>
class Test
{
   public:
    virtual void set()=0;
};
class Demo:public Test
{
  int a,b,ans;
  public:
	void set()
	{
	  cout<<"enter 2 values:"<<endl;
	 cin>>a>>b;
	 ans=a+b;
	 cout<<"sum is ==>"<<ans;
	}
};
void main()
{
  Test *p;
  Demo d;
  clrscr();
  p=&d;
  p->set();
  getch();

}