#include <stdio.h>
int main() 
{
  int a[100][100],t[100][100],i,j,m,n;
  printf("Enter the Rows and Columns\n");
 scanf("%d %d",&m, &n); 
printf("\nEnter elements of 1st matrix:\n");
  for (i=0;i<m;i++)
    for (j=0;j<n;j++)
 {      
      scanf("%d",&a[i][j]);
    }
printf("\nThe elements of matrix:\n");
  for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
 {      
      printf("%d\t",a[i][j]); 
    }
    printf("\n");
    }
   
    for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        t[j][i]=a[i][j];
    }
}    
printf("\nThe Transpose matrix is:\n");
  for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
 {      
      printf("%d\t",t[i][j]); 
    }

 printf("\n");
    }
    return 0;
  }