#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,n,sum;
clrscr();
printf("Enter a number");
scanf("%d",&n);
sum=0;
while(i<=n)
{
if(i%2!=0)
sum=sum+i;
i=i+1;
}
printf("%d",sum);

getch();
return 9;
}