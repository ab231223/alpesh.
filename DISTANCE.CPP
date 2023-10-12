#include<iostream.h>
#include<conio.h>

class Distance
{
 private:
  int feet;
  float inches;
 public:
  void set_distance()
  {
    cout<<"enter feet:";
    cin>>feet;
    cout<<"enter inches:";
    cin>>inches;
  }
  void get_distance()
  {
    cout<<"Distance is feet="<<feet<<",	inches="<<inches<<endl;
  }
  void add(Distance d1,Distance d2)
  {
    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
    feet=feet+(inches/12);
    inches=inches/12;
  }
};
void main()
{
  Distance d;
  clrscr();
  d.set_distance();
  d.add(d1,d2);
  d.get_distance();
  getch();
}
