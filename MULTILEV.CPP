#include<iostream.h>
#include<conio.h>
class A
{
  int r;

  public:
	 void circle()
	 {
	   cout<<"Enter your redius:";
	   cin>>r;
	 }
	 void a_print()
	 {
	   float ans;
	   ans=3.14*r*r;
	   cout<<ans;
	 }
};
class B:public A
{
  int s1,s2,s3;
  public:
	void triangle()
	{
	  cout<<"enter 3 values:";
	  cin>>s1>>s2>>s3;
	}
	void b_print()
	{
	  int ans;
	  ans=s1*s2*s3;
	  cout<<ans;
	}
};
class C:public B
{
  int l,b,h;
  public:
       void rectangle()
       {
	 cout<<"enter your 3 values:";
	 cin>>l>>b>>h;
       }
       void c_print()
       {
	 int ans;
	 ans=l*b*h;
	 cout<<ans;
       }
};

void main()
{
 C obj;
 clrscr();
 obj.rectangle();
 obj.circle();
 obj.triangle();
 obj.a_print();
 obj.b_print();
 obj.c_print();
 getch();
}