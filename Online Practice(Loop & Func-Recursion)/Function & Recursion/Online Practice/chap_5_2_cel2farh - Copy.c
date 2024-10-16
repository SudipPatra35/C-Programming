#include<stdio.h>
#include<conio.h>
float heat(int c);
int main()
{
float c;
printf("Enter celcius to get farenheit\n");
scanf("%f",&c);
printf("\n%f celcius = %f farenheit",c,heat(c));
getch();
return 0;
}
 
 float heat(int c)
 {
 float f;
f=(float)(9*c+160)/5;
 return f;
 }