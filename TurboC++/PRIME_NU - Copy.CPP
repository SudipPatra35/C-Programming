#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,f;
printf("Enter a Number");
scanf("%d",&a);
f=0;
i=2;
while(i<=a/2)
{
if(a%i==0)
{
f=1;
break;
}
i++;
}
if(f==0)
{
printf("It is a Prime Number");
}
else
{
printf("It is not a Prime Number");
}
getch();
return 0;
}
