#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5, b=1;
    fact(a,b);
    return 0;
}
int fact(int a, int b)
{
    if(a>0)
    {
        b=a*b;
        fact(a--,b);
    }
    else{
        printf("%d", b);
    }
    return 0;
}