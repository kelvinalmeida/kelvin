#include <stdio.h>

int one(int n, int b, int i, int j1, int j2, int matriz[][n]) {

    if (j1 >= 0 && j2 < n && i < n)
    {
        int base = 0;

        for (int j = j1; j <= j2; j++) {
            
            if (matriz[i][j] == 0)
                return 0; // Retorna 0 para não acrescentar a soma, pois não formamos um triângulo de 1.

            base++;
        }


        if(base == b)
            return 1; // Foi formado um triângulo de base b.

        i++;
        j1--;
        j2++;     

        one(n,b,i,j1,j2,matriz);
    }
    else {
        return 0;
    } 
}

int zero(int n, int b, int i, int j1, int j2, int matriz[][n]) {

    if (j1 >= 0 && j2 < n && i < n)
    {
        int base = 0;

        for (int j = j1; j <= j2; j++) {
            
            if (matriz[i][j] == 1)
                return 0; // Retorna 0 para não acrescentar a soma, pois não formamos um triângulo de 1.

            base++;
        }


        if(base == b)
            return 1; // Foi formado um triângulo de base b.

        i++;
        j1--;
        j2++;     

        zero(n,b,i,j1,j2,matriz);
    }
    else {
        return 0;
    } 
}

int main() {

    int T;

    scanf("%d", &T);

    for (int f = 1; f <= T; f++)
    {
        int b, n, triangulos_one = 0, triangulos_zero = 0;

        scanf("%d %d", &b, &n);

        int matriz[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &matriz[i][j]);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (matriz[i][j] == 1)
                    triangulos_one += one(n,b,i,j,j,matriz);


        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (matriz[i][j] == 0)
                    triangulos_zero += zero(n,b,i,j,j,matriz);

        printf("Caso %d:\n", f);
        printf("%d triangulos formados por 1\n", triangulos_one);
        printf("%d triangulos formados por 0\n", triangulos_zero);           
                
    }   

return 0;
}
