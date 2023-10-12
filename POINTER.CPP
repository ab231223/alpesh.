#include<iostream.h>
#include<conio.h>
class A
{
  char name[20];
  public:
	void set()
	{
	  cout<<"enter name";
	  cin>>name;
	  cout<<name;
	}
};
class B:public A
{
  int id;
  public:
	void set()
	{
	  cout<<"enter id";
	  cin>>id;
	  cout<<id;
	}
};
void main()
{
  A *p;
  B obj;
  clrscr();
  p=&obj;
  p->set();
  getch();
}
