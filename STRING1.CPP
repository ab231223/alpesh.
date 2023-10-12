#include<iostream.h>
#include<conio.h>
class Name
{
  int a[20];
  public:
	void print()
	{
	  cout<<"enter name:";
	  cin>>a;
	}
	void operator=(Name n1)
	{
	  int ans;
	  ans=strcmp(n,n1.a)
	  if(ans==0)
	  {
	    cout<<"compare:";
	  }
	  else
	  {
	    cout<<"not compare:";
	  }
	}
};
void main()
{
 Name n,n1
 clrscr();
 n.print();
 n1.print();
 n=n1;
 getch();
}