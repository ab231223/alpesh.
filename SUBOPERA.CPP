#include<iostream.h>
#include<conio.h>
class Sub
{
  int a,b,c,d;
  public:
	void print()
	{
	  cout<<"enter 2 values:";
	  cin>>a>>b;
	}
	void operator-(Sub s1)
	{
	  c=a-s1.a;
	  d=b-s1.b;
	  cout<<c<<endl<<d;
	}
};
void main()
{
 Sub s,s1;
 clrscr();
 s.print();
 s1.print();
 s-s1;
 getch();
 getch();
}