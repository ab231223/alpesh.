#include<iostream.h>
#include<conio.h>
class Sum
{
  int a,b,c,d;
  public:
	 void print()
	 {
	   cout<<"enter your 2 values:";
	   cin>>a>>b;
	 }
	 void operator+(Sum s1)
	 {
	   c=a+s1.a;
	   d=b+s1.b;
	   cout<<c<<d;
	 }
};
void main()
{
  Sum s,s1;
  clrscr();
  s.print();
  s1.print();
  s+s1;
  getch();
}
