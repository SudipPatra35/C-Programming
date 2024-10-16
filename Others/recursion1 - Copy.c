#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a positive Integer\n");
    scanf("\n%d",&n);
    printf("Factorial of %d=%d",n,fact(n));
    return 0;
}
int fact(int n)
{
if (n==0)
return 1;
else
return n*fact(n-1);
}