#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num;
    srand(time(0));
    num = rand()%100 + 1; // Generates a number between 1 to 100
    printf("The number is %d", num);
    // Keep running the loop until the number is guessed;
    return 0;
}