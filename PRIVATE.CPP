#include<iostream.h>
#include<conio.h>
class Test
{
 private:
      int a,b;
 public:
       void set(int c,int d)
       {
	 a=c;
	 b=d;
	 cout<<a<<endl<<b;
       }
};
void main()
{
  Test t;
  clrscr();
  t.set(40,20);
  getch();
}
