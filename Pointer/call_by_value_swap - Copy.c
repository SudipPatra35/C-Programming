#include<stdio.h>
#include<conio.h>
 int swap(int x, int y);
int main()
{
int a,b;
printf("Enter the value of a & b\n");
scanf("%d %d",&a,&b);
swap(a,b);
printf("a = %d\n",a);
printf("b = %d",b);
getch();
return 0;
}

int swap(int x, int y)
{
int t;
t=x;
x=y;
y=t;
return y;
}