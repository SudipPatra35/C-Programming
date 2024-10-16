#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter your marks to know yur grade");
scanf("%d",&a);
if((a>0) && (a<=50))
{
printf("Your grade is : C");
}
else if((a>50) && (a<81))
{
printf("Your grade is : B");
}
else if((a>80) && (a<91))
{
printf("Your grade is : A");
}
else
{
printf("Your graded is : A+");
}
getch();
return 10;
}