#include<stdio.h>
#include<conio.h>
int armstrong(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
int armstrong(int num)
{
    int x,r,sum;
    sum=0;
    x=num;
    while(num>0)
    {
      r=num%10;
      sum=sum*10+r;
      num=num/10;
    }
    if(x==sum)
    
       printf("\nIt is a Armstrong Number");
    
    else
    
        printf("\nIt is not a Armstrong Number");
    
    return x;
}