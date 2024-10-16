#include<stdio.h>
#include<conio.h>
/*function declaration*/
int max(int num1, int num2);
int main()
{
    /*local variable defination*/
    int a=100;
    int b=200;
    int ret;
    /*calling a fnction to get max value*/
    ret = max(a,b);
    printf("Max value is : %d\n", ret);
    return 12;
}
/*function returning the max between two number*/
int max(int num1, int num2)
{
    int result;
    if(num1>num2)
    result=num1;
    else
    result=num2;
    return result;
}