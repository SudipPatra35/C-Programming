#include<stdio.h>
#include<conio.h>
 float force(float mass);
int main()
{
    float m;
    printf("Enter the value of mass in kgs\n");
    scanf("%f",&m);
    printf("\nThe value of force in newton is %.2f",force(m));
getch();
return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}