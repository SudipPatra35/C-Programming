#include <stdio.h>
#include <string.h>
//Reverse sentence 
int main() {
    char sentence[100], temp;
    printf("Enter a sentence: ");
    gets(sentence);
    int length = strlen(sentence);

    for (int i = 0; i< length/2; i++) {
        temp = sentence [i];
        sentence [i] = sentence [length - 1 - i];
        sentence [length - 1 - i] = temp;
    }

    int start = 0 ;
    for(int i = 0; i<= length; i++) {
        if(sentence[i] == ' ' || sentence[i] == '\0') {
            for(int j = start ; j < (i + start)/2 ; j++) {
                temp = sentence [j];
                sentence [j] = sentence [i-1- (j-start)];
                sentence [i-1- (j-start)] = temp;
            } 
			start = i + 1;
        }
    }
    
    printf("Reversed sentence: %s\n", sentence);
return 0;
}