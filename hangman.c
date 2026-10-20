#include <stdio.h>

int main() {

    const char secret[] = "REDBULL4EVER"; //--> eig noch \0
    char guess;
    int hits = 0;
    
    printf("Errate den grossen Buchstaben: ");
    scanf(" %c", &guess);
    
    for (int i = 0; i < sizeof(secret) - 1; i++) {
        if (secret[i] == guess) {
            hits++;
        }
    }
    
    printf("%d sind im Wort enthalten", hits);
    
    return 0;
}