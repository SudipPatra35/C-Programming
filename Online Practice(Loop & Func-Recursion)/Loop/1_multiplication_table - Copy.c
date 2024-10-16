#include<stdio.h>
int main()
{   
    int i,n,f=1;
    printf("Enter the range\n");
    scanf("%d", &n);
    printf("The multiplication table is :\n");
    for(i=1;i<=n;i++)
    {   f=i*n;
        printf("%d x %d is : %d\n",i,n,f);
    }
    return 0;   
}