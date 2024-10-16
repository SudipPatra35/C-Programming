#include<stdio.h>
#include<conio.h>
int main()
{
float a,b;
clrscr();
printf("Enter your salary to know your facilities");
scanf("%f", &a);

if((0<a) && (a<15000))
{
printf("Sorry you will not get DA & HRA;");
printf("So your salary is : %f",a);
}

else if((15000<a) && (a<25001))
{
b=(a/10)+(a/20)+a;
printf("Good News! You will get 10% DA & 5% HRA;");
printf("So, Your salary is : %f",b);
}

else
{
b=a+(a*.15)+(a*.1);
printf("Good News! You will get 15% DA & 10% HRA;");
printf("So, Your salary is : %f",b);
}

getch();
return 10;
}