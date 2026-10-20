#include <stdio.h>

int main() {

    const char secret = 'x';
    char guess;
    
    printf("Errate den Buchstaben: ");
    
    if (scanf(" %c", &guess) != 1) {;
        printf("uengueltige eingabe");
        return 1;
    }
    
    if (guess == secret) {
        printf("treffer, das secret ist %c", secret);
    }
    else {
        printf("schade");
    }
    
    return 0;
}