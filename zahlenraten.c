#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { //main func
    
    srand(time(NULL));
    int GEHEIM = rand() % 100;
    int versuch = 0;
    int zahl = 0;
    
    printf("Suche die Geheime Zahl!\n");

    for (versuch = 0; versuch < 7; versuch++) { //for schleife

        scanf("%d", &zahl);
        
        if (zahl == -10) {                       //cheat code
            printf("%d\n", GEHEIM);
        }        
        
        else if (zahl > GEHEIM) {               
            printf("Niedriger!\n");
        }
        
        else if (zahl < GEHEIM) {                  
            printf("Hoeher!\n");
        }
        
        else if (zahl == GEHEIM) {              //zahl richtig geraten
            printf("Du hast es geschafft!\n");
            printf("Die Geheime Zahl war %d", GEHEIM);
            versuch = 7;
        }
    }
    return 0;
}