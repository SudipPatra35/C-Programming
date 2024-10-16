#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
int x;
clrscr();
printf("Enter your choice\n");
printf("For odd-even number case, is : 1\n");
printf("For greater number case, case is : 2\n");
printf("For hellow world, case is : 3\n");
scanf("%d",&x);

switch(x)
{
case 1: printf("Enter any number");
	scanf("%d",&a);
	if(a%2==0)
	{
	printf("It is a even number");
	}
	else
	{
	printf("It is a odd number");
	}
	break;

case 2: printf("Enter values of three number");
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
	break;

case 3: printf("Enter a year");
	scanf("%d",&a);

	if((a%4==0) || (a%400==0))
	{
	printf("It is a leap year");
	}
	else
	{
	printf("It is not a leap year");
	}
	break;

}
getch();
return 9;
}