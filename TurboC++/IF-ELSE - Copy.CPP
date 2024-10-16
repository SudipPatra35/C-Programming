#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter the value of a,b");
scanf("%d%d", &a, &b);
if(a>b)
{
printf("a is greater number", "%d",a);
}
else
{
printf("b is greater number", "%d",b);
}
getch();
return 3;
}