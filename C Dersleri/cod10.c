#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX_WORDS 200
#define MAX_LENGTH 15

char vowels[] = "aeiouAEIOU";
char consonants[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

char random_char(char *char_set) {
    return char_set[rand() % strlen(char_set)];
}

void generate_word(char *word) {
    int length = rand() % MAX_LENGTH + 1;
    int i;

    word[0] = random_char(consonants);
    int prev_is_vowel = 0;

    for (i = 1; i < length; i++) {
        if (prev_is_vowel) {
            word[i] = random_char(consonants);
            prev_is_vowel = 0;
        } else {
            if (rand() % 2) {
                word[i] = random_char(vowels);
                prev_is_vowel = 1;
            } else {
                word[i] = random_char(consonants);
                prev_is_vowel = 0;
            }
        }
    }

    word[i] = '\0';
}

void generate_text(char *text) {
    int num_words = rand() % MAX_WORDS + 1;
    int i;
    char word[MAX_LENGTH + 1];

    text[0] = '\0';

    for (i = 0; i < num_words; i++) {
        generate_word(word);
        strcat(text, word);
        if (i < num_words - 1) {
            strcat(text, " ");
        }
    }
}

int main() {
    srand(time(0));

    char text[10000];
    generate_text(text);

    printf("Oluşturulan Metin: \n%s\n", text);

    return 0;
}

