#include <stdio.h>

int main() {

    // Título 
    printf("**Desafio xadrez - Novato**\n");

    // Movimento da Torre
   
    int movimentoTorre = 5;  // A Torre se moverá 5 casas para a direita

    printf("\nMovimento da Torre:\n");

    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");  // Cada passo representa uma casa para a direita
    }

    
    // Movimento da Rainha

    int movimentoRainha = 8;  // A Rainha se moverá 8 casas para a esquerda
    int i = 0;                // Contador para o while

    printf("\nMovimento da Rainha:\n");

    while (i < movimentoRainha) {
        printf("Esquerda\n");
        i++;
    }


    // Movimento do Bispo

    int movimentoBispo = 5;

    i = 0; // Utilizando o contador

    printf("\nMovimento do Bispo:\n");

    do {
        printf("Cima Direita\n");
        i++;
    } while (i < movimentoBispo);

    return 0;
}
