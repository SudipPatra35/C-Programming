#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,n;
printf("Enter a number");
scanf("%d",&n);
a=1;
while(a<=n)
{
b=a*a;
printf("%d\n",b);
a=a+1;
}
getch();
return 9;
}
