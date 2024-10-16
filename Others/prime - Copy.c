#include<conio.h>
#include<stdio.h>
int prim(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
   prim(n);
   return 0;
}
int prim(int num)
{
    int i,f;
    f=0;i=2;
    while(i<=num/2)
    {
        if(num%i==0)
       {
        f=1;
        break;
    }
    i++;
    }

if(f==0)
{
printf("It is a prime number");
}
else
{
   printf("it is non prime number");
}
return f;
}