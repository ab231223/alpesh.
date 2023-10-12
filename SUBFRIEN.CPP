#include<iostream.h>
#include<conio.h>
class Test;
class Demo
{
  int a;
  public:
       void print()
       {
	 cout<<"enter value:";
	 cin>>a;
       }
       friend void sub(Demo d);
};
class Test
{
  int b;
  public:
       void set()
       {
	 cout<<"enter value:";
	 cin>>b;
       }
       friend void sub(Test t);
};
void sub(Demo d,Test t)
{
  int ans;
  ans=d.a-t.b;
  cout<<ans;
}
void main()
{
 Demo d;
 Test t;
 clrscr();
 d.print();
 t.set();
 sub(d,t);
 getch();
}