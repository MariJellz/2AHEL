#include <stdio.h>

int main() {

    const char secret[] = "REDBULL4EVER"; //--> eig noch /0
    const int len = sizeof(secret) - 1;
    char guessed[len];
    char guess[120];
    int hits = 0;
    char anzahl = '_';
    
    for (int a = 0; a < len; a++) {
        guessed[a] = '_'
    }
    
    printf("Errate den grossen Buchstaben: ");
    scanf(" %c", &guess);
    
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess) {
            hits++;
            guessed[i] = guess;
        }
    }
    
    for (i = 0; i < len; i++) {
        printf("%c",guessed );
    }


    printf("%d sind im Wort enthalten", hits);
    
    return 0;
}