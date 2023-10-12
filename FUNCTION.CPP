#include<iostream.h>
#include<conio.h>
class Test
{
  protected:
	  int a,b,ans;
};
class Demo:protected Test
{
   public:
	 void sum()
	 {
	   cout<<"enter 2 values:";
	   cin>>a>>b;
	   ans=a+b;
	   cout<<ans<<endl;
	 }
	 void sub()
	 {
	   cout<<"enter 2 values:";
	   cin>>a>>b;
	   ans=a-b;
	   cout<<ans<<endl;
	 }
	 void multi()
	 {
	   cout<<"enter 2 values:";
	   cin>>a>>b;
	   ans=a*b;
	   cout<<ans<<endl;
	 }
	 void divide()
	 {
	   cout<<"enter 2 values:";
	   cin>>a>>b;
	   ans=a/b;
	   cout<<ans<<endl;
	 }
	 void per()
	 {
	   cout<<"enter 2 values:";
	   cin>>a>>b;
	   ans=a%b;
	   cout<<ans;
	 }
};
void main()
{
  Demo d;
  clrscr();
  d.sum();
  d.sub();
  d.multi();
  d.divide();
  d.per();
  getch();
}