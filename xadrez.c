#include <stdio.h>

// Constantes que representam o número de casas que cada peça pode se mover
const int torre_movimento = 5, bispo_movimento = 5, rainha_movimento = 8, cavalo_movimento = 2;

// Função recursiva com loops aninhados para mover o Bispo
void moveBispo(int movimentos)
{
    if (movimentos <= 0)
        return;

    for (int i = 0; i < 1; i++)
    { // Loop externo
        for (int j = 0; j < 1; j++)
        { // Loop interno
            printf("Cima, Direita\n");
        }
    }

    moveBispo(movimentos - 1);
}

// Função recursiva para mover a Torre 5 casas para a Direita
void moveTorre(int movimentos)
{
    if (movimentos <= 0)
        return;

    printf("Direita\n");
    moveTorre(movimentos - 1);
}

// Função recursiva para mover a Rainha 8 casas para a Esquerda
void moveRainha(int movimentos)
{
    if (movimentos <= 0)
        return;

    printf("Esquerda\n");
    moveRainha(movimentos - 1);
}

// Função com loops aninhados complexos para simular o movimento do Cavalo
void moveCavalo(int movimentos)
{
    for (int i = 0; i < movimentos; i++) //loop externo
    {
        int cima = 0;
        int direita = 0;

        while (1)  // Loop interno
        {
            if (cima < 2)
            {
                printf("Cima\n");
                cima++;
                continue; // Pula direto para a próxima iteração do while
            }

            if (direita < 1)
            {
                printf("Direita\n");
                direita++;
            }

            // Sai do loop quando o movimento completo foi feito
            if (cima == 2 && direita == 1)
                break;
        }
        
        break;
    }
}


int main()
{
    // Movimentação do Bispo (diagonal para cima e direita)
    printf("Movimentação do Bispo:\n");
    moveBispo(bispo_movimento);
    printf("\n");

    // Movimentação da Torre (5 casas para a direita)
    printf("Movimentação da Torre:\n");
    moveTorre(torre_movimento);
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("Movimentação da Rainha:\n");
    moveRainha(rainha_movimento);
    printf("\n");

    // Movimentação do Cavalo (duas casas para cima, uma para a direita)
    printf("Movimentação do Cavalo:\n");
    moveCavalo(cavalo_movimento);
    printf("\n");

    return 0;
}
