#include<stdio.h>
#include<conio.h>
/*function declaration*/
int fact(int num);
int main()
{
    /*local variable defination*/
    int n,x;
    printf("Enter the number\n");
    scanf("%d", &n);
    /*calling a fnction to get max value*/
    x = fact(n);
    printf("Factorial of this number is : %d\n", x);
    return 12;
}
/*function returning the max between two number*/
int fact(int num)
{
    int i,f;
    f=1;
    for(i=1;i<=num;i++)
    {
     f=f*i;
    }
    return f;
}