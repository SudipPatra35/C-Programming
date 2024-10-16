#include<stdio.h>
#include<conio.h>
 const int MAX=3;
int main()
{
int var[]={10,100,200};
int *ptr = var +2;
printf("%d",*ptr);
return 0;
}