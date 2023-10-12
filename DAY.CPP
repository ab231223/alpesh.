#include<iostream.h>
#include<conio.h>
void main()
{
  char day;
  clrscr();
  cout<<"enter a day:";
  cin>>day;
  switch(day)
  {
    case 's':
      cout<<"sunday";
	break;
    case 'm':
      cout<<"monday";
	break;
    case 't':
      cout<<"tuesday";
	break;
    case 'w':
      cout<<"wednesday";
       break;
    case 'T':
      cout<<"thursday";
	break;
    case 'f':
      cout<<"friday";
	break;
    case 'S':
      cout<<"saturday";
	break;
    default:
      cout<<"invilid day";
       break;
  }
  getch();
}
