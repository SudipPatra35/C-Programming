#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,nguesses=1;
    srand(time(0));
    num = rand()%100 + 1; // Generates a number between 1 to 100
    //printf("The number is %d\n", num);
    // Keep running the loop until the number is guessed;
    do
    {
        printf("Guess the number 1 to 100\n");
        scanf("%d",&guess);  
        if (guess>num)
        {
            printf("Lower Number Please!\n");
        } 
        else if (guess<num)
        {
            printf("Higher Number Please!\n");
        } 
        else 
        {
            printf("Congratulation! You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    } while(guess!=num);
    getch();
    return 0;
}