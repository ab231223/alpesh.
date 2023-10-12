#include<stdio.h>
#include<conio.h>
void sum(int,int)
void main()
int a,b;
clrscr();
printf("enter any nymber:");
scanf("%d %d %d",&a,&b);


    printf("%d",sum(a,b));
    getch();
    }

      int sum(int x,int y)
      {
       int ans;
       ans=x+y;
       return ans;
       }
