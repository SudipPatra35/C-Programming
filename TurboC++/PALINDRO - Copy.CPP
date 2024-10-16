#include<stdio.h>
#include<conio.h>
int main()
{
int x,n,r,sum;
clrscr();
printf("Enter a number");
scanf("%d",&n);
sum=0;
x=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}

if(x==sum)
{
printf("It is a Palindrom Number");
}
else
{
printf("It is not a Palindrom Number");
}

getch();
return 9;
}