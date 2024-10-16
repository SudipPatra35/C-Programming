#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str1[12]="Hello";
char str2[12]="World";
char str3[12];
char str4[12]="ABFG";
char str5[12]="ABCD";
int len,x;
x=strcmp(str4,str5);
printf("%d\n",x);
strcpy(str3,str1);
printf("strcpy(str3,str1) : %s\n",str3);
strcat(str1,str2);
printf("strcat(str1,str2) : %s\n", str1);
len = strlen(str1);
printf("strlen(str1) : %d\n",len);
getch();
return 0;
}