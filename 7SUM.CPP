#include<iostream.h>
#include<conio.h>
class Sum
{
   float ans;
   public:
	   void print()
	   {
	     int a,b;
	     cout<<"enter your 2 values:"<<endl;
	     cin>>a>>b;
	     ans=a+b;
	     cout<<ans;
	   }
	   void print(int,int,int)
	   {
	    int a,b,c;
	   cout<<"enter your 3 values:"<<endl;
	   cin>>a>>b>>c;
	   ans=a+b+c;
	   cout<<ans;
	   }
	   void print(float,float)
	   {
	     float a,b;
	      cout<<"enter your 2 values:"<<endl;
	   cin>>a>>b;
	   ans=a+b;
	   cout<<ans;
	   }
	   void print(float,float,float)
	   {
	     float a,b,c;
	    cout<<"enter your 3 values:"<<endl;
	   cin>>a>>b>>c;
	   ans=a+b+c;
	   cout<<ans;
};
void main()
{
 Sum s;
 clrscr();
 s.print(10,20);
 s.print(30,40,50);
 s.print(34.5,45.6);
 s.print(30.5,45.5,40.7);

 getch();
}