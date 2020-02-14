#include <stdio.h>

void jogar(int todas_as_jogadas, int fim_do_tabuleiro, int tabuleiro[], int dado) {

    int cont = 0, casa = 0;

    casa += dado; // joguei o dado.

    // while (cont < todas_as_jogadas) // Parada.
    // {
        if (tabuleiro[casa] > 0) // Se o numero da casa for maior que zero.
        {
            if (casa + tabuleiro[casa] < fim_do_tabuleiro) // Se a soma da casa aonde voce avancou, mais numero da casa vai ser menor que o tabuleiro.
            {
                casa += tabuleiro[casa];
                return casa;
            }
            else
            {
                if (casa + tabuleiro[casa] >= fim_do_tabuleiro)
                {
                    int sobra;
                    sobra = (casa + tabuleiro[casa]) - (fim_do_tabuleiro - 1);
                    
                    for (; sobra >= fim_do_tabuleiro ;)
                    {
                        sobra = sobra - (fim_do_tabuleiro - 1);
                    }
        
                    casa = sobra - 1; // pois o 0 está incluindo como primeiro.
                    return casa;
                }            
            }
        }
        else if (tabuleiro[dado] < 0)
        {
            if (casa - tabuleiro[casa] >= 0) // Se a subtracao da casa aonde voce avancou, mais numero da casa vai ser maior que 0.
            {
                casa -= tabuleiro[casa];
                return casa;
            }
            else
            {
                if (casa - tabuleiro[casa] < 0)
                {
                    int sobra;
                    sobra = (casa - tabuleiro[casa]) * -1; // Para que a sobra não seja negativa.
                    
                    for (; sobra >= fim_do_tabuleiro ;)
                    {
                        sobra = sobra - (fim_do_tabuleiro - 1);
                    }
        
                    casa = (fim_do_tabuleiro - 1) - (sobra);
                    return casa;
                }            
            }
        }
        // cont++;
    // }
}

int main() {

    int numero_casas, numero_jogadores, numeros_rodadas;

    scanf("%d %d %d", numero_casas, numero_jogadores, numeros_rodadas);

    int tabuleiro[numero_casas];

    for (int i = 0; i < numero_casas; i++)
        scanf("%d", tabuleiro[i]); // Pego todos os números do tabuleiro.

        
    int jogadas_de_dado[numero_jogadores*numeros_rodadas];

    for (int i = 0; i < numero_jogadores*numeros_rodadas; i++)
        scanf("%d", jogadas_de_dado[i]); // Pego o numero de jogadas de todos.

    for (int i = 0; i < numero_jogadores; i++)
        jogar(numero_jogadores*numeros_rodadas, numero_casas, tabuleiro, jogadas_de_dado[i]); // Enviar um jogador por vez, calcula toda a sua trajetoria de todas as partidas, e já printa a sua posição final.

return 0;    
}
