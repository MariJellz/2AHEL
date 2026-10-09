#include <stdio.h>

int main() {
    
    int zahl = 0;
    int konst = 10;
    printf("Geben sie eine zahl ein: ");
    scanf("%d", &zahl);

    if (zahl > konst) {
        printf("Deine Zahl ist grosser als die Konstante!");
    }
    if (zahl < konst) {
        printf("Deine Zahl ist kleiner als die Konstante!");
    }
    if (zahl == konst) {
        printf("Gute Wahl!");
    }
     
    return 0;
}