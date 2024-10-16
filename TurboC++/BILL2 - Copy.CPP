#include<stdio.h>
#include<conio.h>
int main()
{
int a;
float bill_amt,charge_per_unit,payable_amt;
clrscr();
printf("Enter your electric usage in Watt");
scanf("%d", &a);
printf("Enter  charges per unit");
scanf("%f", &charge_per_unit);
bill_amt=a*charge_per_unit;

if((99<a)&&(a<201))
{
payable_amt=bill_amt+(bill_amt*0.05);
printf("Your Electric Bill amount is (in Rupees) : %f", payable_amt);
}

if((200<a)&&(a<351))
{
payable_amt=bill_amt+(bill_amt*0.15);
printf("Your Electric Bill amount is (in Rupees) : %f", payable_amt);
}

if((350<a)&&(a<501))
{
payable_amt=bill_amt+(bill_amt*0.25);
printf("Your Electric Bill amount is (in Rupees) : %f", payable_amt);
}

getch();
return 10;
}