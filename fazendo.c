#include <stdio.h>

void jogar(int todas_as_jogadas, int fim_do_tabuleiro, int tabuleiro[], int dado) {

    int cont = 0, casa = 0;

    while (cont < todas_as_jogadas) // Parada.
    {
        if (tabuleiro[dado] > 0)
        {
            
            if (tabuleiro[dado] + casa < fim_do_tabuleiro)
            {
                casa += tabuleiro[dado];
            }
            else
            {
                if (tabuleiro[dado] + casa == fim_do_tabuleiro)
                {
                    casa = 0;
                }
                else
                {
                    casa = 0;
                    casa += ;
                }             
            }
            
            
        }
        else if (tabuleiro[dado] < 0)
        {
            
        }
              
        cont++;
    }
    
    
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


//strcopy();
//strcmp();
//strlen();
