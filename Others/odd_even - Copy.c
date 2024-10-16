#include<stdio.h>
#include<conio.h>
int odd(int);
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
odd(n);
return 0;
}
int odd(int num1)
{
    if(num1%2==0)
    {
        printf("It is an even number"); 
    }
    else
    {
       printf("It is an odd number");
    }
    return num1;
}