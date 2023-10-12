#include<iostream.h>
#include<conio.h>
class Employee
{
 public:
       int id,salary,experience;
       char contact[20];
       char name[10],role[10],address[10],email[50];

	void setter()
	{

	  cout<<"enter id,salary,experience,contact:"<<endl;
	  cin>>id>>salary>>experience>>contact;
	  cout<<"enter name,role,address,email:"<<endl;
	  cin>>name>>role>>address>>contact;
          getter();
	}
	void getter()
	{

	    cout<<id<<endl<<salary<<endl<<experience<<endl<<contact<<endl;
	    cout<<name<<endl<<role<<endl<<address<<endl<<email<<endl;

	}

};
void main()
{
 Employee e,e1,e2,e3,e4,e5;
 clrscr();
 e.setter();
 e1.setter();
 e2.setter();
 e3.setter();
 e4.setter();


 getch();
}