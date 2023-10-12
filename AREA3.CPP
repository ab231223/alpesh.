#include<iostream.h>
#include<conio.h>
class Shape
{
  int r,l,b,h;
};
class Rectangle:public Shape
{
  public:
	void print()
	{
	int ans;
	ans=l*b*h;
	cout<<ans;
	}
};
class Circle:public Shape
{
  public:
	 void print()
	 {
	 float ans;
	 ans=3.14*r*r;
	 cout<<ans;
	 }
};
class Square:public Shape
{ public:
       void print()
       {
	 int ans;
	 ans=l*l;
	 cout<<ans;
      }
};
void main()
{
 Shape s;
 clrscr();
 s.Square::print();
 getch();
}