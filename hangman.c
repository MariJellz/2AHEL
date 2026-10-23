#include <stdio.h>

int main() {
    const char secret[] = "REDBULL4EVER";
    const int len = sizeof(secret) - 1;
    
    char guessed[len + 1]; 
    char guess;
    int hits = 0;
    
    // Initialisieren mit '_' und Null-Terminierung am Ende
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }
    guessed[len] = '\0';
    
    printf("Errate den grossen Buchstaben: ");
    scanf(" %c", &guess);
    
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess) {
            hits++;
            guessed[i] = guess;
        }
    }
    
    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }
    
    printf("\n%d mal ist der Buchstabe im Wort enthalten.\n", hits);
    
    return 0;
}