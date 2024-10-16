#include<stdio.h>
#include<conio.h>
int main()
{
char grade;
clrscr();
printf("Enter Grade");
scanf("%c", &grade);
switch (grade)
{
case 'A': printf("Excellent !");
	  break;

case 'B': printf("Well Done");
	  break;

case 'C': printf("You Passed");
	  break;

case 'D': printf("Better Luck Next Time");
	  break;

default: printf("Invalid Grade");
}
printf("Your Grade is %c",grade);
getch();
return 9;
}

