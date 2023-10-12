#include<iostream.h>
#include<conio.h>
class Test
{
  public:
       void set()
       {
	 cout<<"class test";
       }
};
class Demo:public Test
{
  public:
       void set()
       {
	 cout<<"class demo";
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