#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,result,opr;
clrscr();
printf("Enter any to number:");
scanf("%d%d",&a,&b);
printf("Enter case number\n");
printf("For-(a^2+b^2): case is 1\n");
printf("For-(a^3+b^3): case is 2\n");
printf("For-(a-b)^2: case is 3\n");
scanf("%d",&opr);

switch(opr)
{
case 1 :  result=a*a+b*b;
	  printf("%d",result);
	  break;

case 2 :  result=(a*a*a)+(b*b*b);
	  printf("%d",result);
	  break;

case 3 :  result=(a-b)*(a-b);
	  printf("%d",result);
	  break;
}
getch();
return 6;
}