#include<stdio.h>
#include<conio.h>
 
int main()
{
int *ptr = NULL;
printf("The Address of ptr is : %x\n", &ptr);
printf("The value of ptr is : %d\n", *&ptr);
getch();
return 0;
}