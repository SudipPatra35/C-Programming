#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the range of n\n");
    scanf("%d", &n);
    printf("Sum of given natural number is : ");
    for (i=1;i<=n;i++)
    {
      sum=sum+i;  
    }
     printf("%d\n",sum);
    return 0;
}