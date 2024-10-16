#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,d;
clrscr();
printf("Enter the value of usage in Watt");
scanf("%d", &a);
{
if(99<a<201)
b=(5*a)/100+a;
printf("%d", b);
}
{
if(200<c<351)
d=(15*c)/100+c;
printf("%d", d);
}
getch();
return 3;
}