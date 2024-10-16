// Average of Three Number
#include<stdio.h>
#include<conio.h>
float average(int a, int b, int c);
int main()
{
float a,b,c;
printf("Enter the 1st number : \n");
scanf("%f", &a);
printf("Enter the 2nd number : \n");
scanf("%f", &b);
printf("Enter the 3rd number : \n");
scanf("%f", &c);
printf("The average of three number is : %f", average(a, b, c));
getch();
return 0;
}
float average(int a, int b, int c)
{
float r;
r = (float)(a+ b+ c)/3;
return r;
}