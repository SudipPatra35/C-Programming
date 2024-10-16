#include<stdio.h>
#include<conio.h>
int main()
{
int a[1000],i,n,sum=0;
printf("Enter the size of Array:\n");
scanf("%d",&n);
printf("Enter the elements in Array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("Sum of array is : %d", sum);
getch();
return 0;
}