#include<stdio.h>
#include<conio.h>
int main()
{
int n,r,sum;
clrscr();
printf("Enter a number");
scanf("%d",&n);
sum=0;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
printf("%d",sum);

getch();
return 9;
}