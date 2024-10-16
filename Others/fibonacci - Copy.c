#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n,x=0,y=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Fibonacci Serise is : \n%d\n%d",x,y);
    fibonacci(n-2);
    return 0;
}
int fibonacci(int n)
{
  static int a=0,b=1,c;
    if(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
        return fibonacci(n-1);
    }
}