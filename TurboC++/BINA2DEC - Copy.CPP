#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int k,n,r,sum;
clrscr();
printf("Enter a Binary Number");
scanf("%d",&n);
sum=0;
k=0;
while(n>0)
{
r=n%10;
sum=sum+r*pow(2,k);
n=n/10;
k=k+1;
}
printf("The Decimal Number is : %d",sum);
getch();
return 9;
}
