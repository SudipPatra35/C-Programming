#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter the value of a");
scanf("%d", &a);
if(a>=0)
printf("+ve number");
if(a<=0)
printf("-ve number");
getch();
return 3;
}