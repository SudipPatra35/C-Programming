#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter values of three number");
scanf("%d %d %d", &a, &b, &c);

if((a>b) && (a>c))
{
printf("The greater number is : %d",a);
}
else if(b>c)
{
printf("The greater nymber is : %d",b);
}
else
{
printf("The greater numbe is : %d",c);
}
getch();
return 12;
}