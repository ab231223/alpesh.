//prime number
#include<iostream.h>
#include<conio.h>
class Prime
{
  public:
	 void num()
	 {
	 int a;
	 cout<<"Enter any number:";
	 cin>>a;
	 cout<<"your prime number is==>"<<a/5;
	 }
};
void main()
{
 Prime g;
 clrscr();
 g.num();
 getch();
}