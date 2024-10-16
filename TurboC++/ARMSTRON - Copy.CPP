#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int x,n,r,sum;
clrscr();
printf("Enter a Number");
scanf("%d",&n);
sum=0;
x=n;
while(n>0)
{
r=n%10;
sum=sum+pow(3,r);
n=n/10;
}
if(sum==x)
{
printf("It is an Armstrong Number");
}
else
{
printf("It is not an Armstrong Number");
}
getch();
return 9;
}
