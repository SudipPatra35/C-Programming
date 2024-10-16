#include<stdio.h>
#include<conio.h>
/*function declaration*/
int add(int num1, int num2);
int main()
{
    /*local variable defination*/
    int a,b;
    int sum;
    printf("Enter two number");
    scanf("%d%d", &a,&b);
    /*calling a fnction to get max value*/
    sum = add(a,b);
    printf("Sum of two number is : %d\n", sum);
    return 12;
}
/*function returning the max between two number*/
int add(int num1, int num2)
{
    int result;
    result=num1+num2;
    return result;
}