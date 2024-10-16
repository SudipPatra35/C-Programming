#include<stdio.h>
#include<conio.h>
int main()
{
int x,n,b,cas;
clrscr();
printf("Enter your choice\n");
printf("For odd number case is : 1\n");
printf("For even number case is : 2\n");
printf("For square loop case is : 3\n");
scanf("%d",&cas);
switch(cas)
{
case 1: printf("Enter the number");
	scanf("%d",&n);
	for(x=x+1;x<=n;x++)
	{
	if(x%2!=0)
	{
	printf("It is an odd number");
	}
	}
	break;

case 2: printf("Enter the range");
	scanf("%d",&n);
	for(x=x+2;x<=n;x++)
	{
	if(x%2==0)
	{
	printf("It is an Even Number");
	}
	}
	break;

case 3: printf("Enter a number");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
	b=x*x;
	printf("%d\n",b);
	}
	break;

}
getch();
return 9;
}