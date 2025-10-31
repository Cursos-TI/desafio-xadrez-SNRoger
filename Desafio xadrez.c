#include <stdio.h>

int main() {

    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int vertical = 2;
    int horizontal = 1;
    int contador;
    
    // Mover a torre 5 casas para a diteira
    printf("=== Movimento do Torre ===\n");
    for (contador = 1; contador <= torre; contador++)
    {
         printf("Torre Direita\n"); // imprime a direção do movimento
    }
       
     printf("\n"); // Linha em branco

     // O Bispo move-se na diagonal
    // Neste caso, ele se moverá 5 casas na diagonal para cima e à direita
    printf("=== Movimento do Bispo ===\n");
    
    // Utilizando estrutura WHILE para o Bispo
    contador = 1;
    while (contador <= bispo) 
    {
        printf("Cima Direita\n");
        contador++;
    }
    
    printf("\n"); // Linha em branco para separar as peças

    // A Rainha move-se em todas as direções
    // Neste caso, ela se moverá 8 casas para a esquerda
    printf("=== Movimento da Rainha ===\n");
    
    // Utilizando estrutura DO-WHILE para a Rainha
    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= rainha);
    
    printf("\n"); // Linha final

     printf("=== Movimento do Cavalo ===\n");
     printf("O Cavalo se move em formato de L: 2 casas para baixo e 1 casa para a esquerda\n\n");

     for (int i = 1; i <= vertical; i++)
     {
        printf("Cavalo Baixo\n");
    }
    contador = 1;
    while (contador <= horizontal) 
    {
        printf("Cavalo Esquerda\n");
        contador++;
    }
    
    printf("\n");
    printf("Movimento em L completo!\n");

    return 0;
}