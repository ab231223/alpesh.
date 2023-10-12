//swapping
#include<iostream.h>
#include<conio.h>
class Swap
{
  public:
	 void step()
	 {
	   int a,b,c;
	   cout<<"Enter any 2 number :";
	   cin>>a>>b>>c;
	   c=a;
	   a=b;
	   b=c;
	   cout<<"your ans is==>"<<c<<a<<b;

	 }
};
void main()
{
 Swap p;
 clrscr();
 p.step();
 getch();
}