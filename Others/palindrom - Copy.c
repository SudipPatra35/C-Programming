#include<stdio.h>
#include<conio.h>
int palindrom(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    palindrom(n);
    return 0;
}
int palindrom(int num)
{
    int x,r,sum;
    sum=0;
    x=num;
    while(num>0)
    {
      r=num%10;
      num=num/10;
      sum=sum*10+r;
    }
    if(x==sum)
    
       printf("It is a Palindrom Number");
    
    else
    
        printf("It is not a Palindrom Number");
    
    return x;
}