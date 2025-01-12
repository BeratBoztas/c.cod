#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 200
#define MAX_LENGTH 15

char vowels[] = "aeiouAEIOU";
char consonants[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

char random_char(char *char_set) {
    return char_set[rand() % strlen(char_set)];
}

void generate_word(char *word) {
    int length = rand() % MAX_LENGTH + 1;
    word[0] = random_char(consonants);
    int prev_is_vowel = 0;

    for (int i = 1; i < length; i++) {
        word[i] = prev_is_vowel ? random_char(consonants) : random_char(vowels);
        prev_is_vowel = (word[i] == vowels[rand() % 5]);
    }
    word[length] = '\0';
}

void generate_text(char *text) {
    int num_words = rand() % MAX_WORDS + 1;
    text[0] = '\0';
    
    for (int i = 0; i < num_words; i++) {
        char word[MAX_LENGTH + 1];
        generate_word(word);
        strcat(text, word);
        if (i < num_words - 1) {
            strcat(text, " ");
        }
    }
}

void sort_words_by_length(char *text) {
    char *words[MAX_WORDS];
    int word_count = 0;
    char *token = strtok(text, " ");
    
    while (token != NULL) {
        words[word_count++] = token;
        token = strtok(NULL, " ");
    }
    
    for (int i = 0; i < word_count - 1; i++) {
        for (int j = 0; j < word_count - 1 - i; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                char *temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    
    text[0] = '\0';
    for (int i = 0; i < word_count; i++) {
        strcat(text, words[i]);
        if (i < word_count - 1) {
            strcat(text, " ");
        }
    }
}

int main() {
    srand(time(0));

    char text[10000];
    generate_text(text);
    printf("Oluşturulan Metin: \n%s\n", text);

    sort_words_by_length(text);
    printf("\nSıralanmış Metin: \n%s\n", text);

    return 0;
}
