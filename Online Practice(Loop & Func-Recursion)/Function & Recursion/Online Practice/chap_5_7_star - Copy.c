#include<stdio.h>
#include<conio.h>
 int star(int n);
int main()
{
int n;
printf("Enter the rows you want :\n");
scanf("%d", &n);
star(n);
getch();
return 0;
}

int star(int n)
{
if (n==1)
{
  printf("*\n");
  return;
}
star(n-1);
for (int i=0; i<(2*n-1);i++)
{
    printf("*\n");
}
return 0;
}