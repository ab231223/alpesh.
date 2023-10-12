#include<iostream.h>
#include<conio.h>
class Father
{
  int age;
  public:
	void print()
	{
	  age=56;
	  cout<<"father age is ==>"<<age;
	}
};
class Son
{
  int age;
  public:
	void print()
	{
	  age=20;
	  cout<<"son age is ==>"<<age;
	}
};
class Daughter:public Father,public Son
{

};
void main()
{
   Daughter obj;
  clrscr();
  obj.Father::print();
  getch();
}
