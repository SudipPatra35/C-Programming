#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,n,j,tem;
int  isSorted = 0;
printf("Enter the size of Array\n");
scanf("%d",&n);
printf("Enter the elements of Array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Input array is\n");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
// Bubble Sorting Begins //
for(i=0;i<n;i++)
{ 
     printf("\nWorking on pass number %d\n", i+1);
     isSorted = 1;
    for(j=0;j<(n-i-1);j++)
    {
        if(a[j]>a[j+1])
      {
        tem=a[j];
        a[j]=a[j+1];
        a[j+1]=tem;
        isSorted = 0;
      }
    }
    if(isSorted){
        printf("\nSorted array is : \n");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
        return;
    }
}

getch();
return 0;
}