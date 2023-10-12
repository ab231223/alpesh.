#include<iostream.h>
#include<conio.h>
class A
{
  public:
     virtual void print()=0;
};
class B:public A
{
  public:
       void print()
       {
	 cout<<"class A";
       }
};
void main()
{
  A *p;
  B obj;
  clrscr();
  p=&obj;
  p->print();
  getch();
}