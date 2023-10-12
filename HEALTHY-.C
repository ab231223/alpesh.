//check weight
#include<stdio.h>
#include<conio.h>
#define R 70
void main()
{
    clrscr();
    int weight;
    printf("Enter number for weight=");
    scanf("%i",&weight);
    if(weight>=R)
    {
      printf("you are healthy");
    }
    else
    {
      printf("so weak");
    }
    getch();
}
