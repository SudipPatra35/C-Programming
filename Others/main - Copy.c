#include <stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the number of rows yo want:\n");
    scanf("%d", & row);
    for(i=row;i>=1;i--)
    {
        for(j=row;j>i;j--)
        {
            printf(" ");
        }
        
            for(k=1;k<=i;k++)
            {
                printf("*");
            
            }
        printf("\n");
    
    }
    getch();
    return 0;
}

