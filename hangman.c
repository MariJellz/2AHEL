#include <stdio.h>

    int count_hits(char guess, const char secret[], const char guessed[], int len) {
    int hits = 0;
        for (int i = 0; i < len; i++) {
            if (secret[i] == guess) {
                hits++;
                guessed[i] = guess;
            }
        }
    return hits;
    }

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
    

//    for (int i = 0; i < len; i++) {
//        if (secret[i] == guess) {
//            hits++;
//            guessed[i] = guess;
//        }
//    }
    hits = count_hits(guess, secret, guessed, len);


    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }
    
    printf("\n%d mal ist der Buchstabe im Wort enthalten.\n", hits);
    
    return 0;
}