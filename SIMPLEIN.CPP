#include<iostream.h>
#include<conio.h>
class A
{
  int a;
  public:
       void a_setdata()
       {
	cout<<"Enter your value:"<<endl;
	cin>>a;
	cout<<a<<endl;
       }
};
class B:public A
{
   int b;
   public:
       void b_setdata()
       {
	 cout<<"Enter your value:"<<endl;
	 cin>>b;
	 cout<<b;
       }
};
void main()
{
   B obj;
   clrscr();
   obj.a_setdata();
   obj.b_setdata();
   getch();
}