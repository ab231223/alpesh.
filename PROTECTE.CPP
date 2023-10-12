#include<iostream.h>
#include<conio.h>
class Test
{
  protected:
	  int a,b;
};
class Demo:protected Test
{
   public:
	 void multi()
	 {
	   int ans;
	   cout<<"enter 2 values:";
	   cin>>a>>b;
	   ans=a*b;
	   cout<<ans;
	 }
};
void main()
{
  Demo d;
  clrscr();
  d.multi();
  getch();
}