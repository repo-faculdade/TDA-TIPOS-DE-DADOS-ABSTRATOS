#include<stdio.h>

   struct  Processo 
    {
        int numeroProtocolo;
        int status; //(inteiro: 0 para "Em análise", 1 para "Deferido", 2 para "Indeferido").
    };

void atualizarStatus(struct Processo *p, int novoStatus) {
    (*p).status = novoStatus;
} 

int main() {

    struct Processo processo1; 
    processo1.numeroProtocolo = 12704;
    processo1.status = 0; 

    printf("Status do protocolo: %d\n", processo1.status);
    atualizarStatus(&processo1, 1);
    printf("Status do protocolo: %d\n", processo1.status);

    return 0;
}

