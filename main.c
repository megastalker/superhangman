#include <stdio.h>
#include "hangman.h"
#include <stdlib.h>
#include <time.h>
int main ()
{
    char secret[16];
    get_word(secret);
    printf("%d\n", is_word_guessed("secret", "aeiou"));
// prints: 0
printf("%d\n", is_word_guessed("hello", "aeihoul"));
// prints: 1
char result[30];
get_guessed_word("container", "arpstxgoieyu", result);
printf("%s \n", result);
// result = "_o_tai_er"
char result1[30] = "abcdefghijklmnopqrstuvwxyz";
get_available_letters("arpstxgoieyu", result1);
printf("%s\n", result1);

    return 0;
}