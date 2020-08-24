/*
* Given a character, check if it is a vowel or a consonant
* Author: Pavly Salah
*/

#include <stdio.h>

// function to check if the character is a vowel letter
int char_is_vowel(char c) {

    // array of vowel letters (chars)
    char arr[5] = {'a', 'e', 'i', 'o', 'u'};

    // iterate through the arra
    int i;
    for(i = 0; i < sizeof(arr); i++) {
        // if the character matches any character in the array,
        // it's a vowel letter
        if(arr[i] == c)
            return 1;
    }

    // if the character doesn't match any character in the array,
    // it's a consonant letter
    return 0;
}


void main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    int vowel = char_is_vowel(c);

    if (vowel == 1)
        printf("%c is a vowel letter\n", c);
    else
        printf("%c is consonant\n", c);
}