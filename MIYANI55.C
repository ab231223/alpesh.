#include<stdio.h>
#include<conio.h>
void main()
{
 int s1,s2,s3,total,avg;
  clrscr();
  printf("Enatr s1,s2 and s3 marks");
  scanf("%i %i %i",&s1,&s2,&s3);

  total=s1+s2+s3;
  printf("total=%i\n",total);

  avg=total/3;
  printf("avg=%i\n",avg);

  if(avg>35 &&  avg>50)
  {
   printf("grade is C");
  }
    else if (avg>=50 && avg>70)
  {
  printf("grade is B");
  }

  else if (avg>70 && avg>100)
  {
  printf("grade is A");
  }
  else
  {
  printf("fail");
  }


  getch();
 }