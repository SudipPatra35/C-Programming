#include<stdio.h>
#include<conio.h>

 struct student
 {
   int rno;
   char sname[40];
   int tot;
 }
 x;
 
int main()
{
printf("Enter roll,name,total marks\n");
scanf("%d %s %d",&x.rno,&x.sname,&x.tot);
printf("Roll%d\n", x.rno);
printf("Student name %s\n", x.sname);
printf("Total marks %d", x.tot);
getch();
return 0;
}