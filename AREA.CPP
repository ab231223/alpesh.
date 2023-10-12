#include<iostream.h>
#include<conio.h>
class Test
{
  int l,b,h,r,s1,s2,s3;
  public:
       inline void circle();
       inline void square();
       inline void triangle();
       inline void rectangle();
       inline void sylinder();
};
void Test::circle()
{
  int ans;
  cout<<"enter your redius:"<<endl;
  cin>>r;
  ans=3.14*r*r;
  cout<<ans<<endl;
}
void Test::square()
{
  int ans;
  cout<<"enter your length:"<<endl;
  cin>>l;
  ans=l*l;
  cout<<ans<<endl;
}
void Test::triangle()
{
  int ans;
  cout<<"enter your 3 sides:"<<endl;
  cin>>s1>>s2>>s3;
  ans=s1*s2*s3;
  cout<<ans<<endl;
}
void Test::rectangle()
{
  int ans;
  cout<<"enter your length,breadth,height:"<<endl;
  cin>>l>>b>>h;
  ans=l*b*h;
  cout<<ans<<endl;
}
void Test::sylinder()
{
  float ans;
  cout<<"enter your redious and height:"<<endl;
  cin>>r>>h;
  ans=3.14*r*r*h;
  cout<<ans<<endl;
}
void main()
{
 Test t;
 clrscr();
 t.circle();
 t.square();
 t.triangle();
 t.rectangle();
 t.sylinder();
 getch();
}
