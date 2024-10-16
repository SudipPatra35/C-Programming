#include <stdio.h>
#include <string.h>
//Anagram string
int main() {
    char str1[100], str2[100];
    char temp;
    printf("Enter 1st string: ");
    gets(str1);

    printf("Enter 2nd string: ");
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int pos = 0;

    for(int i =0; i<=len1; i++) {
        if(str1[i] > str1[i+1]) {
            temp = str1[i];
            str1[i] = str1[i+1];
            str1[i+1] = temp;
        }
        if(str2[i] > str2[i+1]) {
            temp = str2[i];
            str2[i] = str2[i+1];
            str2[i+1] = temp;
        }
    }
    
    if(len1 != len2) {
        printf("The strings are not anagrams\n");
    }
    else {
        for(int i =0; i<=len1; i++) {
            if(str1[i] == str2[i]) {
                pos = 1;
            }
        }
        if(pos) {
            printf("The strings are anagrams");
        }
        else {
            printf("The strings are not anagrams");
        }
    }

return 0;
}