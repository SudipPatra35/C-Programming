#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
printf("Enter the value of x");
scanf("%d",&x);
while(x<=10)
{
y=x*x;
printf("%d\n", y);
x=x+1;
}
getch();
return 9;
}