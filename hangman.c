#include <stdio.h>

int strcmp(const char word1[], char word2[]) {
    int diff = 0;
    for (int i = 0; word1[i] != '\0'; diff |= word1[i] != word2[i], i++) {
        
        return diff;
    }
}



int main() {
    const char secret[] = "REDBULL4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[len + 1]; 
    char guess;
    int fails = 0;

    // 1. Einmalig vor der Schleife mit '_' initialisieren
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }
    guessed[len] = '\0';

    while (fails < 9) {
        printf("\nErrate den grossen Buchstaben: "); 
        scanf(" %c", &guess);
        
        // 2. Lokale Treffer-Variable für diese Runde (wird bei jedem Versuch auf 0 gesetzt)
        int current_hits = 0;

        for (int i = 0; i < len; i++) {
            if (secret[i] == guess) {
                current_hits++;
                guessed[i] = guess; // Richtigen Buchstaben im Array speichern
            }
        }
        
        if (current_hits == 0) {
            fails++;
            printf("Der Buchstabe '%c' ist nicht im Wort.\n", guess);
        } else {
            printf("Der Buchstabe '%c' ist %d mal im Wort enthalten.\n", guess, current_hits);
        }
        
        // Aktuellen Stand des Wortes ausgeben
        for (int i = 0; i < len; i++) {
            printf("%c ", guessed[i]);
        }
        
        printf("\nFails: %d\n", fails);
    }

    return 0;
}