#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char st[20];
int l,i,v=0,d=0,sp=0,c=0;
printf("Enter the String\n");
gets(st);
l=strlen(st);
for(i=0;i<l;i++)
{
    if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
    {
        v++;
    }
else if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z'))
c++;
else if(st[i]>='0' && st[i]<='9')
d++;
else 
sp++;
}
printf("Vowel = %d\n Consonant = %d\n Digit = %d\n Special Character = %d",v,c,d,sp);
getch();
return 0;
}