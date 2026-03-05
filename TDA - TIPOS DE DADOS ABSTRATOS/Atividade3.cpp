#include<stdio.h>

   struct  GuiaArrecadacao
    {
        int numeroDocumento;
        float valor;
        char status[1]; // (caractere: 'P' para Pago, 'A' para Aberto).
    };

int main() {

    struct GuiaArrecadacao vetor[3]; // Vetor de 3 guias de arrecadação

    for(int i = 0; i < 3; i++) {
        printf("Digite o número do documento da guia %d: ", i + 1);
        scanf("%d", &vetor[i].numeroDocumento);
        printf("Digite o valor da guia %d: ", i + 1);
        scanf("%f", &vetor[i].valor);
        printf("Digite o status da guia %d (P para Pago, A para Aberto): ", i + 1);
        scanf(" %c", vetor[i].status);
    }
    for(int i = 0; i < 3; i++) {
        printf("----------------------------\n");
        printf("Número: %d\n", vetor[i].numeroDocumento);
        printf("Valor: %.2f\n", vetor[i].valor);
    }
    return 0;
}

