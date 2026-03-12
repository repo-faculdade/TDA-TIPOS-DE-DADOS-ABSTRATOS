#include <stdio.h>
#include<time.h>

//FUNCAO COMPLEXIDADE O(1) - CONSTANTE
void funcao_constante(int indice, int array[]) {
    int valor = array[indice];
    printf("O valor no index %d é: %d\n", indice, valor);
}

int main(){
    int pequeno[] = {10,20,30, 40, 50};
    int grande[1000000];
    for(int i=0;i<=10000; i++)
        grande[i] = i*2;

    printf("\n -------TESTING O(1)-------\n");

    funcao_constante(2, pequeno);

    funcao_constante(5500, grande);
    return 0;
}