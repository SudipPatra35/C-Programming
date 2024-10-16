#include<stdio.h>
#include<conio.h>
int main()
{
char day,e;
// clrscr();
printf("Enter the rank of day:");
scanf("%c %c",&day,&e);
enum f {apple,mango};
printf ("%d %d", apple,mango);
switch (day,e)
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
break;
}
// getch();
return 9;
}