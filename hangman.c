#include <stdio.h>

int main() {

    const char secret = 'x';
    const char guess = 'y';

    if (guess == secret) {
        printf("treffer, das secret ist %c", secret);
    }
    else {
        printf("schade");
    }
    
    return 0;
}