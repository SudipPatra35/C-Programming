#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,n;
printf("Enter the size of Array\n");
scanf("%d",&n);
printf("Enter the elements of Array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
 printf("Even numbers are :\n");
for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        printf("%d\n",a[i]);
    }
}
printf("Odd numbers are :\n");
for(i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {
        printf("%d\n",a[i]);
    }
}
getch();
return 0;
}