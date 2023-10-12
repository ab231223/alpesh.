#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,l,count=0;
char a[20];
char ch;
clrscr();
printf("enter your data:");
gets(a);
printf("enter your digit:");
scanf("%s",&ch);
l=strlen(a);
for(i=0;i<l;i++)
{
  if(a[i]==ch)
  {
    count++;
  }
}
printf("%d",count);

getch();
}