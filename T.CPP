//this program show real time when you run program
#include<iostream.h>
#include<time.h>
#include<conio.h>
void main()
{
 clrscr();
	time_t curr_time;
	curr_time = time(NULL);

	char *tm = ctime(&curr_time);
	cout << "Today is : " << tm;

	getch();
}