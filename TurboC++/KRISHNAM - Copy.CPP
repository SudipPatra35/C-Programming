#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,x,r,sum=0,k,f;
clrscr();
printf("Enter a Number");
scanf("%d",&n);
x=n;
while(n>0)
{
r=n%10;
f=1;
for(k=1;k<=r;k++)
{
f=f*k;
}
sum=sum+f;
n=n/10;
}
if(sum==x)
{
printf("It is a Krishnamurti Number");
}
else
{
printf("It is not a krishnamurti Number");
}
getch();
return 9;
}
