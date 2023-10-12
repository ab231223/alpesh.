#include<iostream.h>
#include<conio.h>
class Demo
{
  int a,b,ans;
  public:
       virtual void print()
       {
	 cout<<"enter 2 values:"<<endl;
	 cin>>a>>b;
	 ans=a+b;
	 cout<<"sum is ==>"<<ans;
       }
};
class Test:public Demo
{
  int a,b,ans;
  public:
       void print()
       {
	 cout<<"enter 2 values:"<<endl;
	 cin>>a>>b;
	 ans=a-b;
	 cout<<"sub is ==>"<<ans;
       }
};
void main()
{
  Demo *p;
  Test t;
  clrscr();
  p=&t;
  p->print();
  getch();
}