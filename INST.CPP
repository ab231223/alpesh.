//intrest
#include<iostream.h>
#include<conio.h>
class Intrest
{
 public:
	void intrest()
	{
	float a=1400.53;
	int b,c;
	cout<<"Enter your amount :";
	cin>>b;
	cout<<"Enter mouth :";
	cin>>c;
	cout<<"Your total intrest==>"<<a*c;
	}
};

void main()
{
 Intrest g;
 clrscr();
 g.intrest();
 getch();
}