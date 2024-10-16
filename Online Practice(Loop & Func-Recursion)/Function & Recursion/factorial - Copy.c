#include<stdio.h>
#include<conio.h>
int factorial(int x);
int main()
{
int x;
printf("Enter the value of any number\n");
scanf("%d",&x);
factorial(x);
printf("The factorial of %d is %d", x, factorial(x));
getch();
return 0;
}

int factorial(int x)
{
    if(x==1 || x==0)
    {
    return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}