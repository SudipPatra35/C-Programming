#include<stdio.h>
#include<conio.h>
int main()
{
char day;
clrscr();
printf("Enter the rank of day:");
scanf("%c",&day);

switch (day)
{
case '1': printf("Monday");
	  break;

case '2': printf("Tuesday");
	  break;

case '3': printf("Wednesday");
	  break;

case '4': printf("Thursday");
	  break;

case '5': printf("Friday");
	  break;

case '6': printf("Saturday");
	  break;

case '7': printf("Sunday");
	  break;

default: printf("Invaild Input");
}
printf("Name of the day is : %c",day);
getch();
return 9;
}