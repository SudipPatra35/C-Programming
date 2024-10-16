#include <stdio.h> 
#include <conio.h>
#include <string.h>
struct student
{ 
  int rno;
  char sname[50];
  int tot;
}; 


main() 
{
struct student x[5];
int i;
for(i=0;i<2;i++)
{
printf("enter roll, name, total marks \n");
scanf("%d%s%d",&x[i].rno,&x[i].sname,&x[i].tot);
}
for(i=0;i<2;i++)
{
printf("\n rol %d",x[i].rno); 
printf("\n student name %s",x[i].sname); 
printf("\n totl marks %d",x[i].tot); 
}
getch();
}