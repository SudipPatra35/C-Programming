#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,r;
clrscr();
printf("Enter the Rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}
getch();
return 9;
}