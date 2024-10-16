#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char st[20],ch;
int l,i,count=0;
printf("Enter String\n");
gets(st);
printf("Enter character to be searched\n");
scanf("%c",&ch);
l=strlen(st);
for(i=0;i<=l;i++)
{
    if(st[i]==ch)
    count++;
}
printf("%c occurs %d times",ch,count);
getch();
return 0;
}