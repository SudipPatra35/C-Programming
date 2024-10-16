#include <stdio.h>
int main() 
{
  int a[100][100],b[100][100],c[100][100],i,j,m,n,k,l;
  printf("Enter the Rows and Columns of 1st matrix\n");
 scanf("%d %d",&m, &n); 
printf("\nEnter elements of 1st matrix:\n");
  for (i=0;i<m;i++)
    for (j=0;j<n;j++)
 {      
      scanf("%d",&a[i][j]);
    }
printf("Enter the Rows and Columns of 2nd matrix\n");
scanf("%d %d",&n, &l);
 printf("\nEnter elements of 2nd matrix:\n");
  for (i=0;i<n;i++)
    for (j=0;j<l;j++)
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
  for (i=0;i<n;i++)
{
    for (j=0;j<l;j++)
 {      
      printf("%d\t",b[i][j]); 
    }

 printf("\n");
    }
    for (i=0;i<m;i++)
{
    for (j=0;j<l;j++)
 {      
    c[i][j]= 0;
    for(k=0;k<n;k++)
{
    c[i][j] = c[i][j] + a[i][k]*b[k][j];
}
    }
}
    printf("\nThe elements of 3rd matrix:\n");
  for (i=0;i<m;i++)
{
    for (j=0;j<l;j++)
 {      
      printf("%d\t",c[i][j]); 
    }
    
 printf("\n");
}
    return 0;
  }