#include <stdio.h>

typedef struct apagador {
    int id;
    double temp; // .
    char f;

} apagadores;


int main() {

    int T, n;
    
    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Repete T vezes.
    {
        scanf("%d", &n); // N sprinkers.

        apagadores sprikers[n];

        for (int g = 0; g < n; g++) { // Pega os N sprikers
            scanf("%d", &sprikers[g].id);
            scanf("%lf\n", &sprikers[g].temp);
            scanf("%c", &sprikers[g].f);
        }

        for (int g = 0; g < n; g++) {
            printf("%d ", sprikers[g].id);
            printf("%lf ", sprikers[g].temp);
            printf("%c\n", sprikers[g].f);
        }           
        
    }

return 0;    
}
