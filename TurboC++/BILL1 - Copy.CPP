#include<stdio.h>
#include<conio.h>
int main()
{
int a;
float basic,bill_amt;
clrscr();
printf("Enter your electric usage in Watt");
scanf("%d", &a);
printf("Enter basic charges amount");
scanf("%f", &basic);

if((99<a)&&(a<201))
{
bill_amt=basic+basic*.05;
printf("Your Electric Bill amount is (in Rupees) : %f", bill_amt);
}
if((200<a)&&(a<351))
{
bill_amt=basic+basic*.15;;
printf("Your Electric Bill amount is (in Rupees) : %f", bill_amt);
}
if((350<a)&&(a<501))
{
bill_amt=basic+basic*.25;;
printf("Your Electric Bill amount is (in Rupees) : %f", bill_amt);
}
getch();
return 10;
}