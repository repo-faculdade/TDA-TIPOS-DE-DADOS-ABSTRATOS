#include<stdio.h>

   struct  Cidadao 
    {
        int id;
        char nome[100];
        int idade;
    };
void imprimirCidadao(struct Cidadao c) {
    printf("ID: %d\n", c.id);
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
} 

int main() {
    struct Cidadao cidadao1; 
    printf("Digite o ID do cidadão: ");
    scanf("%d", &cidadao1.id);
    printf("Digite o primeiro nome do cidadão: ");
    scanf(" %s", cidadao1.nome); // Note: This will read a string with spaces
    printf("Digite a idade do cidadão: ");
    scanf("%d", &cidadao1.idade);

    imprimirCidadao(cidadao1);
    return 0;
}

