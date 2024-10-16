#include <stdio.h>
int main() 
{
  int a[100][100],b[100][100],i,j,m,n;
  printf("Enter the Rows and Columns\n");
 scanf("%d %d",&m, &n); 
printf("\nEnter elements of 1st matrix:\n");
  for (i=0;i<m;i++)
    for (j=0;j<n;j++)
 {      
      scanf("%d",&a[i][j]);
    }
 printf("\nEnter elements of 2nd matrix:\n");
  for (i=0;i<m;i++)
    for (j=0;j<n;j++)
 {      
      scanf("%d",&b[i][j]);
    }

printf("\nThe elements of 1st matrix:\n");
  for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
 {      
      printf("%d\t",a[i][j]); 
    }
    printf("\n");
    }
printf("\nThe elements of 2nd matrix:\n");
  for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
 {      
      printf("%d\t",b[i][j]); 
    }

 printf("\n");
    }
    return 0;
  }